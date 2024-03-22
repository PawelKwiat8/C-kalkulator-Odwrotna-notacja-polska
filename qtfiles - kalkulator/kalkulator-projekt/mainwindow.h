#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <fstream>
#include <iostream>
#include "Obliczenia.h"
#include "Konwerter.h"


/**
 * \file mainwindow.h
 * \brief Plik nagówkowwy
 */

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void keyPressEvent(QKeyEvent *e);

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_plus_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_minus_clicked();

    void on_pushButton_razy_clicked();

    void on_pushButton_dzielenie_clicked();

    void on_pushButton_potega_clicked();

    void on_pushButton_nawiaswlewowewnetrz_clicked();

    void on_pushButton_nawias_clicked();

    void on_pushButton_rownosc_clicked();

    void on_pushButton_10_clicked();

    void on_usun_1_element_clicked();

    void on_pushButton_kropka_clicked();

    void on_pushButton_usun_cale_dzialanie_clicked();

    void on_pushButton_tg_clicked();

    void on_pushButton_sin_clicked();

    void on_pushButton_cos_clicked();

private:
    /// wskażnik tworzony na potrzeby GUI
    Ui::MainWindow *ui;
    /// zmienna pomocnicza do wypisywania znaków na ekranie
    string *tab ;
    ///licznik
    int i;
    /// zmienna okreslająca czy poprzednie działanie było cyfra czy znakiem, pomocna do usuwania poszcególnych elementów
    bool cyfra_czy_znak;
    KonwerterClass konwerter;      // Obiekt Konwerter jako składowa klasy MainWindow
    ObliczeniaClass obliczenia;     // Obiekt Obliczenia jako składowa klasy MainWindow
};
#endif // MAINWINDOW_H
