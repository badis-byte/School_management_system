/********************************************************************************
** Form generated from reading UI file 'dialogteachermenu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTEACHERMENU_H
#define UI_DIALOGTEACHERMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTreeWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogTeacherMenu
{
public:
    QLabel *label;
    QTableWidget *tableWidget;
    QTreeWidget *treeWidget;
    QLineEdit *ID;
    QLineEdit *Name;
    QLineEdit *Birth;
    QLineEdit *Grade;

    void setupUi(QDialog *DialogTeacherMenu)
    {
        if (DialogTeacherMenu->objectName().isEmpty())
            DialogTeacherMenu->setObjectName("DialogTeacherMenu");
        DialogTeacherMenu->resize(815, 483);
        label = new QLabel(DialogTeacherMenu);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 30, 171, 20));
        tableWidget = new QTableWidget(DialogTeacherMenu);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidget->rowCount() < 4)
            tableWidget->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem4);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(20, 70, 271, 192));
        treeWidget = new QTreeWidget(DialogTeacherMenu);
        new QTreeWidgetItem(treeWidget);
        new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem(treeWidget);
        QTreeWidgetItem *__qtreewidgetitem1 = new QTreeWidgetItem(__qtreewidgetitem);
        new QTreeWidgetItem(__qtreewidgetitem1);
        treeWidget->setObjectName("treeWidget");
        treeWidget->setGeometry(QRect(430, 70, 256, 192));
        ID = new QLineEdit(DialogTeacherMenu);
        ID->setObjectName("ID");
        ID->setGeometry(QRect(110, 100, 121, 31));
        ID->setReadOnly(true);
        Name = new QLineEdit(DialogTeacherMenu);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(110, 130, 121, 31));
        Name->setReadOnly(true);
        Birth = new QLineEdit(DialogTeacherMenu);
        Birth->setObjectName("Birth");
        Birth->setGeometry(QRect(110, 170, 121, 31));
        Birth->setReadOnly(true);
        Grade = new QLineEdit(DialogTeacherMenu);
        Grade->setObjectName("Grade");
        Grade->setGeometry(QRect(110, 210, 121, 31));
        Grade->setReadOnly(true);

        retranslateUi(DialogTeacherMenu);

        QMetaObject::connectSlotsByName(DialogTeacherMenu);
    } // setupUi

    void retranslateUi(QDialog *DialogTeacherMenu)
    {
        DialogTeacherMenu->setWindowTitle(QCoreApplication::translate("DialogTeacherMenu", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogTeacherMenu", "Hello Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DialogTeacherMenu", "INFO", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DialogTeacherMenu", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DialogTeacherMenu", "FULL NAME", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DialogTeacherMenu", "Birth Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DialogTeacherMenu", "grade", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(3, QCoreApplication::translate("DialogTeacherMenu", "bvgffg", nullptr));
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("DialogTeacherMenu", "jjjjjjlll", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("DialogTeacherMenu", "1jjjj", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("DialogTeacherMenu", "1", nullptr));

        const bool __sortingEnabled = treeWidget->isSortingEnabled();
        treeWidget->setSortingEnabled(false);
        QTreeWidgetItem *___qtreewidgetitem1 = treeWidget->topLevelItem(0);
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("DialogTeacherMenu", "eejdsuwhwbs", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("DialogTeacherMenu", "jjjfkrd", nullptr));
        ___qtreewidgetitem1->setText(0, QCoreApplication::translate("DialogTeacherMenu", "jjjj", nullptr));
        QTreeWidgetItem *___qtreewidgetitem2 = treeWidget->topLevelItem(1);
        ___qtreewidgetitem2->setText(0, QCoreApplication::translate("DialogTeacherMenu", "New Item", nullptr));
        QTreeWidgetItem *___qtreewidgetitem3 = treeWidget->topLevelItem(2);
        ___qtreewidgetitem3->setText(0, QCoreApplication::translate("DialogTeacherMenu", "New Item", nullptr));
        QTreeWidgetItem *___qtreewidgetitem4 = ___qtreewidgetitem3->child(0);
        ___qtreewidgetitem4->setText(0, QCoreApplication::translate("DialogTeacherMenu", "New Subitem", nullptr));
        QTreeWidgetItem *___qtreewidgetitem5 = ___qtreewidgetitem4->child(0);
        ___qtreewidgetitem5->setText(0, QCoreApplication::translate("DialogTeacherMenu", "New Subitem", nullptr));
        treeWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class DialogTeacherMenu: public Ui_DialogTeacherMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTEACHERMENU_H
