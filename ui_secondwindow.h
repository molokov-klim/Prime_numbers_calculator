/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SecondWindow
{
public:
    QAction *menuCreate;
    QAction *menuOpen;
    QAction *menuSave;
    QAction *menuClose;
    QAction *menuExit;
    QAction *menuAddRow;
    QAction *menuDeleteRow;
    QAction *menuAddColumn;
    QAction *menuDeleteColumn;
    QAction *menuColorPrimes;
    QAction *menuUncolorPrimes;
    QAction *menuShowSumm;
    QAction *menuHideSumm;
    QAction *menuClear;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QFrame *line;
    QTableWidget *tableWidget;
    QFrame *line_2;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *SecondWindow)
    {
        if (SecondWindow->objectName().isEmpty())
            SecondWindow->setObjectName(QString::fromUtf8("SecondWindow"));
        SecondWindow->resize(800, 600);
        menuCreate = new QAction(SecondWindow);
        menuCreate->setObjectName(QString::fromUtf8("menuCreate"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/resource/menu/file-plus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuCreate->setIcon(icon);
        menuOpen = new QAction(SecondWindow);
        menuOpen->setObjectName(QString::fromUtf8("menuOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/resource/menu/folder.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuOpen->setIcon(icon1);
        menuSave = new QAction(SecondWindow);
        menuSave->setObjectName(QString::fromUtf8("menuSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/resource/menu/save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuSave->setIcon(icon2);
        menuClose = new QAction(SecondWindow);
        menuClose->setObjectName(QString::fromUtf8("menuClose"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/resource/menu/delete.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuClose->setIcon(icon3);
        menuExit = new QAction(SecondWindow);
        menuExit->setObjectName(QString::fromUtf8("menuExit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/resource/menu/power.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuExit->setIcon(icon4);
        menuAddRow = new QAction(SecondWindow);
        menuAddRow->setObjectName(QString::fromUtf8("menuAddRow"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/resource/menu/chevrons-down.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuAddRow->setIcon(icon5);
        menuDeleteRow = new QAction(SecondWindow);
        menuDeleteRow->setObjectName(QString::fromUtf8("menuDeleteRow"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/resource/menu/chevrons-up.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuDeleteRow->setIcon(icon6);
        menuAddColumn = new QAction(SecondWindow);
        menuAddColumn->setObjectName(QString::fromUtf8("menuAddColumn"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/resource/menu/chevrons-right.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuAddColumn->setIcon(icon7);
        menuDeleteColumn = new QAction(SecondWindow);
        menuDeleteColumn->setObjectName(QString::fromUtf8("menuDeleteColumn"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/image/resource/menu/chevrons-left.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuDeleteColumn->setIcon(icon8);
        menuColorPrimes = new QAction(SecondWindow);
        menuColorPrimes->setObjectName(QString::fromUtf8("menuColorPrimes"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/image/resource/menu/sunrise.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuColorPrimes->setIcon(icon9);
        menuUncolorPrimes = new QAction(SecondWindow);
        menuUncolorPrimes->setObjectName(QString::fromUtf8("menuUncolorPrimes"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/image/resource/menu/sunset.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuUncolorPrimes->setIcon(icon10);
        menuShowSumm = new QAction(SecondWindow);
        menuShowSumm->setObjectName(QString::fromUtf8("menuShowSumm"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/image/resource/menu/plus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuShowSumm->setIcon(icon11);
        menuHideSumm = new QAction(SecondWindow);
        menuHideSumm->setObjectName(QString::fromUtf8("menuHideSumm"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/image/resource/menu/minus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuHideSumm->setIcon(icon12);
        menuClear = new QAction(SecondWindow);
        menuClear->setObjectName(QString::fromUtf8("menuClear"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/image/resource/menu/trash-2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuClear->setIcon(icon13);
        centralwidget = new QWidget(SecondWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setShowGrid(false);

        horizontalLayout->addWidget(tableWidget);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        SecondWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SecondWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QString::fromUtf8("menu"));
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName(QString::fromUtf8("menu_2"));
        SecondWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SecondWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        SecondWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(SecondWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        SecondWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(menuCreate);
        menu->addAction(menuOpen);
        menu->addAction(menuSave);
        menu->addAction(menuClose);
        menu->addSeparator();
        menu->addAction(menuExit);
        menu_2->addAction(menuAddRow);
        menu_2->addAction(menuDeleteRow);
        menu_2->addAction(menuAddColumn);
        menu_2->addAction(menuDeleteColumn);
        menu_2->addAction(menuColorPrimes);
        menu_2->addAction(menuUncolorPrimes);
        menu_2->addAction(menuShowSumm);
        menu_2->addAction(menuHideSumm);
        menu_2->addAction(menuClear);
        toolBar->addAction(menuCreate);
        toolBar->addSeparator();
        toolBar->addAction(menuAddRow);
        toolBar->addAction(menuDeleteRow);
        toolBar->addAction(menuAddColumn);
        toolBar->addAction(menuDeleteColumn);
        toolBar->addSeparator();
        toolBar->addAction(menuColorPrimes);
        toolBar->addAction(menuUncolorPrimes);
        toolBar->addSeparator();
        toolBar->addAction(menuShowSumm);
        toolBar->addAction(menuHideSumm);
        toolBar->addSeparator();
        toolBar->addAction(menuClear);
        toolBar->addAction(menuClose);

        retranslateUi(SecondWindow);

        QMetaObject::connectSlotsByName(SecondWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SecondWindow)
    {
        SecondWindow->setWindowTitle(QCoreApplication::translate("SecondWindow", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\262\321\213\321\207\320\270\321\201\320\273\320\265\320\275\320\270\321\217 \321\201\321\203\320\274\320\274\321\213 \320\277\321\200\320\276\321\201\321\202\321\213\321\205 \321\207\320\270\321\201\320\265\320\273 \320\262 \321\201\321\202\320\276\320\273\320\261\321\206\320\265 \320\274\320\260\321\202\321\200\320\270\321\206\321\213", nullptr));
        menuCreate->setText(QCoreApplication::translate("SecondWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        menuCreate->setShortcut(QCoreApplication::translate("SecondWindow", "Ctrl+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        menuOpen->setText(QCoreApplication::translate("SecondWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        menuOpen->setShortcut(QCoreApplication::translate("SecondWindow", "Ctrl+Shift+O", nullptr));
#endif // QT_CONFIG(shortcut)
        menuSave->setText(QCoreApplication::translate("SecondWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        menuSave->setShortcut(QCoreApplication::translate("SecondWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        menuClose->setText(QCoreApplication::translate("SecondWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        menuClose->setShortcut(QCoreApplication::translate("SecondWindow", "Ctrl+Alt+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        menuExit->setText(QCoreApplication::translate("SecondWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
#if QT_CONFIG(shortcut)
        menuExit->setShortcut(QCoreApplication::translate("SecondWindow", "Alt+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        menuAddRow->setText(QCoreApplication::translate("SecondWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\321\200\320\276\320\272\321\203", nullptr));
#if QT_CONFIG(shortcut)
        menuAddRow->setShortcut(QCoreApplication::translate("SecondWindow", "Ctrl+Shift+R", nullptr));
#endif // QT_CONFIG(shortcut)
        menuDeleteRow->setText(QCoreApplication::translate("SecondWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\321\202\321\200\320\276\320\272\321\203", nullptr));
#if QT_CONFIG(shortcut)
        menuDeleteRow->setShortcut(QCoreApplication::translate("SecondWindow", "Ctrl+Alt+R", nullptr));
#endif // QT_CONFIG(shortcut)
        menuAddColumn->setText(QCoreApplication::translate("SecondWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", nullptr));
#if QT_CONFIG(shortcut)
        menuAddColumn->setShortcut(QCoreApplication::translate("SecondWindow", "Ctrl+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        menuDeleteColumn->setText(QCoreApplication::translate("SecondWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", nullptr));
#if QT_CONFIG(shortcut)
        menuDeleteColumn->setShortcut(QCoreApplication::translate("SecondWindow", "Ctrl+Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
        menuColorPrimes->setText(QCoreApplication::translate("SecondWindow", "\320\237\320\276\320\264\321\201\320\262\320\265\321\202\320\270\321\202\321\214 \320\277\321\200\320\276\321\201\321\202\321\213\320\265 \321\207\320\270\321\201\320\273\320\260", nullptr));
#if QT_CONFIG(shortcut)
        menuColorPrimes->setShortcut(QCoreApplication::translate("SecondWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        menuUncolorPrimes->setText(QCoreApplication::translate("SecondWindow", "\320\243\320\261\321\200\320\260\321\202\321\214 \320\277\320\276\320\264\321\201\320\262\320\265\321\202\320\272\321\203", nullptr));
#if QT_CONFIG(shortcut)
        menuUncolorPrimes->setShortcut(QCoreApplication::translate("SecondWindow", "Ctrl+Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        menuShowSumm->setText(QCoreApplication::translate("SecondWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\201\321\203\320\274\320\274\321\203 \320\277\321\200\320\276\321\201\321\202\321\213\321\205 \321\207\320\270\321\201\320\265\320\273", nullptr));
#if QT_CONFIG(shortcut)
        menuShowSumm->setShortcut(QCoreApplication::translate("SecondWindow", "Ctrl+Shift+E", nullptr));
#endif // QT_CONFIG(shortcut)
        menuHideSumm->setText(QCoreApplication::translate("SecondWindow", "\320\243\320\261\321\200\320\260\321\202\321\214 \321\201\321\203\320\274\320\274\321\203 \320\277\321\200\320\276\321\201\321\202\321\213\321\205 \321\207\320\270\321\201\320\265\320\273", nullptr));
#if QT_CONFIG(shortcut)
        menuHideSumm->setShortcut(QCoreApplication::translate("SecondWindow", "Ctrl+Alt+E", nullptr));
#endif // QT_CONFIG(shortcut)
        menuClear->setText(QCoreApplication::translate("SecondWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", nullptr));
#if QT_CONFIG(shortcut)
        menuClear->setShortcut(QCoreApplication::translate("SecondWindow", "Shift+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("SecondWindow", "Matrix = ", nullptr));
        menu->setTitle(QCoreApplication::translate("SecondWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menu_2->setTitle(QCoreApplication::translate("SecondWindow", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("SecondWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SecondWindow: public Ui_SecondWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
