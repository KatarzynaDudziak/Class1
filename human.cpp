#include <human.h>
#include <iostream>

using namespace std;

Human::Human(string p_name, Weapon p_weapon) : weapon(p_weapon)
{
    life = 100;
    name = p_name;
}

void Human::makeDamage(int hp)
{
    if (isAlive() == false)
    {
        cout << " Nie moge uderzyc " << name << " bo nie zyje!!" << endl;
        return;
    }
    life -= hp;
    if (isAlive() == false)
    {
        cout << name << " Umiera" << endl;
    }
}

int Human::howMuchLife()
{
    return life;
}

void Human::heal()
{
    if (isAlive() == true)
    {
        life = 100;
        cout << name << " leczy sie" << endl;

    }
    else
    {
        cout << name << " Nie zyje i nie moge go uleczyc" << endl;
    }
}

void Human::printHowMuchLife()
{
    if (isAlive() == true)
    {
        string lifeBar = "[";
        for (int i = 0; i < 100; i += 10)
        {
            if (i < life)
            {
                lifeBar += "I";
            }
            else
            {
                lifeBar += " ";
            }
        }
        lifeBar += "]";
        cout << name << " ma zycia = " << howMuchLife() << " " << lifeBar << endl;
    }
    else
    {
        cout << name << " Nie zyje" << endl;
    }
}

bool Human::isAlive()
{
    if (life <= 0)
    {
        return false;
    }
    return true;
    // return life <= 0;
}

void Human::attack(Human &p_target)
{
    if (isAlive() == false)
    {
        return;
    }
    cout << name;
    if (weapon.shot() == true)
    {
        cout << " Strzelam do "<< p_target.getName() << endl;
        p_target.makeDamage(weapon.getPower());
    }
    else
    {
        cout << " Brak amunicji" << endl;
    }
}

string Human::getName()
{
    return name;
}
