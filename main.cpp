#include <weapon.h>
#include <iostream>
#include <human.h>
#include <windows.h>

using namespace std;

int main()
{
    Weapon szotgan ("szotgan", 8, 30);
    Weapon pistolet("pistolet", 12, 10);
    Human kasia("kasia", szotgan);
    Human tomek("tomek", pistolet);
    Human boleslaw("bolek", pistolet);

    for (int i = 0; i < 5; i++)
    {
        kasia.attack(boleslaw);
        tomek.attack(kasia);
        boleslaw.attack(tomek);
        boleslaw.printHowMuchLife();
        tomek.printHowMuchLife();
        kasia.printHowMuchLife();
        cout << " _________________________ " << endl;
        Sleep(1000);
    }
    return 0;
}
