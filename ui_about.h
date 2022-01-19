/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_about
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QPushButton *pushButton;

    void setupUi(QDialog *about)
    {
        if (about->objectName().isEmpty())
            about->setObjectName(QString::fromUtf8("about"));
        about->resize(590, 332);
        label = new QLabel(about);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 80, 151, 141));
        label->setPixmap(QPixmap(QString::fromUtf8("bird2.ico")));
        label_2 = new QLabel(about);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(190, 0, 381, 51));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setItalic(false);
        font.setWeight(75);
        label_2->setFont(font);
        label_3 = new QLabel(about);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 30, 311, 51));
        label_3->setFont(font);
        label_4 = new QLabel(about);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(210, 90, 121, 16));
        label_5 = new QLabel(about);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(210, 120, 321, 16));
        label_6 = new QLabel(about);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(210, 140, 321, 16));
        label_7 = new QLabel(about);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(210, 170, 161, 16));
        label_8 = new QLabel(about);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(210, 200, 191, 16));
        label_9 = new QLabel(about);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(210, 230, 141, 16));
        pushButton = new QPushButton(about);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(200, 280, 191, 28));

        retranslateUi(about);
        QObject::connect(pushButton, SIGNAL(clicked()), about, SLOT(close()));

        QMetaObject::connectSlotsByName(about);
    } // setupUi

    void retranslateUi(QDialog *about)
    {
        about->setWindowTitle(QCoreApplication::translate("about", "About", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("about", "\320\237\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\260 \320\262\321\213\321\207\320\270\321\201\320\273\320\265\320\275\320\270\321\217 \321\201\321\203\320\274\320\274\321\213 \320\277\321\200\320\276\321\201\321\202\321\213\321\205", nullptr));
        label_3->setText(QCoreApplication::translate("about", "\321\207\320\270\321\201\320\265\320\273 \320\262 \320\272\320\260\320\266\320\264\320\276\320\274 \321\201\321\202\320\276\320\273\320\261\321\206\320\265 \320\274\320\260\321\202\321\200\320\270\321\206\321\213", nullptr));
        label_4->setText(QCoreApplication::translate("about", "\320\222\320\265\321\200\321\201\320\270\321\217 1.1 - 32 bit", nullptr));
        label_5->setText(QCoreApplication::translate("about", "(C) 2021 by Molokov Klim, Lugansk State University", nullptr));
        label_6->setText(QCoreApplication::translate("about", "named after Volodymyr Dahl. \320\222\321\201\320\265 \320\277\321\200\320\260\320\262\320\260 \320\267\320\260\321\211\320\270\321\211\320\265\320\275\321\213", nullptr));
        label_7->setText(QCoreApplication::translate("about", "E-mail klementus@mail.ru", nullptr));
        label_8->setText(QCoreApplication::translate("about", "\320\236\321\201\320\275\320\276\320\262\320\260\320\275 \320\275\320\260 Qt Creator 4.14.2", nullptr));
        label_9->setText(QCoreApplication::translate("about", "\320\241\320\276\320\261\321\200\320\260\320\275 April 12 2021 ", nullptr));
        pushButton->setText(QCoreApplication::translate("about", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class about: public Ui_about {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
