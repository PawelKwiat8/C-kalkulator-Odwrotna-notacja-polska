#ifndef OBLICZENIA_H
#define OBLICZENIA_H

#include <iostream>
#include <math.h>
using namespace std;

class ObliczeniaClass
{
    ///licznik
    int q,wsk,j;
    ///zmienna do poruszania sie po stosie
    string x;
    float a,b,pom_tg;
    ///wynik tymczasowy
    float wynik;

public:
    ///zmienna slużąca do kontroli blędów
    bool blad ;
    ///wskażnik do tablicy T
    string *T;
    ///wynik ostateczny
    float WYNIK;
    ///tablica slużąca za stos
    float stos[100];

    ObliczeniaClass();
    ~ObliczeniaClass();

    void oblicz();
    void stosf(int s[],int wskpom);
    void reset();
};

#endif // OBLICZENIA_H
