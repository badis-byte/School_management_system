/********************************************************************************
** Form generated from reading UI file 'dialogteacherregister.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTEACHERREGISTER_H
#define UI_DIALOGTEACHERREGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogTeacherRegister
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *psswd;
    QLineEdit *lineEditPsswd;
    QWidget *layoutWidget_2;
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
    QSpacerItem *horizontalSpacer;
    QRadioButton *one;
    QRadioButton *two;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *lineEditFname;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *lineEditLname;
    QLabel *Fname;
    QLabel *Lname;
    QLabel *number;
    QLabel *year;
    QLabel *label;
    QPushButton *pushButton_rregister;
    QPushButton *pushButton_clear;

    void setupUi(QDialog *DialogTeacherRegister)
    {
        if (DialogTeacherRegister->objectName().isEmpty())
            DialogTeacherRegister->setObjectName("DialogTeacherRegister");
        DialogTeacherRegister->resize(812, 460);
        layoutWidget = new QWidget(DialogTeacherRegister);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(110, 350, 661, 30));
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

        layoutWidget_2 = new QWidget(DialogTeacherRegister);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(20, 10, 751, 219));
        gridLayout_2 = new QGridLayout(layoutWidget_2);
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        lineEditNumber = new QLineEdit(layoutWidget_2);
        lineEditNumber->setObjectName("lineEditNumber");

        horizontalLayout_6->addWidget(lineEditNumber);


        gridLayout->addLayout(horizontalLayout_6, 3, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        lineEditYear = new QLineEdit(layoutWidget_2);
        lineEditYear->setObjectName("lineEditYear");

        horizontalLayout_5->addWidget(lineEditYear);

        month = new QLabel(layoutWidget_2);
        month->setObjectName("month");

        horizontalLayout_5->addWidget(month);

        lineEditMonth = new QLineEdit(layoutWidget_2);
        lineEditMonth->setObjectName("lineEditMonth");

        horizontalLayout_5->addWidget(lineEditMonth);

        day = new QLabel(layoutWidget_2);
        day->setObjectName("day");

        horizontalLayout_5->addWidget(day);

        lineEditDay = new QLineEdit(layoutWidget_2);
        lineEditDay->setObjectName("lineEditDay");

        horizontalLayout_5->addWidget(lineEditDay);


        gridLayout->addLayout(horizontalLayout_5, 2, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setSizeConstraint(QLayout::SetMinimumSize);
        horizontalLayout_2->setContentsMargins(0, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(150, 32, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        one = new QRadioButton(layoutWidget_2);
        one->setObjectName("one");
        one->setChecked(true);

        horizontalLayout_2->addWidget(one);

        two = new QRadioButton(layoutWidget_2);
        two->setObjectName("two");

        horizontalLayout_2->addWidget(two);

        horizontalSpacer_2 = new QSpacerItem(108, 32, QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        lineEditFname = new QLineEdit(layoutWidget_2);
        lineEditFname->setObjectName("lineEditFname");

        horizontalLayout_3->addWidget(lineEditFname);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        lineEditLname = new QLineEdit(layoutWidget_2);
        lineEditLname->setObjectName("lineEditLname");

        horizontalLayout_4->addWidget(lineEditLname);


        gridLayout->addLayout(horizontalLayout_4, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 1, 5, 1);

        Fname = new QLabel(layoutWidget_2);
        Fname->setObjectName("Fname");

        gridLayout_2->addWidget(Fname, 1, 0, 1, 1);

        Lname = new QLabel(layoutWidget_2);
        Lname->setObjectName("Lname");

        gridLayout_2->addWidget(Lname, 0, 0, 1, 1);

        number = new QLabel(layoutWidget_2);
        number->setObjectName("number");

        gridLayout_2->addWidget(number, 3, 0, 1, 1);

        year = new QLabel(layoutWidget_2);
        year->setObjectName("year");

        gridLayout_2->addWidget(year, 2, 0, 1, 1);

        label = new QLabel(layoutWidget_2);
        label->setObjectName("label");

        gridLayout_2->addWidget(label, 4, 0, 1, 1);

        pushButton_rregister = new QPushButton(DialogTeacherRegister);
        pushButton_rregister->setObjectName("pushButton_rregister");
        pushButton_rregister->setGeometry(QRect(680, 400, 91, 41));
        pushButton_clear = new QPushButton(DialogTeacherRegister);
        pushButton_clear->setObjectName("pushButton_clear");
        pushButton_clear->setGeometry(QRect(530, 400, 91, 41));

        retranslateUi(DialogTeacherRegister);

        QMetaObject::connectSlotsByName(DialogTeacherRegister);
    } // setupUi

    void retranslateUi(QDialog *DialogTeacherRegister)
    {
        DialogTeacherRegister->setWindowTitle(QCoreApplication::translate("DialogTeacherRegister", "Dialog", nullptr));
        psswd->setText(QCoreApplication::translate("DialogTeacherRegister", "password", nullptr));
        month->setText(QCoreApplication::translate("DialogTeacherRegister", "Month of Birth", nullptr));
        day->setText(QCoreApplication::translate("DialogTeacherRegister", "Day of Birth", nullptr));
        one->setText(QCoreApplication::translate("DialogTeacherRegister", "Professor", nullptr));
        two->setText(QCoreApplication::translate("DialogTeacherRegister", "Doctor", nullptr));
        Fname->setText(QCoreApplication::translate("DialogTeacherRegister", "First Name", nullptr));
        Lname->setText(QCoreApplication::translate("DialogTeacherRegister", "Last Name", nullptr));
        number->setText(QCoreApplication::translate("DialogTeacherRegister", "number", nullptr));
        year->setText(QCoreApplication::translate("DialogTeacherRegister", "Year of Birth", nullptr));
        label->setText(QCoreApplication::translate("DialogTeacherRegister", "grade", nullptr));
        pushButton_rregister->setText(QCoreApplication::translate("DialogTeacherRegister", "Register", nullptr));
        pushButton_clear->setText(QCoreApplication::translate("DialogTeacherRegister", "Clear", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogTeacherRegister: public Ui_DialogTeacherRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTEACHERREGISTER_H
