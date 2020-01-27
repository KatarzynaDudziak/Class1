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
    Czlowiek boleslaw("bolek", pistolet);

    for (int i = 0; i < 5; i++)
    {
        kasia.atakuj(boleslaw);
        tomek.atakuj(kasia);
        Sleep(1000);
    }
    return 0;
}
