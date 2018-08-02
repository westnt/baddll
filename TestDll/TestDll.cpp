#include <iostream>
#include <Windows.h>

#pragma comment(lib,"user32.lib");

extern "C" __declspec(dllexport) char const* __cdecl GetGreeting()
{
    return "Hello, C++ Programmers!";
}

 bool WINAPI DllMain( HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpvReserved)
{
   printf("this is dllmain!");
   MessageBox(0, "I am an injected dll!", "Woops!", MB_OK);
    return 1;
}