dim CBApplication
dim plugin

set CBApplication = Wscript.CreateObject("ClipboardToWord.Application")

CBApplication.Visible = true

set plugin = CBApplication.LoadPlugin("C:\Users\Clifford\Documents\Visual Studio 2017\Projects\Office\build\Release\viewerplugin.dll")



