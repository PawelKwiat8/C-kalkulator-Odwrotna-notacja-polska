#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <fstream>

/**
 * @brief MainWindow::MainWindow
 * @param parent
 * klasa w której wywoływane są wszystkie przyciski oraz wyświetlany jest wynik w polu tekstowym
 *
 */

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    i = 0;
    cyfra_czy_znak = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

/**
 * @brief MainWindow::keyPressEvent
 * @param e przycisk na klawiaturze
 * \brief funkcja wywołuje inne funkcje po naciśnięciu klawiszu
 *
 */

void MainWindow::keyPressEvent(QKeyEvent *e)
{
    switch (e->key())
    {
    case Qt::Key_1:
        on_pushButton_clicked();
        break;
    case Qt::Key_2:
        on_pushButton_2_clicked();
        break;
    case Qt::Key_3:
        on_pushButton_3_clicked();
        break;
    case Qt::Key_4:
        on_pushButton_4_clicked();
        break;
    case Qt::Key_5:
        on_pushButton_5_clicked();
        break;
    case Qt::Key_6:
        on_pushButton_6_clicked();
        break;
    case Qt::Key_7:
        on_pushButton_7_clicked();
        break;
    case Qt::Key_8:
        on_pushButton_8_clicked();
        break;
    case Qt::Key_9:
        on_pushButton_9_clicked();
        break;
    case Qt::Key_0:
        on_pushButton_10_clicked();
        break;
    case Qt::Key_Plus:
        on_pushButton_plus_clicked();
        break;
    case Qt::Key_Minus:
        on_pushButton_minus_clicked();
        break;
    case Qt::Key_Asterisk:
        on_pushButton_razy_clicked();
        break;
    case Qt::Key_AsciiCircum :
        on_pushButton_potega_clicked();
        break;
    case Qt::Key_Slash:
        on_pushButton_dzielenie_clicked();
        break;
    case Qt::Key_ParenLeft:
        on_pushButton_nawias_clicked();
        break;
    case Qt::Key_ParenRight:
        on_pushButton_nawiaswlewowewnetrz_clicked();
        break;
    case Qt::Key_Equal:
        on_pushButton_rownosc_clicked();
        break;
    case Qt::Key_Period:
    case Qt::Key_Comma:
        on_pushButton_kropka_clicked();
        break;
    case Qt::Key_Backspace:
        on_usun_1_element_clicked();
        break;
    case Qt::Key_Return:
        on_pushButton_rownosc_clicked();
        break;
    case Qt::Key_T:
        on_pushButton_tg_clicked();
        break;
    case Qt::Key_S:
        on_pushButton_sin_clicked();
        break;
    case Qt::Key_C:
        on_pushButton_cos_clicked();
        break;

    default:
           QMainWindow::keyPressEvent(e);

    }

}

/**
 * @brief MainWindow::on_pushButton_clicked
 * \brief funkcja po wywołaniu przycisku 1
 */
void MainWindow::on_pushButton_clicked()
{
    konwerter.tab_in[i] += "1";
    ui->pteLista->insertPlainText("1");
    cyfra_czy_znak = 0;
}

/**
 * @brief MainWindow::on_pushButton_2_clicked
 */
void MainWindow::on_pushButton_2_clicked()
{
    konwerter.tab_in[i] += "2";
    ui->pteLista->insertPlainText("2");
    cyfra_czy_znak = 0;
}

/**
 * @brief MainWindow::on_pushButton_3_clicked
 */
void MainWindow::on_pushButton_3_clicked()
{
    konwerter.tab_in[i] += "3";
    ui->pteLista->insertPlainText("3");
    cyfra_czy_znak = 0;
}

/**
 * @brief MainWindow::on_pushButton_4_clicked
 */
void MainWindow::on_pushButton_4_clicked()
{
    konwerter.tab_in[i] += "4";
    ui->pteLista->insertPlainText("4");
    cyfra_czy_znak = 0;
}

void MainWindow::on_pushButton_5_clicked()
{
    konwerter.tab_in[i] += '5';
    ui->pteLista->insertPlainText("5");
    cyfra_czy_znak = 0;
}

void MainWindow::on_pushButton_6_clicked()
{
    konwerter.tab_in[i] += '6';
    ui->pteLista->insertPlainText("6");
    cyfra_czy_znak = 0;
}

void MainWindow::on_pushButton_7_clicked()
{
    konwerter.tab_in[i] += '7';
    ui->pteLista->insertPlainText("7");
    cyfra_czy_znak = 0;
}

