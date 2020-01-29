#include "arms.h"

using namespace std;

Arms::Arms(string p_name)
{
    name = p_name;
    ammunition = 10;
    power = 5;
}

void Arms::shot()
{
    if (ammunition > 0)
    {
        ammunition --;
        cout << " Strzela !! Pif - Paf!! ";
    }
    else
    {
        cout << " Brak amunicji" << endl;
    }
}

void Arms::showAmmunition()
{
    if (ammunition <= 0)
    {
        cout << "Skonczyla mi sie amunicja" << endl;
    }
    else
    {
        cout << "Mam " << ammunition << " amunicji" << endl;
    }
}

