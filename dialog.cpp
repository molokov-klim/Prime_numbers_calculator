#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

QString Dialog::setTableWidth()
{
    return ui->editWidth->text(); // передаваемый текст по нажатию ОК
}

QString Dialog::setTableHeight()
{
    return ui->editHeight->text(); // передаваемый текст по нажатию ОК
}
