#include "bron.h"
#include <iostream>
#include <czlowiek.h>
#include <windows.h>

using namespace std;

int main()
{
    Bron pistolet("pistolet");
    Czlowiek kasia("kasia", pistolet);
    Czlowiek tomek("tomek", pistolet);


    for (int i = 0; i < 12; i++)
    {
        kasia.atakuj();
        tomek.atakuj();
        Sleep(1000);
    }
    return 0;
}
