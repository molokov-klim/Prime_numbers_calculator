#include "secondwindow.h"
#include "mainwindow.h"
#include "ui_secondwindow.h"
#include "dialog.h"
#include <QtGui>
#include <QtCore>
#include <QMessageBox>
#include <QAxObject>
#include <string>
#include <QFileDialog>
#include <typeinfo>
#include <cmath>

//var
    QString secondFile("c:\\secondFile.xls");

SecondWindow::SecondWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::SecondWindow)
{
    ui->setupUi(this);

}

SecondWindow::~SecondWindow()
{
    delete ui;
}

//-------------------------------------------------------------------------------------------------------------------------------------------
//    PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES
//    COPY TABLE  COPY TABLE  COPY TABLE  COPY TABLE  COPY TABLE  COPY TABLE  COPY TABLE  COPY TABLE  COPY TABLE  COPY TABLE  COPY TABLE
//-------------------------------------------------------------------------------------------------------------------------------------------

void SecondWindow::takeTableRow(int n)
{
   tableRow=n;
}

void SecondWindow::takeTableColumn(int n)
{
   tableColumn=n;
}

void SecondWindow::copyTable()
{
   createNewTable();
}

void SecondWindow::fillTable(QString value)
{
 int tableArr[tableRow][tableColumn];

 for(int i=0;i<tableRow;i++){  // обнуление
     for(int u=0;u<tableColumn;u++){
         tableArr[i][u]=0;
     }
 }

    QString tableValue;
    QString number;
    int i=0;
    int u=0;

    foreach(QChar c, value)  // перевод стринга в массив
    {
    tableValue=c;
    bool plus=false;
    if (c=="|"){plus=true;};
    if (c=="N"){u=0;};
    if (c!="|"&&c!="N"){number.append(tableValue);};
    qDebug()<<number;
    if(plus==true){tableArr[i][u]+=number.toInt(); plus=false;number="0";};
    if (c=="|"){u++;};
    if (c=="N"){i++;};

    }

//    for(int i=0;i<tableRow;i++){  // вывод в консоль
//        for(int u=0;u<tableColumn;u++){
//            qDebug()<<tableArr[i][u];
//        }
//    }

    // вывод
    for (int i=0; i<tableRow; i++)
    {
    for(int u=0; u<tableColumn; u++)
    {
        QTableWidgetItem *item = new QTableWidgetItem(QString::number(tableArr[i][u])); // заберем значение из массива
        ui->tableWidget->setItem(i,u,item); // введем значение
        ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    }
    }
on_menuShowSumm_triggered();
}

void SecondWindow::deleteLabels()
{
    ui->tableWidget->setVerticalHeaderItem(0, new QTableWidgetItem(" "));
    ui->tableWidget->setHorizontalHeaderItem(0, new QTableWidgetItem(" "));
    for(int i=1; i<ui->tableWidget->columnCount();i++)
    {
        ui->tableWidget->setHorizontalHeaderItem(i, new QTableWidgetItem(" "));
    };
    for(int i=1; i<ui->tableWidget->rowCount();i++)
    {
        ui->tableWidget->setVerticalHeaderItem(i, new QTableWidgetItem(" "));
    };
}

//-------------------------------------------------------------------------------------------------------------------------------------------
//    PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES
//     EMPTY TABLE  EMPTY TABLE  EMPTY TABLE  EMPTY TABLE  EMPTY TABLE  EMPTY TABLE  EMPTY TABLE  EMPTY TABLE  EMPTY TABLE  EMPTY TABLE
//-------------------------------------------------------------------------------------------------------------------------------------------

void SecondWindow::createNewTable() // процедура создания таблицы
{
    clearTable();
    ui->tableWidget->setColumnCount(tableColumn);
    ui->tableWidget->setRowCount(tableRow);

    ui->tableWidget->setVerticalHeaderItem(0, new QTableWidgetItem(" "));
    ui->tableWidget->setHorizontalHeaderItem(0, new QTableWidgetItem(" "));
    for(int i=1; i<tableColumn;i++)
    {
        ui->tableWidget->setHorizontalHeaderItem(i, new QTableWidgetItem(" "));
    };
    for(int i=1; i<tableRow;i++)
    {
        ui->tableWidget->setVerticalHeaderItem(i, new QTableWidgetItem(" "));
    };

}

