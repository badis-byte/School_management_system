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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogStudentRegister
{
public:
    QPushButton *pushButton_rregister;
    QPushButton *pushButton_clear;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *psswd;
    QLineEdit *lineEditPsswd;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_6;
    QLineEdit *lineEditNumber;
    QHBoxLayout *horizontalLayout_5;
    QLineEdit *lineEditYear;
    QLabel *month;
    QLineEdit *lineEditMonth;
    QLabel *day;
    QLineEdit *lineEditDay;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *one;
    QRadioButton *two;
    QRadioButton *three;
    QRadioButton *four;
    QRadioButton *five;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditFname;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEditLname;
    QLabel *Fname;
    QLabel *Lname;
    QLabel *number;
    QLabel *year;
    QLabel *label;

    void setupUi(QDialog *DialogStudentRegister)
    {
        if (DialogStudentRegister->objectName().isEmpty())
            DialogStudentRegister->setObjectName("DialogStudentRegister");
        DialogStudentRegister->resize(837, 493);
        pushButton_rregister = new QPushButton(DialogStudentRegister);
        pushButton_rregister->setObjectName("pushButton_rregister");
        pushButton_rregister->setGeometry(QRect(710, 400, 91, 41));
        pushButton_clear = new QPushButton(DialogStudentRegister);
        pushButton_clear->setObjectName("pushButton_clear");
        pushButton_clear->setGeometry(QRect(560, 400, 91, 41));
        layoutWidget = new QWidget(DialogStudentRegister);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(140, 350, 661, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        psswd = new QLabel(layoutWidget);
        psswd->setObjectName("psswd");

        horizontalLayout->addWidget(psswd);

        lineEditPsswd = new QLineEdit(layoutWidget);
        lineEditPsswd->setObjectName("lineEditPsswd");
        lineEditPsswd->setEchoMode(QLineEdit::Password);

        horizontalLayout->addWidget(lineEditPsswd);

        widget = new QWidget(DialogStudentRegister);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(50, 10, 751, 219));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        lineEditNumber = new QLineEdit(widget);
        lineEditNumber->setObjectName("lineEditNumber");

        horizontalLayout_6->addWidget(lineEditNumber);


        gridLayout->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lineEditYear = new QLineEdit(widget);
        lineEditYear->setObjectName("lineEditYear");

        horizontalLayout_5->addWidget(lineEditYear);

        month = new QLabel(widget);
        month->setObjectName("month");

        horizontalLayout_5->addWidget(month);

        lineEditMonth = new QLineEdit(widget);
        lineEditMonth->setObjectName("lineEditMonth");

        horizontalLayout_5->addWidget(lineEditMonth);

        day = new QLabel(widget);
        day->setObjectName("day");

        horizontalLayout_5->addWidget(day);

        lineEditDay = new QLineEdit(widget);
        lineEditDay->setObjectName("lineEditDay");

        horizontalLayout_5->addWidget(lineEditDay);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_2->setContentsMargins(0, 0, -1, -1);
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


        gridLayout->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lineEditFname = new QLineEdit(widget);
        lineEditFname->setObjectName("lineEditFname");

        horizontalLayout_3->addWidget(lineEditFname);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lineEditLname = new QLineEdit(widget);
        lineEditLname->setObjectName("lineEditLname");

        horizontalLayout_4->addWidget(lineEditLname);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 5, 1);

        Fname = new QLabel(widget);
        Fname->setObjectName("Fname");

        gridLayout_2->addWidget(Fname, 1, 0, 1, 1);

        Lname = new QLabel(widget);
        Lname->setObjectName("Lname");

        gridLayout_2->addWidget(Lname, 0, 0, 1, 1);

        number = new QLabel(widget);
        number->setObjectName("number");

        gridLayout_2->addWidget(number, 3, 0, 1, 1);

        year = new QLabel(widget);
        year->setObjectName("year");

        gridLayout_2->addWidget(year, 2, 0, 1, 1);

        label = new QLabel(widget);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 4, 0, 1, 1);


        retranslateUi(DialogStudentRegister);

        QMetaObject::connectSlotsByName(DialogStudentRegister);
    } // setupUi

    void retranslateUi(QDialog *DialogStudentRegister)
    {
        DialogStudentRegister->setWindowTitle(QCoreApplication::translate("DialogStudentRegister", "Dialog", nullptr));
        pushButton_rregister->setText(QCoreApplication::translate("DialogStudentRegister", "Register", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("DialogStudentRegister", "Clear", nullptr));
        psswd->setText(QCoreApplication::translate("DialogStudentRegister", "password", nullptr));
        month->setText(QCoreApplication::translate("DialogStudentRegister", "Month of Birth", nullptr));
        day->setText(QCoreApplication::translate("DialogStudentRegister", "Day of Birth", nullptr));
        one->setText(QCoreApplication::translate("DialogStudentRegister", "1st year", nullptr));
        two->setText(QCoreApplication::translate("DialogStudentRegister", "2nd year", nullptr));
        three->setText(QCoreApplication::translate("DialogStudentRegister", "3rd year", nullptr));
        four->setText(QCoreApplication::translate("DialogStudentRegister", "4th year", nullptr));
        five->setText(QCoreApplication::translate("DialogStudentRegister", "5th year", nullptr));
        Fname->setText(QCoreApplication::translate("DialogStudentRegister", "First Name", nullptr));
        Lname->setText(QCoreApplication::translate("DialogStudentRegister", "Last Name", nullptr));
        number->setText(QCoreApplication::translate("DialogStudentRegister", "number", nullptr));
        year->setText(QCoreApplication::translate("DialogStudentRegister", "Year of Birth", nullptr));
        label->setText(QCoreApplication::translate("DialogStudentRegister", "level", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogStudentRegister: public Ui_DialogStudentRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSTUDENTREGISTER_H
