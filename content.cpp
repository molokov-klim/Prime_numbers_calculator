#include "content.h"
#include "ui_content.h"

Content::Content(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Content)
{
    ui->setupUi(this);
}

Content::~Content()
{
    delete ui;
}
