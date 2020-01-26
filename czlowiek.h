#ifndef CZLOWIEK_H
#define CZLOWIEK_H
#include <string>
#include <bron.h>

using namespace std;

class Czlowiek
{
public:
    Czlowiek(string p_imie, Bron p_bron);

    void uderz(int hp);
    int ileZycia();
    void ulecz();
    void wyswietlIleZycia();
    bool czyZyje();
    void atakuj();
private:
    int zycie;
    string imie;
    Bron bron;
};

#endif // CZLOWIEK_H
