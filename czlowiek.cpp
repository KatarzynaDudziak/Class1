#include "czlowiek.h"
#include <iostream>

using namespace std;

Czlowiek::Czlowiek(string p_imie)
{
    zycie = 100;
    imie = p_imie;

}

void Czlowiek::uderz(int hp)
{
   if (czyZyje() == false)
   {
       cout << " Nie moge uderzyc " << imie << " bo nie zyje!!" << endl;
       return;
   }
   zycie -= hp;
   if (czyZyje() == false)
   {
       cout << imie << " Umiera" << endl;
   }
}

int Czlowiek::ileZycia()
{
    return zycie; // test
}

void Czlowiek::ulecz()
{
    if (czyZyje() == true)
    {
       zycie = 100;
    }
    else
    {
        cout << imie << " Nie zyje i nie moge go uleczyc" << endl;
    }
}

void Czlowiek::wyswietlIleZycia()
{
    if (czyZyje() == true)
    {
        cout << imie << " ma zycia = " << ileZycia() << endl;
    }
    else
    {
        cout << imie << " Nie zyje" << endl;
    }
}

bool Czlowiek::czyZyje()
{
    if (zycie <= 0)
    {
        return false;
    }
    return true;
    // return zycie <= 0;
}

