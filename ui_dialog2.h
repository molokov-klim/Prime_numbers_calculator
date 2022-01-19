/********************************************************************************
** Form generated from reading UI file 'dialog2.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG2_H
#define UI_DIALOG2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Dialog2
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QRadioButton *radioNewWindow;
    QRadioButton *radioSameWindow;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *Dialog2)
    {
        if (Dialog2->objectName().isEmpty())
            Dialog2->setObjectName(QString::fromUtf8("Dialog2"));
        Dialog2->resize(406, 148);
        verticalLayout = new QVBoxLayout(Dialog2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(Dialog2);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        radioNewWindow = new QRadioButton(Dialog2);
        radioNewWindow->setObjectName(QString::fromUtf8("radioNewWindow"));

        verticalLayout->addWidget(radioNewWindow);

        radioSameWindow = new QRadioButton(Dialog2);
        radioSameWindow->setObjectName(QString::fromUtf8("radioSameWindow"));

        verticalLayout->addWidget(radioSameWindow);

        buttonBox = new QDialogButtonBox(Dialog2);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(Dialog2);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog2, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog2, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog2);
    } // setupUi

    void retranslateUi(QDialog *Dialog2)
    {
        Dialog2->setWindowTitle(QCoreApplication::translate("Dialog2", "\320\227\320\260\320\277\321\200\320\276\321\201", nullptr));
        label->setText(QCoreApplication::translate("Dialog2", "\320\222\321\213\320\261\320\265\321\200\320\270\321\202\320\265 \320\264\320\265\320\271\321\201\321\202\320\262\320\270\320\265", nullptr));
        radioNewWindow->setText(QCoreApplication::translate("Dialog2", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\262 \320\275\320\276\320\262\320\276\320\274 \320\276\320\272\320\275\320\265", nullptr));
        radioSameWindow->setText(QCoreApplication::translate("Dialog2", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\262 \321\202\320\276\320\274 \320\266\320\265 \320\276\320\272\320\275\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog2: public Ui_Dialog2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG2_H
