::compile and link dll

::compile dll
cl /c TestDll.cpp

::link obj
::link TestDll.obj /DLL /NOENTRY /EXPORT:GetGreeting
link TestDll.obj /DLL

::explicit link dll in client
cl ClientExplicit.cpp

::implicit link dll in client
cl ClientImplicit.cpp TestDll.lib
