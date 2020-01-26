#include "czlowiek.h"
#include <iostream>

using namespace std;

Czlowiek::Czlowiek(string p_imie, Bron p_bron) : bron(p_bron)
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
    return zycie;
}

void Czlowiek::ulecz()
{
    if (czyZyje() == true)
    {
       zycie = 100;
       //test
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
        string pasekZycia = "[";
        for (int i = 0; i < 100; i += 10)
        {
            if (i < zycie)
            {
                pasekZycia += "I";
            }
            else
            {
                pasekZycia += " ";
            }
        }
        pasekZycia += "]";
        cout << imie << " ma zycia = " << ileZycia() << " " << pasekZycia << endl;
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

void Czlowiek::atakuj()
{
    cout << imie;
    bron.strzal();
}

