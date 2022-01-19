/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label_3;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLineEdit *editWidth;
    QLineEdit *editHeight;
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(284, 143);
        QFont font;
        font.setPointSize(9);
        Dialog->setFont(font);
        label_3 = new QLabel(Dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 0, 221, 21));
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 35, 195, 92));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        editWidth = new QLineEdit(layoutWidget);
        editWidth->setObjectName(QString::fromUtf8("editWidth"));

        verticalLayout->addWidget(editWidth);

        editHeight = new QLineEdit(layoutWidget);
        editHeight->setObjectName(QString::fromUtf8("editHeight"));

        verticalLayout->addWidget(editHeight);

        buttonBox = new QDialogButtonBox(layoutWidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        label = new QLabel(Dialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(211, 31, 54, 18));
        label->setFont(font);
        label_2 = new QLabel(Dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(211, 64, 50, 18));

        retranslateUi(Dialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), Dialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), Dialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "\320\227\320\260\320\277\321\200\320\276\321\201", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "\320\243\320\272\320\260\320\266\320\270\321\202\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \320\274\320\260\321\202\321\200\320\270\321\206\321\213", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "\320\250\320\270\321\200\320\270\320\275\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "\320\222\321\213\321\201\320\276\321\202\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
