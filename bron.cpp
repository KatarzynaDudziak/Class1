#include "bron.h"

using namespace std;

Bron::Bron(string p_nazwa)
{
    nazwa = p_nazwa;
    amunicja = 10;
    moc = 5;
}

void Bron::strzal()
{
    if (amunicja > 0)
    {
        amunicja --;
        cout << " Strzela !! Pif - Paf!! ";
    }
    else
    {
        cout << " Brak amunicji" << endl;
    }
}

void Bron::wyswietlAmunicje()
{
    if (amunicja <= 0)
    {
        cout << "Skonczyla mi sie amunicja" << endl;
    }
    else
    {
        cout << "Mam " << amunicja << " amunicji" << endl;
    }
}

