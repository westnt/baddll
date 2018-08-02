#include <windows.h>
#include <stdio.h>
#include <iostream>

using namespace std;
//explicit linking of dll function
int main()
{
    HMODULE const TestDll = LoadLibraryExW(L"TestDll.dll", nullptr, 0);

    using GetGreetingType = char const* (__cdecl*)();

    GetGreetingType const GetGreeting = 
    reinterpret_cast<GetGreetingType>(
        GetProcAddress(TestDll, "GetGreeting"));

    puts(GetGreeting());
    FreeLibrary(TestDll);
}