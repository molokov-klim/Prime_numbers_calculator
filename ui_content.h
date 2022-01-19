/********************************************************************************
** Form generated from reading UI file 'content.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTENT_H
#define UI_CONTENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Content
{
public:
    QVBoxLayout *verticalLayout;
    QTreeWidget *treeWidget;
    QPushButton *pushButton;

    void setupUi(QDialog *Content)
    {
        if (Content->objectName().isEmpty())
            Content->setObjectName(QString::fromUtf8("Content"));
        Content->resize(970, 655);
        verticalLayout = new QVBoxLayout(Content);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        treeWidget = new QTreeWidget(Content);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        __qtreewidgetitem1->setTextAlignment(1, Qt::AlignLeading|Qt::AlignVCenter);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem);
        QTreeWidgetItem *__qtreewidgetitem2 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        new QTreeWidgetItem(__qtreewidgetitem2);
        QTreeWidgetItem *__qtreewidgetitem3 = new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(__qtreewidgetitem3);
        new QTreeWidgetItem(__qtreewidgetitem3);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));

        verticalLayout->addWidget(treeWidget);

        pushButton = new QPushButton(Content);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(Content);
        QObject::connect(pushButton, SIGNAL(clicked()), Content, SLOT(close()));

        QMetaObject::connectSlotsByName(Content);
    } // setupUi

    void retranslateUi(QDialog *Content)
    {
        Content->setWindowTitle(QCoreApplication::translate("Content", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("Content", "\320\237\320\276\321\217\321\201\320\275\320\265\320\275\320\270\320\265", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("Content", "\320\255\320\273\320\265\320\274\320\265\320\275\321\202", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("Content", "\320\244\320\260\320\271\320\273", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = ___qtreewidgetitem1->child(0);
        ___qtreewidgetitem2->setText(1, QCoreApplication::translate("Content", "\320\241\320\276\320\267\320\264\320\260\320\265\321\202 \320\274\320\260\321\202\321\200\320\270\321\206\321\203 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\320\276\320\271 \321\200\320\260\320\267\320\274\320\265\321\200\320\275\320\276\321\201\321\202\320\270", nullptr));
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("Content", "\320\241\320\276\320\267\320\264\320\260\321\202\321\214", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = ___qtreewidgetitem1->child(1);
        ___qtreewidgetitem3->setText(1, QCoreApplication::translate("Content", "\320\236\321\202\320\272\321\200\321\213\320\262\320\260\320\265\321\202 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\321\213\320\271 \321\204\320\260\320\271\320\273 \321\204\320\276\321\200\320\274\320\260\321\202\320\260 xls \320\270 \320\262\321\213\320\262\320\276\320\264\320\270\321\202 \320\264\320\260\320\275\320\275\321\213\320\265 \320\275\320\260 \321\215\320\272\321\200\320\260\320\275", nullptr));
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("Content", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem1->child(2);
        ___qtreewidgetitem4->setText(1, QCoreApplication::translate("Content", "\320\241\320\276\321\205\321\200\320\260\320\275\321\217\320\265\321\202 \320\264\320\260\320\275\320\275\321\213\320\265 \320\270\320\267 \321\200\320\260\320\261\320\276\321\207\320\265\320\263\320\276 \320\277\320\276\320\273\321\217 \320\262 \321\203\320\272\320\260\320\267\320\260\320\275\320\275\321\213\320\271 \321\204\320\260\320\271\320\273 \321\204\320\276\321\200\320\274\320\260\321\202\320\260 xls", nullptr));
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("Content", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem1->child(3);
        ___qtreewidgetitem5->setText(1, QCoreApplication::translate("Content", "\320\243\320\264\320\260\320\273\321\217\320\265\321\202 \320\262\321\201\320\265 \320\264\320\260\320\275\320\275\321\213\320\265, \321\201\321\202\320\276\320\273\320\261\321\206\321\213 \320\270 \321\201\321\202\321\200\320\276\320\272\320\270 \320\270\320\267 \321\200\320\260\320\261\320\276\321\207\320\265\320\263\320\276 \320\277\320\276\320\273\321\217", nullptr));
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("Content", "\320\227\320\260\320\272\321\200\321\213\321\202\321\214", nullptr));
        QTreeWidgetItem *___qtreewidgetitem6 = ___qtreewidgetitem1->child(4);
        ___qtreewidgetitem6->setText(1, QCoreApplication::translate("Content", "\320\227\320\260\320\272\321\200\321\213\320\262\320\260\320\265\321\202 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\203", nullptr));
        ___qtreewidgetitem6->setText(0, QCoreApplication::translate("Content", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        QTreeWidgetItem *___qtreewidgetitem7 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem7->setText(0, QCoreApplication::translate("Content", "\320\242\320\260\320\261\320\273\320\270\321\206\320\260", nullptr));
        QTreeWidgetItem *___qtreewidgetitem8 = ___qtreewidgetitem7->child(0);
        ___qtreewidgetitem8->setText(1, QCoreApplication::translate("Content", "\320\224\320\276\320\261\320\260\320\262\320\273\321\217\320\265\321\202 \321\201\321\202\321\200\320\276\320\272\321\203 \320\262 \320\274\320\260\321\202\321\200\320\270\321\206\321\203 \320\275\320\260 \321\200\320\260\320\261\320\276\321\207\320\265\320\274 \320\277\320\276\320\273\320\265", nullptr));
        ___qtreewidgetitem8->setText(0, QCoreApplication::translate("Content", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\321\200\320\276\320\272\321\203", nullptr));
        QTreeWidgetItem *___qtreewidgetitem9 = ___qtreewidgetitem7->child(1);
        ___qtreewidgetitem9->setText(1, QCoreApplication::translate("Content", "\320\243\320\264\320\260\320\273\321\217\320\265\321\202 \321\201\321\202\321\200\320\276\320\272\321\203 \320\270\320\267 \320\274\320\260\321\202\321\200\320\270\321\206\321\213 \320\275\320\260 \321\200\320\260\320\261\320\276\321\207\320\265\320\274 \320\277\320\276\320\273\320\265", nullptr));
        ___qtreewidgetitem9->setText(0, QCoreApplication::translate("Content", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\321\202\321\200\320\276\320\272\321\203", nullptr));
        QTreeWidgetItem *___qtreewidgetitem10 = ___qtreewidgetitem7->child(2);
        ___qtreewidgetitem10->setText(1, QCoreApplication::translate("Content", "\320\224\320\276\320\261\320\260\320\262\320\273\321\217\320\265\321\202 \321\201\321\202\320\276\320\273\320\261\320\265\321\206 \320\262 \320\274\320\260\321\202\321\200\320\270\321\206\321\203 \320\275\320\260 \321\200\320\260\320\261\320\276\321\207\320\265\320\274 \320\277\320\276\320\273\320\265", nullptr));
        ___qtreewidgetitem10->setText(0, QCoreApplication::translate("Content", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", nullptr));
        QTreeWidgetItem *___qtreewidgetitem11 = ___qtreewidgetitem7->child(3);
        ___qtreewidgetitem11->setText(1, QCoreApplication::translate("Content", "\320\243\320\264\320\260\320\273\321\217\320\265\321\202 \321\201\321\202\320\276\320\273\320\261\320\265\321\206 \320\270\320\267 \320\274\320\260\321\202\321\200\320\270\321\206\321\213 \320\275\320\260 \321\200\320\260\320\261\320\276\321\207\320\265\320\274 \320\277\320\276\320\273\320\265", nullptr));
        ___qtreewidgetitem11->setText(0, QCoreApplication::translate("Content", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214 \321\201\321\202\320\276\320\273\320\261\320\265\321\206", nullptr));
        QTreeWidgetItem *___qtreewidgetitem12 = ___qtreewidgetitem7->child(4);
        ___qtreewidgetitem12->setText(1, QCoreApplication::translate("Content", "\320\237\321\200\320\276\320\262\320\265\321\200\321\217\320\265\321\202 \320\262\321\201\320\265 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\321\213 \320\274\320\260\321\202\321\200\320\270\321\206\321\213 \320\275\320\260 \320\277\321\200\320\276\321\201\321\202\320\276\321\202\321\203 \320\270 \320\270\320\267\320\274\320\265\320\275\321\217\320\265\321\202 \321\210\321\200\320\270\321\204\321\202 \n"
"\320\264\320\273\321\217 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262 \321\217\320\262\320\273\321\217\321\216\321\211\320\270\321\205\321\201\321\217 \320\277\321\200\320\276\321\201\321\202\321\213\320\274\320\270 \321\207\320\270\321\201\320\273\320\260\320\274\320\270 \320\275\320\260 \320\266\320\270\321\200\320\275\321\213\320\271 \320\272\321\203\321\200\321\201\320\270\320\262", nullptr));
        ___qtreewidgetitem12->setText(0, QCoreApplication::translate("Content", "\320\237\320\276\320\264\321\201\320\262\320\265\321\202\320\270\321\202\321\214 \320\277\321\200\320\276\321\201\321\202\321\213\320\265 \321\207\320\270\321\201\320\273\320\260", nullptr));
        QTreeWidgetItem *___qtreewidgetitem13 = ___qtreewidgetitem7->child(5);
        ___qtreewidgetitem13->setText(1, QCoreApplication::translate("Content", "\320\243\321\201\321\202\320\260\320\275\320\260\320\262\320\273\320\270\320\262\320\260\320\265\321\202 \321\210\321\200\320\270\321\204\321\202 \320\277\320\276 \321\203\320\274\320\276\320\273\321\207\320\260\320\275\320\270\321\216 \320\264\320\273\321\217 \320\262\321\201\320\265\321\205 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262 \320\274\320\260\321\202\321\200\320\270\321\206\321\213", nullptr));
        ___qtreewidgetitem13->setText(0, QCoreApplication::translate("Content", "\320\243\320\261\321\200\320\260\321\202\321\214 \320\277\320\276\320\264\321\201\320\262\320\265\321\202\320\272\321\203", nullptr));
        QTreeWidgetItem *___qtreewidgetitem14 = ___qtreewidgetitem7->child(6);
        ___qtreewidgetitem14->setText(1, QCoreApplication::translate("Content", "\320\237\321\200\320\276\320\262\320\265\321\200\321\217\320\265\321\202 \320\262\321\201\320\265 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\321\213 \320\274\320\260\321\202\321\200\320\270\321\206\321\213 \320\275\320\260 \320\277\321\200\320\276\321\202\320\276\321\202\321\203, \320\262\321\213\321\207\320\270\321\201\320\273\321\217\320\265\321\202 \n"
"\321\201\321\203\320\274\320\274\321\203 \320\277\321\200\320\276\321\201\321\202\321\213\321\205 \321\207\320\270\321\201\320\265\320\273 \320\264\320\273\321\217 \320\272\320\260\320\266\320\264\320\276\320\263\320\276 \321\201\321\202\320\276\320\273\320\261\321\206\320\260 \320\270 \320\262\321\213\320\262\320\276\320\264\320\270\321\202 \320\270\321\205 \n"
"\321\201\321\203\320\274\320\274\321\213 \320\262 \320\275\320\270\320\266\320\275\321\216\321\216 \321\201\321\202\321\200\320\276\320\272\321\203", nullptr));
        ___qtreewidgetitem14->setText(0, QCoreApplication::translate("Content", "\320\237\320\276\320\272\320\260\320\267\320\260\321\202\321\214 \321\201\321\203\320\274\320\274\321\203 \320\277\321\200\320\276\321\201\321\202\321\213\321\205 \321\207\320\270\321\201\320\265\320\273", nullptr));
        QTreeWidgetItem *___qtreewidgetitem15 = ___qtreewidgetitem7->child(7);
        ___qtreewidgetitem15->setText(1, QCoreApplication::translate("Content", "\320\243\320\264\320\260\320\273\321\217\320\265\321\202 \320\275\320\270\320\266\320\275\321\216\321\216 \321\201\321\202\321\200\320\276\320\272\321\203 \321\201 \321\201\321\203\320\274\320\274\320\276\320\271 \320\277\321\200\320\276\321\201\321\202\321\213\321\205 \321\207\320\270\321\201\320\265\320\273", nullptr));
        ___qtreewidgetitem15->setText(0, QCoreApplication::translate("Content", "\320\243\320\261\321\200\320\260\321\202\321\214 \321\201\321\203\320\274\320\274\321\203 \320\277\321\200\320\276\321\201\321\202\321\213\321\205 \321\207\320\270\321\201\320\265\320\273", nullptr));
        QTreeWidgetItem *___qtreewidgetitem16 = ___qtreewidgetitem7->child(8);
        ___qtreewidgetitem16->setText(1, QCoreApplication::translate("Content", "\320\243\320\264\320\260\320\273\321\217\320\265\321\202 \320\264\320\260\320\275\320\275\321\213\320\265 \320\270\320\267 \320\262\321\201\320\265\321\205 \321\215\320\273\320\265\320\274\320\265\320\275\321\202\320\276\320\262 \320\274\320\260\321\202\321\200\320\270\321\206\321\213, \320\272\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \n"
"\321\201\321\202\321\200\320\276\320\272 \320\270 \321\201\321\202\320\276\320\273\320\261\321\206\320\276\320\262 \320\276\321\201\321\202\320\260\320\265\321\202\321\201\321\217 \320\275\320\265\320\270\320\267\320\274\320\265\320\275\320\275\321\213\320\274", nullptr));
        ___qtreewidgetitem16->setText(0, QCoreApplication::translate("Content", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214 \321\202\320\260\320\261\320\273\320\270\321\206\321\203", nullptr));
        QTreeWidgetItem *___qtreewidgetitem17 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem17->setText(0, QCoreApplication::translate("Content", "\320\241\320\277\321\200\320\260\320\262\320\272\320\260", nullptr));
        QTreeWidgetItem *___qtreewidgetitem18 = ___qtreewidgetitem17->child(0);
        ___qtreewidgetitem18->setText(1, QCoreApplication::translate("Content", "\320\222\321\213\320\262\320\276\320\264\320\270\321\202 \320\276\320\272\320\275\320\276 \321\201\320\276 \321\201\320\262\320\265\320\264\320\265\320\275\320\270\321\217\320\274\320\270 \320\276 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        ___qtreewidgetitem18->setText(0, QCoreApplication::translate("Content", "\320\236 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\320\265", nullptr));
        QTreeWidgetItem *___qtreewidgetitem19 = ___qtreewidgetitem17->child(1);
        ___qtreewidgetitem19->setText(1, QCoreApplication::translate("Content", "\320\222\321\213\320\262\320\276\320\264\320\270\321\202 \320\276\320\272\320\275\320\276 \321\201\320\276 \321\201\320\277\321\200\320\260\320\262\320\276\321\207\320\275\320\276\320\271 \320\270\320\275\321\204\320\276\321\200\320\274\320\260\321\206\320\270\320\265\320\271", nullptr));
        ___qtreewidgetitem19->setText(0, QCoreApplication::translate("Content", "\320\241\320\276\320\264\320\265\321\200\320\266\320\270\320\274\320\276\320\265", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

        pushButton->setText(QCoreApplication::translate("Content", "back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Content: public Ui_Content {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTENT_H
