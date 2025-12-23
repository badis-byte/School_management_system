/********************************************************************************
** Form generated from reading UI file 'dialogstudentmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSTUDENTMENU_H
#define UI_DIALOGSTUDENTMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogStudentMenu
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QLineEdit *ID;
    QLineEdit *Name;
    QTableWidget *tableWidget;
    QLineEdit *Birth;
    QLineEdit *Level;
    QLabel *label;
    QWidget *tab_2;
    QWidget *tab_4;
    QWidget *tab_3;

    void setupUi(QDialog *DialogStudentMenu)
    {
        if (DialogStudentMenu->objectName().isEmpty())
            DialogStudentMenu->setObjectName("DialogStudentMenu");
        DialogStudentMenu->resize(570, 462);
        tabWidget = new QTabWidget(DialogStudentMenu);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(0, 0, 571, 471));
        tab = new QWidget();
        tab->setObjectName("tab");
        ID = new QLineEdit(tab);
        ID->setObjectName("ID");
        ID->setGeometry(QRect(300, 60, 121, 31));
        ID->setReadOnly(true);
        Name = new QLineEdit(tab);
        Name->setObjectName("Name");
        Name->setGeometry(QRect(300, 90, 121, 31));
        Name->setReadOnly(true);
        tableWidget = new QTableWidget(tab);
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
        tableWidget->setGeometry(QRect(20, 30, 271, 192));
        Birth = new QLineEdit(tab);
        Birth->setObjectName("Birth");
        Birth->setGeometry(QRect(300, 130, 121, 31));
        Birth->setReadOnly(true);
        Level = new QLineEdit(tab);
        Level->setObjectName("Level");
        Level->setGeometry(QRect(300, 170, 121, 31));
        Level->setReadOnly(true);
        label = new QLabel(tab);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 0, 171, 20));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        tabWidget->addTab(tab_4, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        tabWidget->addTab(tab_3, QString());

        retranslateUi(DialogStudentMenu);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(DialogStudentMenu);
    } // setupUi

    void retranslateUi(QDialog *DialogStudentMenu)
    {
        DialogStudentMenu->setWindowTitle(QCoreApplication::translate("DialogStudentMenu", "Dialog", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DialogStudentMenu", "INFO", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DialogStudentMenu", "ID", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DialogStudentMenu", "FULL NAME", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DialogStudentMenu", "Birth Date", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DialogStudentMenu", "level", nullptr));
        label->setText(QCoreApplication::translate("DialogStudentMenu", "Hello Name", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("DialogStudentMenu", "General", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("DialogStudentMenu", "S1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("DialogStudentMenu", "S2", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("DialogStudentMenu", "Exams", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogStudentMenu: public Ui_DialogStudentMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSTUDENTMENU_H
