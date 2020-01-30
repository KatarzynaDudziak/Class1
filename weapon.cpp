#include <weapon.h>

using namespace std;

Weapon::Weapon(string p_name, int p_ammunition, int p_power)
{
    name = p_name;
    ammunition = p_ammunition;
    power = p_power;
}

bool Weapon::shot()
{
    if (ammunition > 0)
    {
        ammunition --;
        cout << " Strzela !! Pif - Paf!! ";
        return true;
    }
    else
    {
        return false;
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

int Weapon::getPower()
{
    return power;
}