void SecondWindow::clearTable() // процедура удаления таблицы
{
//    while (ui->tableWidget->rowCount() > 0)
//    {
//        ui->tableWidget->removeRow(0);
//    }
    ui->tableWidget->setRowCount(0);
}

bool SecondWindow::isPrime(int a) // процедура проверки числа на простоту принимающая булево значение
{
    int i1, i2, i3, i4, i5, i6, i7, i8, bound;
    if (abs(a) == 0 || abs(a) == 1)
       return false;
    if (abs(a) == 2 || abs(a) == 3 || abs(a) == 5 || abs(a) == 7 || abs(a) == 11 || abs(a) == 13 || abs(a) == 17 || abs(a) == 19 || abs(a) == 23 || abs(a) == 29)
       return true;
    if (abs(a)%2 == 0 || abs(a)%3 == 0 || abs(a)%5 == 0 || abs(a)%7 == 0 || abs(a)%11 == 0 || abs(a)%13 == 0 || abs(a)%17 == 0 || abs(a)%19 == 0 || abs(a)%23 == 0 || abs(a)%29 == 0)
       return false;
    bound = sqrt((double)abs(a));
    i1 = 31; i2 = 37; i3 = 41; i4 = 43; i5 = 47; i6 = 49; i7 = 53; i8 = 59;
    while (i8 <= bound && abs(a)%i1 && abs(a)%i2 && abs(a)%i3 && abs(a)%i4 && abs(a)%i5 && abs(a)%i6 && abs(a)%i7 && abs(a)%i8)
    {
        i1 += 30; i2 += 30; i3 += 30; i4 += 30; i5 += 30; i6 += 30; i7 += 30; i8 += 30;
    }
    if (i8 <= bound ||
       i1 <= bound && abs(a) % i1 == 0 ||
       i2 <= bound && abs(a) % i2 == 0 ||
       i3 <= bound && abs(a) % i3 == 0 ||
       i4 <= bound && abs(a) % i4 == 0 ||
       i5 <= bound && abs(a) % i5 == 0 ||
       i6 <= bound && abs(a) % i6 == 0 ||
       i7 <= bound && abs(a) % i7 == 0)
          return false;
    return true;
}

void SecondWindow::uncolorTable()  // процедура обесцвечивания
{
    for (int i=0;i<ui->tableWidget->rowCount();i++){ // перебор QTableWidget
            for (int u=0;u<ui->tableWidget->columnCount();u++){
            QString value;
            QTableWidgetItem *item = ui->tableWidget->item(i,u);
            if (NULL != item) {
               value = item->text();
            }
    QTableWidgetItem *qitem = new QTableWidgetItem(value); // заберем значение
             qitem->setBackground(Qt::white); //поменяем цвет
             ui->tableWidget->setItem(i,u,qitem); // введем значение

    }
    }
}

void SecondWindow::deleteRow()
{
    QString value;
    QTableWidgetItem *item = ui->tableWidget->verticalHeaderItem(tableRow+1);
    if (NULL != item) {
       value = item->text();
    }
    if (value=="SUMM"){tableRow++;tableRow++;}

    if(tableRow!=0)
    {
        if(tableRow==1)
        {
            ui->tableWidget->clearContents();
        }
        else
        {
    tableRow--;
    ui->tableWidget->setRowCount(tableRow);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
        }
    }
}

//-------------------------------------------------------------------------------------------------------------------------------------------
// TRIGGERS  TRIGGERS  TRIGGERS  TRIGGERS  TRIGGERS  TRIGGERS  TRIGGERS  TRIGGERS  TRIGGERS  TRIGGERS  TRIGGERS  TRIGGERS  TRIGGERS  TRIGGERS
//-------------------------------------------------------------------------------------------------------------------------------------------

