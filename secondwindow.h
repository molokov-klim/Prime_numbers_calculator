#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QMainWindow>
//#include "mainwindow.h"

namespace Ui {
class SecondWindow;
}

class SecondWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit SecondWindow(QWidget *parent = nullptr);
    ~SecondWindow();
    void takeTableRow(int n);
    void takeTableColumn(int n);
    void fillTable(QString value);
    void copyTable();
    void createNewTable();
    void clearTable();
    void deleteLabels();
    void uncolorTable();
    void deleteRow();
    bool isPrime(int n);
    int tableColumn=0, tableRow=0;

private slots:
    void on_menuCreate_triggered();

    void on_menuExit_triggered();

    void on_menuClear_triggered();

    void on_menuAddRow_triggered();

    void on_menuDeleteRow_triggered();

    void on_menuAddColumn_triggered();

    void on_menuDeleteColumn_triggered();

    void on_menuColorPrimes_triggered();

    void on_menuUncolorPrimes_triggered();

    void on_menuShowSumm_triggered();

    void on_menuHideSumm_triggered();

    void on_menuClose_triggered();

    void on_menuOpen_triggered();

    void on_menuSave_triggered();

private:
    Ui::SecondWindow *ui;
};

#endif // SECONDWINDOW_H
