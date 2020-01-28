#include "arms.h"
#include <iostream>
#include <human.h>
#include <windows.h>

using namespace std;

int main()
{
    Arms pistolet("pistolet");
    Human kasia("kasia", pistolet);
    Human tomek("tomek", pistolet);
    Human boleslaw("bolek", pistolet);

    for (int i = 0; i < 5; i++)
    {
        kasia.attack(boleslaw);
        tomek.attack(kasia);
        Sleep(1000);
    }
    return 0;
}
