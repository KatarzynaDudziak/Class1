#ifndef ARMS_H
#define ARMS_H
#include <string>
#include <iostream>

using namespace std;

class Arms
{
public:
    Arms(string p_name);
    void shot();
    void showAmmunition();
private:
    string name;
    int power;
    int ammunition;
};

#endif // ARMS_H
