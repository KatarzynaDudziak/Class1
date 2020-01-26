#ifndef BRON_H
#define BRON_H
#include <string>
#include <iostream>

using namespace std;

class Bron
{
public:
    Bron(string p_nazwa);
    void strzal();
    void wyswietlAmunicje();
private:
    string nazwa;
    int moc;
    int amunicja;


};

#endif // BRON_H