void SecondWindow::on_menuCreate_triggered()
{
    Dialog dialog; // объявил форму dialog
    if (dialog.exec())
    {
    tableColumn=dialog.setTableWidth().toInt();
    tableRow=dialog.setTableHeight().toInt();
    createNewTable();
    }
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

void SecondWindow::on_menuExit_triggered()
{
    QApplication::quit();
}

void SecondWindow::on_menuClear_triggered()
{
    ui->tableWidget->clearContents();
}

void SecondWindow::on_menuAddRow_triggered()
{
    tableRow++;
    ui->tableWidget->setRowCount(tableRow);
}

void SecondWindow::on_menuDeleteRow_triggered()
{
    deleteRow();
}

void SecondWindow::on_menuAddColumn_triggered()
{
    tableColumn++;
    ui->tableWidget->setColumnCount(tableColumn);
}

void SecondWindow::on_menuDeleteColumn_triggered()
{
    if (tableColumn!=0){
    if(tableColumn==1)
    {
        ui->tableWidget->clearContents();
    }
    else
    {
    tableColumn--;
    ui->tableWidget->setColumnCount(tableColumn);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    }
    }
}

void SecondWindow::on_menuColorPrimes_triggered()
{
    for (int i=0;i<ui->tableWidget->rowCount();i++){ // перебор QTableWidget
        for (int u=0;u<ui->tableWidget->columnCount();u++){
        QString value;
        QTableWidgetItem *item = ui->tableWidget->item(i,u);
        if (NULL != item) {
           value = item->text();
        }
        // проверка на тип данных
        if (value.toInt()!=0){qDebug()<<"это инт";}else {if (value!="0"){if(value!=NULL){ qDebug()<<"это не подходит аларм"; QMessageBox::warning(this,"Ошибка","Введены некорректные значения, используйте целые числа до 9 разрядов");i=ui->tableWidget->rowCount();uncolorTable();break;}}}

  // здесь должна быть проверка на простоту и действие
        if (isPrime(value.toInt())==true){
         qDebug()<<"ЧИСЛО " +value+ " ПРОСТОЕ";
         QTableWidgetItem *item = new QTableWidgetItem(value); // заберем значение
         //item->setBackground(Qt::yellow); //поменяем цвет
         QFont font = item->font();
         font.setBold(!font.bold());
         font.setItalic(!font.italic());
         item->setFont(font);
         ui->tableWidget->setItem(i,u,item); // введем значение
        }
        }
    }
}

void SecondWindow::on_menuUncolorPrimes_triggered()
{
   uncolorTable(); // процедура обесцвечивания
}

void SecondWindow::on_menuShowSumm_triggered()
{
    int sumPrimeArr[tableColumn]; // массив с суммой простых чисел в каждом столбце
    bool isInt=true;

    for (int i=0;i<tableColumn+1;i++) // заполним массив с суммой простых чисел нулями
    {
        sumPrimeArr[i]=0;
    }
    for (int i=0;i<ui->tableWidget->rowCount();i++){ // перебор QTableWidget

        // защита от принятия к расчету сумм
        QString value;
        QTableWidgetItem *item = ui->tableWidget->verticalHeaderItem(i);
        if (NULL != item) {
           value = item->text();
        }
        if (value=="SUMM"){continue;}

        // заполнение массива суммой простых чисел
        for (int u=0;u<ui->tableWidget->columnCount();u++){
        QString value;
        QTableWidgetItem *item = ui->tableWidget->item(i,u);
        if (NULL != item) {
           value = item->text();
        }
        // проверка на тип данных
        if (value.toInt()!=0){qDebug()<<"это инт";}else {if (value!="0"){if(value!=NULL){ qDebug()<<"это не подходит аларм"; QMessageBox::warning(this,"Ошибка","Введены некорректные значения, используйте целые числа до 9 разрядов");i=ui->tableWidget->rowCount();uncolorTable();isInt=false;break;}}}

        if (isPrime(value.toInt())==true){
        sumPrimeArr[u]+=value.toInt(); // заполнение массива суммы простых чисел
        }
        }

    }

    // вывод суммы простых чисел
    if (isInt==true){
    ui->tableWidget->setRowCount(tableRow+2);
    for(int col=0; col<tableColumn; col++)
    {
    QTableWidgetItem *item = new QTableWidgetItem(QString::number(sumPrimeArr[col])); // заберем значение из массива
    //item->setBackground(Qt::yellow); //поменяем цвет
    ui->tableWidget->setItem(tableRow+1,col,item); // введем значение
    }
    // зададим имя последней строки
    deleteLabels();
    QTableWidgetItem *labelName = new QTableWidgetItem();
    labelName->setText("SUMM");
    ui->tableWidget->setVerticalHeaderItem(tableRow+1,labelName);
    }
}

void SecondWindow::on_menuHideSumm_triggered()
{
    QString value;
    QTableWidgetItem *item = ui->tableWidget->verticalHeaderItem(tableRow+1);
    if (NULL != item) {
       value = item->text();
    }
    if (value=="SUMM"){deleteRow(); deleteRow();}

}

void SecondWindow::on_menuClose_triggered()
{
    clearTable();
    ui->tableWidget->setColumnCount(1);
    ui->tableWidget->setRowCount(1);
}

void SecondWindow::on_menuOpen_triggered()
{
    secondFile = QFileDialog::getOpenFileName(this, "Укажите файл", "C://");
    // с помощью QAxObject получаем указатель на Excel (COM-объект)
    QAxObject* excel = new QAxObject("Excel.Application",this);
    QAxObject* workbooks = excel->querySubObject("Workbooks"); // рабочая книга
    QAxObject* workbook = workbooks->querySubObject("Open(const QString&)", secondFile);
    excel->dynamicCall("SetVisible(bool)",false); // видимость документа

    QAxObject *worksheet = workbook->querySubObject("WorkSheets(int)",1);

    //получаем кол-во используемых строк и столбцов
    QAxObject * usedrange = worksheet->querySubObject("UsedRange");
    QAxObject *rows = usedrange->querySubObject("Rows");
    QAxObject *columns = usedrange->querySubObject("Columns");

    int intRowStart = usedrange->property("Row").toInt();
    int intColStart = usedrange->property("Column").toInt();
    int intCols = columns->property("Count").toInt();
    int intRows = rows->property("Count").toInt();

    ui->tableWidget->setColumnCount(intColStart + intCols-1); //создаем ячейки
    ui->tableWidget->setRowCount(intRowStart + intRows-1); //создаем ячейки
    tableColumn=intCols;
    tableRow=intRows;

    //зная кол-во строк и столбцов заполняем таблицу
    for (int row=0; row<intRows; row++)
    {
    for(int col=0; col<intCols; col++)
    {
    QAxObject* cell = worksheet->querySubObject("Cells(int,int)", row+1, col+1);
    QVariant value = cell->dynamicCall("Value()");
    QTableWidgetItem *item = new QTableWidgetItem(value.toString());
    ui->tableWidget->setItem(row,col,item);

    }
    }

    //закрываем документ и выходим
    workbook->dynamicCall("Close");
    excel->dynamicCall("Quit()");
}

void SecondWindow::on_menuSave_triggered()
{
    //с помощью QAxObject получаем указатель на Excel (COM-объект)
     QAxObject *excel = new QAxObject("Excel.Application", this);
     excel->dynamicCall("SetVisible(bool)", false);// видимость документа
     QAxObject *workbooks = excel->querySubObject("Workbooks");//рабочая книга
     QAxObject *workbook = workbooks->querySubObject("Open(const QString&)", secondFile);//открываем файл
     QAxObject* sheets = workbook->querySubObject("Worksheets");
     QAxObject* sheet = sheets->querySubObject( "Item( int )", 1 );//где 1 - это открываемая книга (лист 1)

      // узнаем количество строк и столбцов
     int intRows=0;
     intRows = ui->tableWidget->rowCount();
     int intCols=0;
     intCols = ui->tableWidget->columnCount();

     // считываем данные с ячеек на форме и записываем их в файл
     for (int i=0;i<intRows;i++){
         for (int u=0;u<intCols;u++){
         QString value;
         QTableWidgetItem *item = ui->tableWidget->item(i,u);
         if (NULL != item) {
            value = item->text();
         }
         QAxObject* data = sheet->querySubObject("Cells(int,int)", i+1, u+1);
         data->dynamicCall("SetValue(const QVariant&)", value);
         }
     }
     workbooks->dynamicCall("Close()");
     excel->dynamicCall("Quit()");
}
