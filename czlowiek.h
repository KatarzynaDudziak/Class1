#ifndef CZLOWIEK_H
#define CZLOWIEK_H
#include <string>

using namespace std;

class Czlowiek
{
public:
    Czlowiek(string p_imie);

    void uderz(int hp);
    int ileZycia();
    void ulecz();
    void wyswietlIleZycia();
    bool czyZyje();
private:
    int zycie;
    string imie;
};

#endif // CZLOWIEK_H
