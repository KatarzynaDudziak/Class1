#ifndef Human_H
#define Human_H
#include <string>
#include <weapon.h>

using namespace std;

class Human
{
public:
    Human(string p_name, Weapon p_weapon);

    void makeDamage(int hp);
    int howMuchLife();
    void heal();
    void printHowMuchLife();
    bool isAlive();
    void attack(Human &p_target);
    string getName();
private:
    int life;
    string name;
    Weapon weapon;
};

#endif // HUMAN_H
