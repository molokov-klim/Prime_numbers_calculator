#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "secondwindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void startMessage();
    void createNewTable();
    void clearTable();
    void uncolorTable();
    void deleteRow();
    void deleteLabels();
    bool isPrime(int n);
    int sendTableRows();
    int sendTableColumns();
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

    void on_menuShowSum_triggered();

    void on_menuHideSum_triggered();

    void on_menuClose_triggered();

    void on_menuOpen_triggered();

    void on_menuSave_triggered();

    void on_menuOpenEmpty_triggered();

    void on_menuDuplicate_triggered();



    void on_tableWidget_cellChanged(int row, int column);

    void on_menuAbout_triggered();

    void on_menuContent_triggered();

private:
    Ui::MainWindow *ui;
    SecondWindow *window;
};
#endif // MAINWINDOW_H
