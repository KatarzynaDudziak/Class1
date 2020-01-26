#include "bron.h"
#include <iostream>
#include <czlowiek.h>
#include <windows.h>


using namespace std;


int main()
{
//    Czlowiek kasia("kasia");
//    Czlowiek tomek("tomek");

//    kasia.uderz(10);
//    kasia.wyswietlIleZycia();
//    kasia.ulecz();
//    kasia.wyswietlIleZycia();
//    tomek.uderz(50);
//    tomek.wyswietlIleZycia();
//    tomek.ulecz();
//    tomek.wyswietlIleZycia();

    Bron pistolet("pistolet");
    for (int i = 0; i < 12; i++)
    {
        pistolet.strzal();
        pistolet.wyswietlAmunicje();
        Sleep(1000);
    }






    return 0;
}

