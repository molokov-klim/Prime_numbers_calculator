/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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

class Ui_MainWindow
{
public:
    QAction *menuCreate;
    QAction *menuOpen;
    QAction *menuSave;
    QAction *menuAddRow;
    QAction *menuDeleteRow;
    QAction *menuAddColumn;
    QAction *menuDeleteColumn;
    QAction *menuColorPrimes;
    QAction *menuUncolorPrimes;
    QAction *menuShowSum;
    QAction *menuClose;
    QAction *menuExit;
    QAction *menuHideSum;
    QAction *menuClear;
    QAction *menuOpenEmpty;
    QAction *menuAbout;
    QAction *menuContent;
    QAction *menuDuplicate;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *label_3;
    QFrame *line;
    QLabel *label_2;
    QTableWidget *tableWidget;
    QFrame *line_2;
    QLabel *label_4;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuTable;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(863, 622);
        menuCreate = new QAction(MainWindow);
        menuCreate->setObjectName(QString::fromUtf8("menuCreate"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/resource/menu/file-plus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuCreate->setIcon(icon);
        menuOpen = new QAction(MainWindow);
        menuOpen->setObjectName(QString::fromUtf8("menuOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/resource/menu/folder.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuOpen->setIcon(icon1);
        menuSave = new QAction(MainWindow);
        menuSave->setObjectName(QString::fromUtf8("menuSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/resource/menu/save.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuSave->setIcon(icon2);
        menuAddRow = new QAction(MainWindow);
        menuAddRow->setObjectName(QString::fromUtf8("menuAddRow"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/resource/menu/chevrons-down.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuAddRow->setIcon(icon3);
        menuDeleteRow = new QAction(MainWindow);
        menuDeleteRow->setObjectName(QString::fromUtf8("menuDeleteRow"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/resource/menu/chevrons-up.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuDeleteRow->setIcon(icon4);
        menuAddColumn = new QAction(MainWindow);
        menuAddColumn->setObjectName(QString::fromUtf8("menuAddColumn"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/resource/menu/chevrons-right.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuAddColumn->setIcon(icon5);
        menuDeleteColumn = new QAction(MainWindow);
        menuDeleteColumn->setObjectName(QString::fromUtf8("menuDeleteColumn"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/resource/menu/chevrons-left.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuDeleteColumn->setIcon(icon6);
        menuColorPrimes = new QAction(MainWindow);
        menuColorPrimes->setObjectName(QString::fromUtf8("menuColorPrimes"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/image/resource/menu/sunrise.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuColorPrimes->setIcon(icon7);
        menuUncolorPrimes = new QAction(MainWindow);
        menuUncolorPrimes->setObjectName(QString::fromUtf8("menuUncolorPrimes"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/image/resource/menu/sunset.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuUncolorPrimes->setIcon(icon8);
        menuShowSum = new QAction(MainWindow);
        menuShowSum->setObjectName(QString::fromUtf8("menuShowSum"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/image/resource/menu/plus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuShowSum->setIcon(icon9);
        menuClose = new QAction(MainWindow);
        menuClose->setObjectName(QString::fromUtf8("menuClose"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/image/resource/menu/delete.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuClose->setIcon(icon10);
        menuExit = new QAction(MainWindow);
        menuExit->setObjectName(QString::fromUtf8("menuExit"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/image/resource/menu/power.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuExit->setIcon(icon11);
        menuHideSum = new QAction(MainWindow);
        menuHideSum->setObjectName(QString::fromUtf8("menuHideSum"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/image/resource/menu/minus.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuHideSum->setIcon(icon12);
        menuClear = new QAction(MainWindow);
        menuClear->setObjectName(QString::fromUtf8("menuClear"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/image/resource/menu/trash-2.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuClear->setIcon(icon13);
        menuOpenEmpty = new QAction(MainWindow);
        menuOpenEmpty->setObjectName(QString::fromUtf8("menuOpenEmpty"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/image/resource/menu/copy.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuOpenEmpty->setIcon(icon14);
        menuAbout = new QAction(MainWindow);
        menuAbout->setObjectName(QString::fromUtf8("menuAbout"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/image/resource/menu/info.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuAbout->setIcon(icon15);
        menuContent = new QAction(MainWindow);
        menuContent->setObjectName(QString::fromUtf8("menuContent"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/image/resource/menu/archive.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuContent->setIcon(icon16);
        menuDuplicate = new QAction(MainWindow);
        menuDuplicate->setObjectName(QString::fromUtf8("menuDuplicate"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/image/resource/menu/clipboard.svg"), QSize(), QIcon::Normal, QIcon::Off);
        menuDuplicate->setIcon(icon17);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(24);
        label->setFont(font);

        horizontalLayout->addWidget(label);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setSizeIncrement(QSize(10, 0));
        QFont font1;
        font1.setBold(true);
        font1.setItalic(false);
        font1.setWeight(75);
        font1.setKerning(false);
        line->setFont(font1);
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        tableWidget = new QTableWidget(centralwidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        tableWidget->setFocusPolicy(Qt::ClickFocus);
        tableWidget->setLayoutDirection(Qt::LeftToRight);
        tableWidget->setShowGrid(false);
        tableWidget->setColumnCount(0);

        horizontalLayout->addWidget(tableWidget);

        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout->addWidget(label_4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 863, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuTable = new QMenu(menubar);
        menuTable->setObjectName(QString::fromUtf8("menuTable"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuTable->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(menuCreate);
        menuFile->addAction(menuOpen);
        menuFile->addAction(menuSave);
        menuFile->addAction(menuClose);
        menuFile->addSeparator();
        menuFile->addAction(menuExit);
        menuTable->addAction(menuAddRow);
        menuTable->addAction(menuDeleteRow);
        menuTable->addAction(menuAddColumn);
        menuTable->addAction(menuDeleteColumn);
        menuTable->addAction(menuColorPrimes);
        menuTable->addAction(menuUncolorPrimes);
        menuTable->addAction(menuShowSum);
        menuTable->addAction(menuHideSum);
        menuTable->addAction(menuClear);
        menuHelp->addAction(menuAbout);
        menuHelp->addAction(menuContent);
        toolBar->addAction(menuCreate);
        toolBar->addAction(menuOpen);
        toolBar->addAction(menuSave);
        toolBar->addSeparator();
        toolBar->addAction(menuAddRow);
        toolBar->addAction(menuDeleteRow);
        toolBar->addAction(menuAddColumn);
        toolBar->addAction(menuDeleteColumn);
        toolBar->addSeparator();
        toolBar->addAction(menuColorPrimes);
        toolBar->addAction(menuUncolorPrimes);
        toolBar->addSeparator();
        toolBar->addAction(menuShowSum);
        toolBar->addAction(menuHideSum);
        toolBar->addSeparator();
        toolBar->addAction(menuClear);
        toolBar->addAction(menuClose);
        toolBar->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\262\321\213\321\207\320\270\321\201\320\273\320\265\320\275\320\270\321\217 \321\201\321\203\320\274\320\274\321\213 \320\277\321\200\320\276\321\201\321\202\321\213\321\205 \321\207\320\270\321\201\320\265\320\273 \320\262 \321\201\321\202\320\276\320\273\320\261\321\206\320\265 \320\274\320\260\321\202\321\200\320\270\321\206\321\213", nullptr));
        menuCreate->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        menuCreate->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        menuOpen->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        menuOpen->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+O", nullptr));
#endif // QT_CONFIG(shortcut)
        menuSave->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        menuSave->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        menuAddRow->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\321\200\320\276\320\272\321\203", nullptr));
#if QT_CONFIG(shortcut)
        menuAddRow->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+R", nullptr));
#endif // QT_CONFIG(shortcut)
        menuDeleteRow->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\321\202\321\200\320\276\320\272\321\203", nullptr));
#if QT_CONFIG(shortcut)
        menuDeleteRow->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+R", nullptr));
#endif // QT_CONFIG(shortcut)
        menuAddColumn->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", nullptr));
#if QT_CONFIG(shortcut)
        menuAddColumn->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+C", nullptr));
#endif // QT_CONFIG(shortcut)
        menuDeleteColumn->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", nullptr));
#if QT_CONFIG(shortcut)
        menuDeleteColumn->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+C", nullptr));
#endif // QT_CONFIG(shortcut)
        menuColorPrimes->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\321\201\320\262\320\265\321\202\320\270\321\202\321\214 \320\277\321\200\320\276\321\201\321\202\321\213\320\265 \321\207\320\270\321\201\320\273\320\260", nullptr));
#if QT_CONFIG(shortcut)
        menuColorPrimes->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+S", nullptr));
#endif // QT_CONFIG(shortcut)
        menuUncolorPrimes->setText(QCoreApplication::translate("MainWindow", "\320\243\320\261\321\200\320\260\321\202\321\214 \320\277\320\276\320\264\321\201\320\262\320\265\321\202\320\272\321\203", nullptr));
#if QT_CONFIG(shortcut)
        menuUncolorPrimes->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+S", nullptr));
#endif // QT_CONFIG(shortcut)
        menuShowSum->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\201\321\203\320\274\320\274\321\203 \320\277\321\200\320\276\321\201\321\202\321\213\321\205 \321\207\320\270\321\201\320\265\320\273", nullptr));
#if QT_CONFIG(shortcut)
        menuShowSum->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+E", nullptr));
#endif // QT_CONFIG(shortcut)
        menuClose->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
#if QT_CONFIG(shortcut)
        menuClose->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        menuExit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
#if QT_CONFIG(shortcut)
        menuExit->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        menuHideSum->setText(QCoreApplication::translate("MainWindow", "\320\243\320\261\321\200\320\260\321\202\321\214 \321\201\321\203\320\274\320\274\321\203 \320\277\321\200\320\276\321\201\321\202\321\213\321\205 \321\207\320\270\321\201\320\265\320\273", nullptr));
#if QT_CONFIG(shortcut)
        menuHideSum->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+E", nullptr));
#endif // QT_CONFIG(shortcut)
        menuClear->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", nullptr));
#if QT_CONFIG(shortcut)
        menuClear->setShortcut(QCoreApplication::translate("MainWindow", "Shift+Q", nullptr));
#endif // QT_CONFIG(shortcut)
        menuOpenEmpty->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\277\321\203\321\201\321\202\320\276\320\265 \320\276\320\272\320\275\320\276", nullptr));
#if QT_CONFIG(shortcut)
        menuOpenEmpty->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+O", nullptr));
#endif // QT_CONFIG(shortcut)
        menuAbout->setText(QCoreApplication::translate("MainWindow", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
#if QT_CONFIG(shortcut)
        menuAbout->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+A", nullptr));
#endif // QT_CONFIG(shortcut)
        menuContent->setText(QCoreApplication::translate("MainWindow", "\320\241\320\276\320\264\320\265\321\200\320\266\320\270\320\274\320\276\320\265", nullptr));
#if QT_CONFIG(shortcut)
        menuContent->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+I", nullptr));
#endif // QT_CONFIG(shortcut)
        menuDuplicate->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\264\321\203\320\261\320\273\320\270\321\200\320\276\320\262\320\260\321\202\321\214 \320\276\320\272\320\275\320\276", nullptr));
#if QT_CONFIG(shortcut)
        menuDuplicate->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Shift+D", nullptr));
#endif // QT_CONFIG(shortcut)
        label->setText(QCoreApplication::translate("MainWindow", "Matrix = ", nullptr));
        label_3->setText(QString());
        label_2->setText(QString());
        label_4->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "\320\244\320\260\320\271\320\273", nullptr));
        menuTable->setTitle(QCoreApplication::translate("MainWindow", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