void MainWindow::on_pushButton_8_clicked()
{
    konwerter.tab_in[i] += '8';
    ui->pteLista->insertPlainText("8");
    cyfra_czy_znak = 0;
}

void MainWindow::on_pushButton_9_clicked()
{
    konwerter.tab_in[i] += '9';
    ui->pteLista->insertPlainText("9");
    cyfra_czy_znak = 0;
}

void MainWindow::on_pushButton_10_clicked()
{
    konwerter.tab_in[i] += '0';
    ui->pteLista->insertPlainText("0");
    cyfra_czy_znak = 0;
}

void MainWindow::on_pushButton_kropka_clicked()
{
    konwerter.tab_in[i] += '.';
    ui->pteLista->insertPlainText(".");
    cyfra_czy_znak = 0;
}

void MainWindow::on_pushButton_tg_clicked()
{
    konwerter.tab_in[i] += 't';
    ui->pteLista->insertPlainText("tan");
    cyfra_czy_znak = 0;
}

void MainWindow::on_pushButton_sin_clicked()
{
    konwerter.tab_in[i] += 's';
    ui->pteLista->insertPlainText("sin");
    cyfra_czy_znak = 0;
}

void MainWindow::on_pushButton_cos_clicked()
{
    konwerter.tab_in[i] += 'c';
    ui->pteLista->insertPlainText("cos");
    cyfra_czy_znak = 0;
}

void MainWindow::on_pushButton_plus_clicked()
{
    konwerter.tab_in[++i] = '+';
    i++;
    ui->pteLista->insertPlainText("+");
    cyfra_czy_znak = 1;
}

void MainWindow::on_pushButton_minus_clicked()
{
    konwerter.tab_in[++i] = '-';
    i++;
    ui->pteLista->insertPlainText("-");
    cyfra_czy_znak = 1;
}

void MainWindow::on_pushButton_razy_clicked()
{
    konwerter.tab_in[++i] = '*';
    i++;
    ui->pteLista->insertPlainText("*");
    cyfra_czy_znak = 1;
}

void MainWindow::on_pushButton_dzielenie_clicked()
{
    konwerter.tab_in[++i] = '/';
    i++;
    ui->pteLista->insertPlainText("/");
    cyfra_czy_znak = 1;
}

void MainWindow::on_pushButton_potega_clicked()
{
    konwerter.tab_in[++i] = '^';
    i++;
    ui->pteLista->insertPlainText("^");
    cyfra_czy_znak = 1;
}

void MainWindow::on_pushButton_nawiaswlewowewnetrz_clicked()
{
    konwerter.tab_in[++i] = ')';
    i++;
    ui->pteLista->insertPlainText(")");
}

void MainWindow::on_pushButton_nawias_clicked()
{
    konwerter.tab_in[++i] = '(';
    i++;
    ui->pteLista->insertPlainText("(");
}

void MainWindow::on_pushButton_rownosc_clicked()
{
    i++;
    konwerter.tab_in[i] = '=';
    ui->pteLista->insertPlainText("=");

    konwerter.zamiana();

    obliczenia.T = konwerter.tab_out;
    obliczenia.oblicz();
    if (obliczenia.blad == 1)
    {
        ui->pteLista->insertPlainText("blad");
        ui->pteLista->appendPlainText("");
    }
    else
    {
        QString qstr = QString::number(obliczenia.WYNIK);
        ui->pteLista->insertPlainText(qstr);
        ui->pteLista->appendPlainText("");
    }

    konwerter.reset();
    obliczenia.reset();
    i = 0;
}

void MainWindow::on_usun_1_element_clicked()
{
    if (konwerter.tab_in[0] != "\0")
    {
        if (cyfra_czy_znak == 0)
        {
            konwerter.tab_in[i] = "\0";
            ui->pteLista->undo();
            for (int j = 0; j < i + 1; j++)
            {
                ui->pteLista->insertPlainText(QString::fromStdString(konwerter.tab_in[j]));
            }
            cyfra_czy_znak = 1;
        }

        else
        {
            i--;
            konwerter.tab_in[i] = "\0";
            ui->pteLista->undo();

            for (int j = 0; j < i + 1; j++)
            {
                ui->pteLista->insertPlainText(QString::fromStdString(konwerter.tab_in[j]));
            }
            i--;
        }
    }
}

void MainWindow::on_pushButton_usun_cale_dzialanie_clicked()
{
    if (konwerter.tab_in[0] != "\0")
    {
        for (int j = 0; j < 100; j++)
        {
            konwerter.tab_in[j] = "\0";
        }
        i = 0;
        cyfra_czy_znak = 0;
        ui->pteLista->undo();
    }
}
