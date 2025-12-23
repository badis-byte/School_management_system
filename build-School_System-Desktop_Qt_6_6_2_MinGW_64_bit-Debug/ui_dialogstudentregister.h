/********************************************************************************
** Form generated from reading UI file 'dialogstudentregister.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSTUDENTREGISTER_H
#define UI_DIALOGSTUDENTREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogStudentRegister
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *one;
    QRadioButton *two;
    QRadioButton *three;
    QRadioButton *four;
    QRadioButton *five;
    QLabel *label;
    QPushButton *pushButton_rregister;
    QPushButton *pushButton_clear;
    QWidget *widget1;
    QVBoxLayout *verticalLayout;
    QLabel *Fname;
    QLabel *Lname;
    QLabel *year;
    QLabel *month;
    QLabel *day;
    QLabel *number;
    QWidget *widget2;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *lineEditFname;
    QLineEdit *lineEditLname;
    QLineEdit *lineEditYear;
    QLineEdit *lineEditMonth;
    QLineEdit *lineEditDay;
    QLineEdit *lineEditNumber;
    QWidget *widget3;
    QHBoxLayout *horizontalLayout;
    QLabel *psswd;
    QLineEdit *lineEditPsswd;

    void setupUi(QDialog *DialogStudentRegister)
    {
        if (DialogStudentRegister->objectName().isEmpty())
            DialogStudentRegister->setObjectName("DialogStudentRegister");
        DialogStudentRegister->resize(837, 493);
        widget = new QWidget(DialogStudentRegister);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(170, 230, 661, 89));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        one = new QRadioButton(widget);
        one->setObjectName("one");
        one->setChecked(true);

        horizontalLayout_2->addWidget(one);

        two = new QRadioButton(widget);
        two->setObjectName("two");

        horizontalLayout_2->addWidget(two);

        three = new QRadioButton(widget);
        three->setObjectName("three");

        horizontalLayout_2->addWidget(three);

        four = new QRadioButton(widget);
        four->setObjectName("four");

        horizontalLayout_2->addWidget(four);

        five = new QRadioButton(widget);
        five->setObjectName("five");

        horizontalLayout_2->addWidget(five);

        label = new QLabel(DialogStudentRegister);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 250, 96, 36));
        pushButton_rregister = new QPushButton(DialogStudentRegister);
        pushButton_rregister->setObjectName("pushButton_rregister");
        pushButton_rregister->setGeometry(QRect(600, 400, 91, 41));
        pushButton_clear = new QPushButton(DialogStudentRegister);
        pushButton_clear->setObjectName("pushButton_clear");
        pushButton_clear->setGeometry(QRect(490, 400, 91, 41));
        widget1 = new QWidget(DialogStudentRegister);
        widget1->setObjectName("widget1");
        widget1->setGeometry(QRect(60, 20, 98, 231));
        verticalLayout = new QVBoxLayout(widget1);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Fname = new QLabel(widget1);
        Fname->setObjectName("Fname");

        verticalLayout->addWidget(Fname);

        Lname = new QLabel(widget1);
        Lname->setObjectName("Lname");

        verticalLayout->addWidget(Lname);

        year = new QLabel(widget1);
        year->setObjectName("year");

        verticalLayout->addWidget(year);

        month = new QLabel(widget1);
        month->setObjectName("month");

        verticalLayout->addWidget(month);

        day = new QLabel(widget1);
        day->setObjectName("day");

        verticalLayout->addWidget(day);

        number = new QLabel(widget1);
        number->setObjectName("number");

        verticalLayout->addWidget(number);

        widget2 = new QWidget(DialogStudentRegister);
        widget2->setObjectName("widget2");
        widget2->setGeometry(QRect(160, 20, 631, 231));
        verticalLayout_2 = new QVBoxLayout(widget2);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        lineEditFname = new QLineEdit(widget2);
        lineEditFname->setObjectName("lineEditFname");

        verticalLayout_2->addWidget(lineEditFname);

        lineEditLname = new QLineEdit(widget2);
        lineEditLname->setObjectName("lineEditLname");

        verticalLayout_2->addWidget(lineEditLname);

        lineEditYear = new QLineEdit(widget2);
        lineEditYear->setObjectName("lineEditYear");

        verticalLayout_2->addWidget(lineEditYear);

        lineEditMonth = new QLineEdit(widget2);
        lineEditMonth->setObjectName("lineEditMonth");

        verticalLayout_2->addWidget(lineEditMonth);

        lineEditDay = new QLineEdit(widget2);
        lineEditDay->setObjectName("lineEditDay");

        verticalLayout_2->addWidget(lineEditDay);

        lineEditNumber = new QLineEdit(widget2);
        lineEditNumber->setObjectName("lineEditNumber");

        verticalLayout_2->addWidget(lineEditNumber);

        widget3 = new QWidget(DialogStudentRegister);
        widget3->setObjectName("widget3");
        widget3->setGeometry(QRect(160, 320, 631, 30));
        horizontalLayout = new QHBoxLayout(widget3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        psswd = new QLabel(widget3);
        psswd->setObjectName("psswd");

        horizontalLayout->addWidget(psswd);

        lineEditPsswd = new QLineEdit(widget3);
        lineEditPsswd->setObjectName("lineEditPsswd");
        lineEditPsswd->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEditPsswd);


        retranslateUi(DialogStudentRegister);

        QMetaObject::connectSlotsByName(DialogStudentRegister);
    } // setupUi

    void retranslateUi(QDialog *DialogStudentRegister)
    {
        DialogStudentRegister->setWindowTitle(QCoreApplication::translate("DialogStudentRegister", "Dialog", nullptr));
        one->setText(QCoreApplication::translate("DialogStudentRegister", "1st year", nullptr));
        two->setText(QCoreApplication::translate("DialogStudentRegister", "2nd year", nullptr));
        three->setText(QCoreApplication::translate("DialogStudentRegister", "3rd year", nullptr));
        four->setText(QCoreApplication::translate("DialogStudentRegister", "4th year", nullptr));
        five->setText(QCoreApplication::translate("DialogStudentRegister", "5th year", nullptr));
        label->setText(QCoreApplication::translate("DialogStudentRegister", "level", nullptr));
        pushButton_rregister->setText(QCoreApplication::translate("DialogStudentRegister", "Register", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("DialogStudentRegister", "Clear", nullptr));
        Fname->setText(QCoreApplication::translate("DialogStudentRegister", "First Name", nullptr));
        Lname->setText(QCoreApplication::translate("DialogStudentRegister", "Last Name", nullptr));
        year->setText(QCoreApplication::translate("DialogStudentRegister", "Year of Birth", nullptr));
        month->setText(QCoreApplication::translate("DialogStudentRegister", "Month of Birth", nullptr));
        day->setText(QCoreApplication::translate("DialogStudentRegister", "Day of Birth", nullptr));
        number->setText(QCoreApplication::translate("DialogStudentRegister", "number", nullptr));
        psswd->setText(QCoreApplication::translate("DialogStudentRegister", "password", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogStudentRegister: public Ui_DialogStudentRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSTUDENTREGISTER_H
