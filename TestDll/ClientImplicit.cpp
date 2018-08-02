#include <stdio.h>
using namespace std;
//implicit linking of dll function

extern "C" char const* __cdecl GetGreeting();

int main()
{
    puts(GetGreeting());
}