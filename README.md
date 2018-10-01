# Office
Various c/c++ programs and components automating my office workflow through Office's ole/automation framework.

I spend a lot of time in Office. These are my notes to remind me what everything does. I doubt this will be useful to
anyone else. 

You wrote WordTemplateWizard and ClipboardToWord in 2008 to work against Office 2003. You wrote them in C
because that's what you knew. The programs still work against Office 2016. And compile with visual studio 2015. You got
sick of trying to use COM with C and started to use C++. You got tired of trying to use COM with just C++ and started
to use ATL for your latest plugins. To be safe, use at least visual studio 2015 to compile the entire solution. 

-------------------------------------------------------------------

The programs and components interact with Office applications either through each office application's IDispatch
automation framework or directly through vtable interfaces. 

In common/Office/[Office version]/ there are idl files
that the midl compiler can use to generate c headers for calling the vtable interfaces. The windows sdk's oleview utility
will display the office type library in idl. The displayed idl needs editing to correct the errors reported by the midl
utility. Mostly renaming interfaces consistently and bringing enum declarations to the top of the file. You had a set of word
vba macros that did most of this for you, but they have been lost over time.

(Note to me: It has been a long time since you tried to compile the idl files into headers. Just use the already
generated headers or the IDispatch interfaces. Also, the generated headers need some editing to be compiled by cl.
Just use the already edited headers. You only edited the headers to work with C compilation, so make sure CINTERFACE and
COBJMACROS are defined.)

Working with the vtable interfaces directly is often more trouble than it is worth because you have to pass VT_ERROR
VARIANTARGs for each unused method argument. You found an article, maybe in Mircrosoft's System Journal (You have not
been able to find that article again), that describes a function, "Autowrap", that packaged VARIANTs and called Invoke 
for you. You wrote your own version, AutowrapNamedInvoke, in the Autowrap helper library, that allows you pass the 
method name as a string and optional arguments named as strings which greatly simplified calling methods. 

For example: Word's Document interface has method 

[id(0x00000178), hidden, helpcontext(0x096b0178)]
HRESULT SaveAs(
                [in, optional] VARIANT* FileName, 
                [in, optional] VARIANT* FileFormat, 
                [in, optional] VARIANT* LockComments, 
                [in, optional] VARIANT* Password, 
                [in, optional] VARIANT* AddToRecentFiles, 
                [in, optional] VARIANT* WritePassword, 
                [in, optional] VARIANT* ReadOnlyRecommended, 
                [in, optional] VARIANT* EmbedTrueTypeFonts, 
                [in, optional] VARIANT* SaveNativePictureFormat, 
                [in, optional] VARIANT* SaveFormsData, 
                [in, optional] VARIANT* SaveAsAOCELetter, 
                [in, optional] VARIANT* Encoding, 
                [in, optional] VARIANT* InsertLineBreaks, 
                [in, optional] VARIANT* AllowSubstitutions, 
                [in, optional] VARIANT* LineEnding, 
                [in, optional] VARIANT* AddBiDiMarks);

That you can call as:

VARIANT	varName, varFormat, varResult;
varName.vt = VT_BSTR;	varName.bstrVal = SysAllocString(g_szSavePath);
varFormat.vt = VT_I4;	/*varFormat.lVal = wdFormatDocument;*/
#if _WIN32_WINNT >= 0x0600
		varFormat.lVal = 16;	//	wdFormatDocumentDefault 
#else
		varFormat.lVal = 0;		//	wdFormatDocument
#endif
hr = AutowrapNamedInvoke(&varResult, g_pDoc, L"SaveAs", 2,
	L"FileName", &varName, L"FileFormat", &varFormat);
	
Instead of trying to pass all 16 parameters.

Also note, the arguments are listed as variants. You need to goto MSDN's Office VBA's reference to confirm the
actual types. IDispatch::Invoke does try to coerce the types for you if you pass the wrong type.

-------------------------------------------------------------------

The misc folder contains a .reg file that contains the minimum keys that need to be created in order to
register ClipboardToWord's clsid and typelib.

If you are going to import the .reg file, change the paths to point to correctly point to the.tlb and .exe 

-------------------------------------------------------------------

The misc folder as contains a .vbs script that runs if the minimum registry keys are correctly set.

The .vbs script creates an instance of ClipboardToWord.Application and connects to the instance's outgoing
interfaces for IClipboardEvents.

The script then uses the instance to load the BitmapToJPGConverter plugin.

The script then spins until it receives the Quit event from the instance.

------------------------------------------------------------------

The misc folder contains a word template for testing with WordTemplateWizard

command line: WordTemplateWizard.exe template (path_to_tempate) [[save] (save path)]
where "save path" must include the filename and extension. The flags must be in that order. (This command line
processing is shamefully bad. You could not have done this in a worse if you tried.)

Replaceable tags take the form: [[tagname]]
Generate replaces [[tagname]] with the set replacement text. All duplicate [[tagname]] are replaced
with the same replacement text. 

Keyboard: 	PAGE_UP/PAGE_DOWN cycles through the tags.
		Alt+b displays the tag drop down combo box


------------------------------------------------------------------

ClipboardToWord.exe monitors the clipboard, and if it detects a bitmap pasted to the clipboard, 
it then pastes that bitmap into a word document. Command line options: NOWORD ClipboardToWord does 
not start a word instance and instead notifies loaded plugins when new bitmaps are available. 
Plugins are COM components CLSID_ClipboardEvents or CLSID_ClipoboardEventsPlugin. 

In my workflow, the most useful plugin is the OCRPlugin which converts the clipboard bitmap into a tiff file. It then
uses Office's MODI component to perform OCR on the tiff. The "snipping" tool, included in Vista and later,
makes converting arbitrary image text into ascii/unicode text convenient. MODI last shipped with Office 2007, but you
can install it through the standalone "sharepoint" package.  The new window's runtime has an OCR feature that you have
thought about using to replace your dependency on MODI.


-------------------------------------------------------------------

ViewerPlugin grabs bitmaps copied to the clipboard and displays them in its main window. The bitmaps are display using Direct2D. The context
menu is generated through DirectComposition and Direct2D. The bitmaps can collectively or individually saved as jpegs.

