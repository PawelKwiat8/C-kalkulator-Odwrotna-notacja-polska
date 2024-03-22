#ifndef KONWERTER_H
#define KONWERTER_H

#include <iostream>
using namespace std;

class KonwerterClass
{
    /// tablica służąca za stos
    char stos[100];
protected:
    /// licznik nr 1
    int q;
    /// licznik nr 2
    int u;
    /// zmienna do wczytywania kolejnych liczb z tablicy
    string x;

public:
    /// wskaznik do tablicy
    string *tab_out;
    /// wskaznik do tablicy2
    string *tab_in;
    /// zmienna do poruszania sie po stosie
    int wsk;

    KonwerterClass();
    ~KonwerterClass();

    void zamiana();
    void reset();
};

#endif // KONWERTER_H

