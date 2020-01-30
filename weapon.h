#ifndef WEAPON_H
#define WEAPON_H
#include <string>
#include <iostream>

using namespace std;

class Weapon
{
public:
    Weapon(string p_name, int p_ammunition, int p_power);
    bool shot();
    void printAmmunition();
    int getPower();
private:
    string name;
    int power;
    int ammunition;
};

#endif // WEAPON_H
