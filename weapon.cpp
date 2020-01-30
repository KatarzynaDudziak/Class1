#include "weapon.h"

using namespace std;

Weapon::Weapon(string p_name)
{
    name = p_name;
    ammunition = 10;
    power = 5;
}

void Weapon::shot()
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

void Weapon::printAmmunition()
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
