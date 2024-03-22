#include "mainwindow.h"
#include <iostream>
#include <QApplication>

int x;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();
}
/**
 * @mainpage
 * @par Kalkulator
 * @author Paweł Kwiatkowski
 * @date 2022.06.08
 *
 * \brief
 * W Kalkulatorze możliwe jest
 * -działania z nawiasami
 * - uzywanie wszystkich znaków działań w dowolnej kolejności
 * - wpisywanie liczb po przecinku
 * - wpisywanie liczb wielocyfrowych
 * - usuwanie 1 elementu
 * - usuwanie calego wiersza
 * Uwaga
 * Po funkcjach trygonometrycznych należy postawć wyłącznie jedną dowolną liczbę, algorym nie działa gdy pstawimy np. tg(2+3)=
 *
 *
 *
 * zasada działania programu:
 * - 1.tworzona jest tablica znaków az do napotkania znaku "="
 * - 2.tablica znaków jest przesyłana do funkcji konwerter
 * - 3.funkcja konwerter przerabia zwykłą notację na notację ONP
 * - 4.tablica z notacją ONP jest przesyłana do funkcji Oblicz
 * - 5.funkcja oblicz zwraca wynik
 * - 6.wynik jest przekazywany do funkcj wypisyjącej na ekranie
 * - cykl rozpoczyna sie na nowo
 *
 *
 */
