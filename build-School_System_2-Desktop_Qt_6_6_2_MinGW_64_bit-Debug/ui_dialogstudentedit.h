/********************************************************************************
** Form generated from reading UI file 'dialogstudentedit.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSTUDENTEDIT_H
#define UI_DIALOGSTUDENTEDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogStudentEdit
{
public:
    QLabel *label_4;
    QPushButton *btnReset;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *lineEdit_Lname;
    QLabel *label_2;
    QLineEdit *lineEdit_Fname;
    QLabel *label_3;
    QLineEdit *lineEdit_ID;
    QLabel *label;
    QPushButton *btnLook;
    QPushButton *btnEdit;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *level_2;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_8;
    QLineEdit *day;
    QLineEdit *Lname;
    QLineEdit *Fname;
    QLineEdit *year;
    QLineEdit *number;
    QLineEdit *month;
    QLineEdit *level;
    QPushButton *btnDefault;
    QLineEdit *lineEdit_9;
    QLineEdit *password;

    void setupUi(QDialog *DialogStudentEdit)
    {
        if (DialogStudentEdit->objectName().isEmpty())
            DialogStudentEdit->setObjectName("DialogStudentEdit");
        DialogStudentEdit->resize(684, 503);
        label_4 = new QLabel(DialogStudentEdit);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 160, 151, 20));
        label_4->setFrameShape(QFrame::WinPanel);
        label_4->setFrameShadow(QFrame::Sunken);
        btnReset = new QPushButton(DialogStudentEdit);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(490, 70, 111, 41));
        QFont font;
        font.setBold(true);
        btnReset->setFont(font);
        btnReset->setCursor(QCursor(Qt::PointingHandCursor));
        formLayoutWidget = new QWidget(DialogStudentEdit);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(20, 20, 421, 134));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_Lname = new QLineEdit(formLayoutWidget);
        lineEdit_Lname->setObjectName("lineEdit_Lname");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_Lname);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_Fname = new QLineEdit(formLayoutWidget);
        lineEdit_Fname->setObjectName("lineEdit_Fname");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_Fname);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_ID = new QLineEdit(formLayoutWidget);
        lineEdit_ID->setObjectName("lineEdit_ID");

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_ID);

        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        btnLook = new QPushButton(DialogStudentEdit);
        btnLook->setObjectName("btnLook");
        btnLook->setGeometry(QRect(490, 20, 111, 41));
        btnLook->setFont(font);
        btnLook->setCursor(QCursor(Qt::PointingHandCursor));
        btnEdit = new QPushButton(DialogStudentEdit);
        btnEdit->setObjectName("btnEdit");
        btnEdit->setGeometry(QRect(490, 390, 111, 41));
        btnEdit->setFont(font);
        btnEdit->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit = new QLineEdit(DialogStudentEdit);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(50, 190, 113, 34));
        lineEdit->setReadOnly(true);
        lineEdit_2 = new QLineEdit(DialogStudentEdit);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(50, 220, 113, 34));
        lineEdit_2->setReadOnly(true);
        level_2 = new QLineEdit(DialogStudentEdit);
        level_2->setObjectName("level_2");
        level_2->setGeometry(QRect(50, 250, 113, 34));
        level_2->setReadOnly(true);
        lineEdit_4 = new QLineEdit(DialogStudentEdit);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(50, 280, 113, 34));
        lineEdit_4->setReadOnly(true);
        lineEdit_5 = new QLineEdit(DialogStudentEdit);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(50, 310, 113, 34));
        lineEdit_5->setReadOnly(true);
        lineEdit_6 = new QLineEdit(DialogStudentEdit);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(50, 340, 113, 31));
        lineEdit_6->setReadOnly(true);
        lineEdit_8 = new QLineEdit(DialogStudentEdit);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(50, 370, 113, 34));
        lineEdit_8->setReadOnly(true);
        day = new QLineEdit(DialogStudentEdit);
        day->setObjectName("day");
        day->setGeometry(QRect(170, 280, 270, 34));
        Lname = new QLineEdit(DialogStudentEdit);
        Lname->setObjectName("Lname");
        Lname->setGeometry(QRect(170, 190, 270, 34));
        Fname = new QLineEdit(DialogStudentEdit);
        Fname->setObjectName("Fname");
        Fname->setGeometry(QRect(170, 220, 270, 34));
        year = new QLineEdit(DialogStudentEdit);
        year->setObjectName("year");
        year->setGeometry(QRect(170, 340, 270, 31));
        number = new QLineEdit(DialogStudentEdit);
        number->setObjectName("number");
        number->setGeometry(QRect(170, 370, 270, 34));
        month = new QLineEdit(DialogStudentEdit);
        month->setObjectName("month");
        month->setGeometry(QRect(170, 310, 270, 34));
        level = new QLineEdit(DialogStudentEdit);
        level->setObjectName("level");
        level->setGeometry(QRect(170, 250, 270, 31));
        btnDefault = new QPushButton(DialogStudentEdit);
        btnDefault->setObjectName("btnDefault");
        btnDefault->setGeometry(QRect(490, 190, 111, 41));
        btnDefault->setFont(font);
        btnDefault->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit_9 = new QLineEdit(DialogStudentEdit);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(50, 400, 113, 34));
        lineEdit_9->setReadOnly(true);
        password = new QLineEdit(DialogStudentEdit);
        password->setObjectName("password");
        password->setGeometry(QRect(170, 400, 270, 34));

        retranslateUi(DialogStudentEdit);

        QMetaObject::connectSlotsByName(DialogStudentEdit);
    } // setupUi

    void retranslateUi(QDialog *DialogStudentEdit)
    {
        DialogStudentEdit->setWindowTitle(QCoreApplication::translate("DialogStudentEdit", "Dialog", nullptr));
        label_4->setText(QCoreApplication::translate("DialogStudentEdit", "Account Details", nullptr));
        btnReset->setText(QCoreApplication::translate("DialogStudentEdit", "Reset", nullptr));
        label_2->setText(QCoreApplication::translate("DialogStudentEdit", "First Name", nullptr));
        label_3->setText(QCoreApplication::translate("DialogStudentEdit", "Student ID", nullptr));
        label->setText(QCoreApplication::translate("DialogStudentEdit", "Last Name", nullptr));
        btnLook->setText(QCoreApplication::translate("DialogStudentEdit", "Look", nullptr));
        btnEdit->setText(QCoreApplication::translate("DialogStudentEdit", "Edit Account", nullptr));
        lineEdit->setText(QCoreApplication::translate("DialogStudentEdit", "Last Name", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("DialogStudentEdit", "First Name", nullptr));
        level_2->setText(QCoreApplication::translate("DialogStudentEdit", "Level", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("DialogStudentEdit", "Day of Birth", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("DialogStudentEdit", "Month of Birth", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("DialogStudentEdit", "Year of Birth", nullptr));
        lineEdit_8->setText(QCoreApplication::translate("DialogStudentEdit", "number", nullptr));
        day->setText(QString());
        Lname->setText(QString());
        Fname->setText(QString());
        year->setText(QString());
        number->setText(QString());
        month->setText(QString());
        level->setText(QString());
        btnDefault->setText(QCoreApplication::translate("DialogStudentEdit", "Back to Default", nullptr));
        lineEdit_9->setText(QCoreApplication::translate("DialogStudentEdit", "password", nullptr));
        password->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogStudentEdit: public Ui_DialogStudentEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSTUDENTEDIT_H
