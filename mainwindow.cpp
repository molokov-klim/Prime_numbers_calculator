
//-------------------------------------------------------------------------------------------------------------------------------------------
// NOTES  NOTES  NOTES  NOTES  NOTES  NOTES  NOTES  NOTES  NOTES  NOTES  NOTES  NOTES  NOTES  NOTES  NOTES  NOTES  NOTES  NOTES  NOTES  NOTES
//-------------------------------------------------------------------------------------------------------------------------------------------

/*
БАГИ:


*/

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include "dialog2.h"
#include "about.h"
#include "content.h"
#include "secondwindow.h"
#include <QtGui>
#include <QtCore>
#include <QMessageBox>
#include <QAxObject>
#include <string>
#include <QFileDialog>
#include <typeinfo>
#include <cmath>

//var
    QString file("0");
    bool enableSum = false;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
     ,ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Калькулятор простых чисел");
    startMessage();
    window = new SecondWindow();

}

MainWindow::~MainWindow()
{
    delete ui;
}

//-------------------------------------------------------------------------------------------------------------------------------------------
//    PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES  PROCEDURES
//-------------------------------------------------------------------------------------------------------------------------------------------

void MainWindow::startMessage() // процедура формирования стартового сообщения
{
qDebug()<<"START";

MainWindow::resize(900,600);
ui->tableWidget->setColumnCount(1);
ui->tableWidget->setRowCount(1);
ui->tableWidget->verticalHeader()->resize(0,500);
ui->tableWidget->horizontalHeader()->resize(0,500);
ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
QVariant startText = "Вас приветствует программа вычисления суммы простых чисел в каждом столбце матрицы!\nПрограмма работает с табличными данными. Расчет суммы производится для каждого столбца отдельно.\nДля начала работы нажмите <Файл-Создать>.\nДля расчета нажмите <Таблица-Показать сумму простых чисел>.\nДополнительно об управлении <Справка-Содержание>.\n";
QTableWidgetItem *item = new QTableWidgetItem(startText.toString());
item->setTextAlignment(1);
ui->tableWidget->setItem(0,0,item);

QFont startFont = ui->tableWidget->font();
startFont.setPointSize(10);
ui->tableWidget->setFont(startFont);

ui->tableWidget->setVerticalHeaderItem(0, new QTableWidgetItem(" "));
ui->tableWidget->setHorizontalHeaderItem(0, new QTableWidgetItem(" "));

}


void MainWindow::createNewTable() // процедура создания таблицы
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
}
}

void MainWindow::clearTable() // процедура удаления таблицы
{
    while (ui->tableWidget->rowCount() > 0)
    {
        ui->tableWidget->removeRow(0);
    }
}

bool MainWindow::isPrime(int a) // процедура проверки числа на простоту принимающая булево значение
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

void MainWindow::uncolorTable()  // процедура обесцвечивания
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

void MainWindow::deleteRow()
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

int MainWindow::sendTableRows()
{
    return ui->tableWidget->rowCount();
}

int MainWindow::sendTableColumns()
{
    return ui->tableWidget->columnCount();
}

void MainWindow::deleteLabels()
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
// TRIGGERS  TRIGGERS  TRIGGERS  TRIGGERS  TRIGGERS  TRIGGERS  TRIGGERS  TRIGGERS  TRIGGERS  TRIGGERS  TRIGGERS  TRIGGERS  TRIGGERS  TRIGGERS
//-------------------------------------------------------------------------------------------------------------------------------------------


void MainWindow::on_menuCreate_triggered() //триггер - вызов модального окна запроса ввода параметров таблицы
{
    Dialog dialog; // объявил форму dialog
    if (dialog.exec())
    {
    tableColumn=dialog.setTableWidth().toInt();
    tableRow=dialog.setTableHeight().toInt();
    createNewTable();
    deleteLabels();
    }
}

void MainWindow::on_menuExit_triggered() //триггер -  выход из программы
{
   QApplication::quit();
}

void MainWindow::on_menuClear_triggered() //триггер -  очистка таблицы
{
    ui->tableWidget->clearContents();
    deleteLabels();
}

void MainWindow::on_menuAddRow_triggered() //триггер -  добавление строки
{
    tableRow++;
    ui->tableWidget->setRowCount(tableRow);
    deleteLabels();
}


void MainWindow::on_menuDeleteRow_triggered() //триггер -  удаление строки
{
    deleteRow();
    deleteLabels();
}


void MainWindow::on_menuAddColumn_triggered() //триггер -  добавление столбца
{
    tableColumn++;
    ui->tableWidget->setColumnCount(tableColumn);
    deleteLabels();
}

