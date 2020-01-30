#ifndef WEAPON_H
#define WEAPON_H
#include <string>
#include <iostream>

using namespace std;

class Weapon
{
public:
    Weapon(string p_name);
    void shot();
    void printAmmunition();
private:
    string name;
    int power;
    int ammunition;
};

#endif // WEAPON_H
