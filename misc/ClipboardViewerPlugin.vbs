dim CBApplication
dim plugin

set CBApplication = Wscript.CreateObject("ClipboardToWord.Application")

CBApplication.Visible = true

set plugin = CBApplication.LoadPlugin("C:\Users\Clifford\source\Office\build\Debug\viewerplugin.dll")