void MainWindow::on_menuDeleteColumn_triggered() //триггер -  удаление столбца
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
    deleteLabels();
}

void MainWindow::on_menuColorPrimes_triggered() //триггер -  подсветить простые числа
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


void MainWindow::on_menuUncolorPrimes_triggered() // триггер обесцвечивания таблицы
{
   uncolorTable(); // процедура обесцвечивания
}

void MainWindow::on_menuShowSum_triggered() // триггер показать сумму простых чисел
{

    /*
     ***************************************************************************************************************************************
    */
    QString where;
Dialog2 dialog2;
if (dialog2.exec())
{
    where = dialog2.value();
}

if (where=="sameWindow"){

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
enableSum=true;
}
if (where=="newWindow")
{
    qDebug()<<"OPEN NEW WINDOW";
    on_menuDuplicate_triggered();

}

}

void MainWindow::on_menuHideSum_triggered() // триггер скрыть сумму простых чисел
{
    QString value;
    QTableWidgetItem *item = ui->tableWidget->verticalHeaderItem(tableRow+1);
    if (NULL != item) {
       value = item->text();
    }
    if (value=="SUMM"){deleteRow(); deleteRow();}
deleteLabels();
enableSum=false;
}


void MainWindow::on_menuClose_triggered() // триггер закрытия таблицы
{
    clearTable();
    ui->tableWidget->setColumnCount(1);
    ui->tableWidget->setRowCount(1);
    deleteLabels();
}

void MainWindow::on_menuOpen_triggered() // триггер открытия файла
{
    startMessage();
    file = QFileDialog::getOpenFileName(this, "Укажите файл", "C://");
    // с помощью QAxObject получаем указатель на Excel (COM-объект)

    QAxObject* excel = new QAxObject("Excel.Application",this);
    QAxObject* workbooks = excel->querySubObject("Workbooks"); // рабочая книга
    QAxObject* workbook = workbooks->querySubObject("Open(const QString&)", file);
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

    deleteLabels();

    Dialog dialog; // объявил форму dialog
    if (dialog.exec())
    {
    tableColumn=dialog.setTableWidth().toInt();
    tableRow=dialog.setTableHeight().toInt();
    }
    ui->tableWidget->setRowCount(tableRow);
    ui->tableWidget->setColumnCount(tableColumn);
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}


void MainWindow::on_menuSave_triggered()
{
    //с помощью QAxObject получаем указатель на Excel (COM-объект)
     QAxObject *excel = new QAxObject("Excel.Application", this);
     excel->dynamicCall("SetVisible(bool)", false);// видимость документа
     QAxObject *workbooks = excel->querySubObject("Workbooks");//рабочая книга
     QAxObject *workbook = workbooks->querySubObject("Add");//открываем файл
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
     workbooks->dynamicCall("SaveAs(QString&)",QString("C:\\1.xlsx"));
     workbooks->dynamicCall("Close()");
     excel->dynamicCall("Quit()");
}

void MainWindow::on_menuOpenEmpty_triggered()
{
    window->show();
}

void MainWindow::on_menuDuplicate_triggered()
{
    window->show();

    int sendTableRow = ui->tableWidget->rowCount();
    int sendTableColumn = ui->tableWidget->columnCount();

    window->takeTableRow(sendTableRow);
    window->takeTableColumn(sendTableColumn);
    window->copyTable();


    // работа с массивом

    QString tableValue;
    bool flag = false;

           for (int i=0;i<ui->tableWidget->rowCount();i++){ // перебор QTableWidget
               if(i>0){flag = true;}
            for (int u=0;u<ui->tableWidget->columnCount();u++){
            QString value;
            QTableWidgetItem *item = ui->tableWidget->item(i,u);
            if (NULL != item) {value = item->text();}
            if (flag==true){tableValue+="N";}
            flag=false;
            tableValue += value;
            tableValue += "|";
    }
    }
    window->fillTable(tableValue);


   // здесь должен передаваться сигнал на вторую форму с аргументами параметров таблицы
   // после этого должен передаваться сигнал с массивом таблицы
}

void MainWindow::on_tableWidget_cellChanged(int row, int column)
{
    if(enableSum==true){
        on_menuHideSum_triggered();
        on_menuShowSum_triggered();
    };
}

void MainWindow::on_menuAbout_triggered() // триггер вызов о программе
{
    about about;
    if (about.exec())
    {
    qDebug()<<"Its alive!";
    }
}

void MainWindow::on_menuContent_triggered() // триггер вызов справки
{
    Content content;
    if (content.exec())
    {
        qDebug()<<"Content visible on";
    }
}
