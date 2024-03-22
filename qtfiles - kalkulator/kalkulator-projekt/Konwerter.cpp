#include "Konwerter.h"

KonwerterClass::KonwerterClass()
{
    u = 0;
    q = 0;
    wsk = 0;
    x = "0";
    tab_out = new string[100];
    tab_in = new string[100];
    for (int i = 0; i < 100; i++)
    {
        tab_out[i] = "\0";
        tab_in[i] = "\0";
        stos[i] = '\0';
    }
}

KonwerterClass::~KonwerterClass()
{
    delete[] tab_out;
    delete[] tab_in;
}

void KonwerterClass::reset()
{
    u = 0;
    q = 0;
    wsk = 0;
    x = "0";
    for (int i = 0; i < 100; i++)
    {
        tab_in[i] = "\0";
        tab_out[i] = "\0";
        stos[i] = '\0';
    }
}

void KonwerterClass::zamiana()
{
    do
    {
        x = tab_in[u++];

        if ((x[0] >= '0' && x[0] <= '9') || x[0] == 't' || x[0] == 'c' || x[0] == 's')
        {
            tab_out[q++] = x;
        }
        else
        {
            if (x == "(")
            {
                stos[wsk++] = '(';
            }
            else if (x == ")")
            {
                while (stos[wsk-1] != '(')
                    tab_out[q++] = stos[--wsk];
                wsk--;
            }
            else if (x == "+" || x == "-")
            {
                while (wsk && stos[wsk-1] != '(')
                    tab_out[q++] = stos[--wsk];
                stos[wsk++] = x[0];
            }
            else if (x == "*" || x == "/")
            {
                while (wsk && stos[wsk-1] != '(' && stos[wsk-1] != '+' && stos[wsk-1] != '-')
                    tab_out[q++] = stos[--wsk];
                stos[wsk++] = x[0];
            }
            else if (x == "^")
            {
                while (wsk && stos[wsk-1] == '^')
                    tab_out[q++] = stos[--wsk];
                stos[wsk++] = x[0];
            }
            else if (x == "=")
            {
                while (wsk)
                    tab_out[q++] = stos[--wsk];
                tab_out[q++] = "=";
            }
        }
    } while (x != "=");
}

