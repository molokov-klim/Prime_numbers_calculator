#include "dialog2.h"
#include "ui_dialog2.h"

Dialog2::Dialog2(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog2)
{
    ui->setupUi(this);
}

QString status;

Dialog2::~Dialog2()
{
    delete ui;
}

QString Dialog2::value()
{
    if (ui->radioNewWindow->isChecked()){status = "newWindow";return status;};
    if (ui->radioSameWindow->isChecked()){status = "sameWindow"; return status;};
}
