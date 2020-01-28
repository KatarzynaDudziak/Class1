#ifndef Human_H
#define Human_H
#include <string>
#include <arms.h>

using namespace std;

class Human
{
public:
    Human(string p_name, Arms p_arms);

    void reduceLife(int hp);
    int howMuchLife();
    void heal();
    void showHowMuchLife();
    bool isAlive();
    void attack(Human p_target);
    string pullName();
private:
    int life;
    string name;
    Arms arms;
};

#endif // HUMAN_H
