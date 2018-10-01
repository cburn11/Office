dim propset
dim CBApplication
dim keepSleeping
dim plugin

set CBApplication = Wscript.CreateObject("ClipboardToWord.Application", "ClipboardEvents_")


Function ClipboardEvents_NewBitmapOnClipboard()

	'MsgBox "NewBitmapOnClipboard"

End Function 

Function ClipboardEvents_ClipboardUpdate()

	'MsgBox "ClipboardUpdate"

End Function

Function ClipboardEvents_BitmapSavedToTempFile(path)

	'MsgBox path

End Function

Function ClipboardEvents_Quit()
	keepSleeping=false
End Function

CBApplication.Monitor = FALSE
CBApplication.Monitor = TRUE

set plugin = CBApplication.LoadPlugin("C:\Users\Clifford\Documents\Visual Studio 2015\Projects\Office\Debug\ClipboardToWordPlugin.dll")

if (CBApplication.Visible = FALSE) then

	CBApplication.Visible = TRUE

end if

propset = plugin.SetProperty("SaveDir", "C:\Users\Clifford\Documents\Visual Studio 2015\Projects\Office\github\Office\pics\")

keepSleeping=true
while keepSleeping
    WScript.Sleep 200
wend
