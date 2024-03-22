#include "Obliczenia.h"

ObliczeniaClass::ObliczeniaClass()
{
    j = -1;
    WYNIK = 0;
    q = 0;
    x = "0";
    wsk = 0;
    a = 0;
    b = 0;
    wynik = 0;
    blad = 0;
    pom_tg = 0;

    for (int i = 0; i < 100; i++)
    {
        stos[i] = 0;
    }
}

ObliczeniaClass::~ObliczeniaClass()
{
    delete[] T;
}

void ObliczeniaClass::stosf(int s[], int wskpom)
{
    cout << "stos :";
    while (wskpom >= 0)
    {
        cout << s[wskpom--] << " ";
    }
    cout << endl;
}

void ObliczeniaClass::reset()
{
    j = -1;
    WYNIK = 0;
    q = 0;
    x = "0";
    wsk = 0;
    a = 0;
    b = 0;
    wynik = 0;
    blad = 0;
    pom_tg = 0;
    for (int i = 0; i < 100; i++)
    {
        stos[i] = 0;
    }
}

/**
 * @brief Obliczenia::oblicz
 * główna funkcja klasy Obliczenia
 * z notacji ONP liczy wynik
 */
void ObliczeniaClass::oblicz()
{
    do
    {
        x = T[q++];

        if (x == "+" || x == "-" || x == "*" || x == "/" || x == "^")
        {
            a = stos[--wsk];
            b = stos[wsk - 1];

            switch (x[0])
            {
            case '+':
                wynik = a + b;
                break;
            case '-':
                wynik = b - a;
                break;
            case '*':
                wynik = a * b;
                break;
            case '/':
                if (a == 0)
                {
                    blad = 1;
                    break;
                }
                else
                    wynik = b / a;
                break;
            case '^':
                wynik = pow(b, a);
                break;
            }

            stos[wsk] = 0;
            stos[--wsk] = wynik;
        }

        else if (x == "=")
        {
            if (blad == 0)
                WYNIK = stos[wsk - 1];
            // cout << "WYNIK OSTATECZNY: " << stos[wsk - 1] << endl;
        }

        else if (x[0] >= '0' && x[0] <= '9')
        {
            if (x[1] == '.')
            {
                j = -1;
                stos[wsk] += x[0] - 48;
                for (int i = 0; i < int(x.size() - 2); i++)
                {
                    stos[wsk] += pow(10, j) * (x[i + 2] - 48);
                    j--;
                }
            }
            else
            {

                for (int i = 0; i < int(x.size()); i++)
                {
                    stos[wsk] += pow(10, i) * (x[x.size() - 1 - i] - 48);
                }
            }
        }

        else if (x[0] == 't' || x[0] == 'c' || x[0] == 's')
        {
            pom_tg = 0;
            if (x[2] == '.')
            {
                j = -1;
                pom_tg += x[1] - 48;
                for (int i = 0; i < int(x.size()) - 3; i++)
                {
                    pom_tg += pow(10, j) * (x[i + 3] - 48);
                    j--;
                }
            }
            else
            {
                for (int i = 0; i < int(x.size()) - 1; i++)
                {
                    pom_tg += pow(10, i) * (x[x.size() - 1 - i] - 48);
                }
            }
            switch (x[0])
            {
            case 't':
                if (pom_tg - int(pom_tg) == 0 && int(pom_tg) % 90 == 0)
                {
                    blad = 1;
                    break;
                }

                else
                {
                    stos[wsk] = tan((pom_tg) * 2 * M_PI / 360);
                    break;
                }

            case 'c':
                stos[wsk] = cos((pom_tg) * 2 * M_PI / 360);
                break;
            case 's':
                stos[wsk] = sin((pom_tg) * 2 * M_PI / 360);
                break;
            }
        }

        wsk++;

    } while (x != "=");
}
