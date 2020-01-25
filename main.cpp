#include <iostream>
#include <czlowiek.h>


using namespace std;


int main()
{
    Czlowiek kasia("kasia");
    Czlowiek tomek("tomek");

    kasia.uderz(10);
    kasia.wyswietlIleZycia();
    kasia.ulecz();
    kasia.wyswietlIleZycia();
    tomek.uderz(50);
    tomek.wyswietlIleZycia();
    tomek.ulecz();
    tomek.wyswietlIleZycia();



    return 0;
}

