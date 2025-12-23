/********************************************************************************
** Form generated from reading UI file 'dialogteacheredit.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTEACHEREDIT_H
#define UI_DIALOGTEACHEREDIT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogTeacherEdit
{
public:
    QPushButton *btnEdit;
    QPushButton *btnLook;
    QLineEdit *Fname;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QLineEdit *month;
    QLineEdit *day;
    QPushButton *btnReset;
    QLineEdit *lineEdit_2;
    QLineEdit *year;
    QLineEdit *number;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *lineEdit_Lname;
    QLabel *label_2;
    QLineEdit *lineEdit_Fname;
    QLabel *label_3;
    QLineEdit *lineEdit_ID;
    QLabel *label;
    QLineEdit *lineEdit_9;
    QLineEdit *password;
    QLineEdit *lineEdit_8;
    QPushButton *btnDefault;
    QLineEdit *lineEdit_6;
    QLineEdit *level_2;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit;
    QLineEdit *Lname;
    QLineEdit *level;

    void setupUi(QDialog *DialogTeacherEdit)
    {
        if (DialogTeacherEdit->objectName().isEmpty())
            DialogTeacherEdit->setObjectName("DialogTeacherEdit");
        DialogTeacherEdit->resize(664, 493);
        btnEdit = new QPushButton(DialogTeacherEdit);
        btnEdit->setObjectName("btnEdit");
        btnEdit->setGeometry(QRect(490, 390, 111, 41));
        QFont font;
        font.setBold(true);
        btnEdit->setFont(font);
        btnEdit->setCursor(QCursor(Qt::PointingHandCursor));
        btnLook = new QPushButton(DialogTeacherEdit);
        btnLook->setObjectName("btnLook");
        btnLook->setGeometry(QRect(490, 20, 111, 41));
        btnLook->setFont(font);
        btnLook->setCursor(QCursor(Qt::PointingHandCursor));
        Fname = new QLineEdit(DialogTeacherEdit);
        Fname->setObjectName("Fname");
        Fname->setGeometry(QRect(170, 220, 270, 34));
        label_4 = new QLabel(DialogTeacherEdit);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 160, 151, 20));
        label_4->setFrameShape(QFrame::WinPanel);
        label_4->setFrameShadow(QFrame::Sunken);
        lineEdit_4 = new QLineEdit(DialogTeacherEdit);
        lineEdit_4->setObjectName("lineEdit_4");
        lineEdit_4->setGeometry(QRect(50, 280, 113, 34));
        lineEdit_4->setReadOnly(true);
        month = new QLineEdit(DialogTeacherEdit);
        month->setObjectName("month");
        month->setGeometry(QRect(170, 310, 270, 34));
        day = new QLineEdit(DialogTeacherEdit);
        day->setObjectName("day");
        day->setGeometry(QRect(170, 280, 270, 34));
        btnReset = new QPushButton(DialogTeacherEdit);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(490, 70, 111, 41));
        btnReset->setFont(font);
        btnReset->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit_2 = new QLineEdit(DialogTeacherEdit);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(50, 220, 113, 34));
        lineEdit_2->setReadOnly(true);
        year = new QLineEdit(DialogTeacherEdit);
        year->setObjectName("year");
        year->setGeometry(QRect(170, 340, 270, 31));
        number = new QLineEdit(DialogTeacherEdit);
        number->setObjectName("number");
        number->setGeometry(QRect(170, 370, 270, 34));
        formLayoutWidget = new QWidget(DialogTeacherEdit);
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

        lineEdit_9 = new QLineEdit(DialogTeacherEdit);
        lineEdit_9->setObjectName("lineEdit_9");
        lineEdit_9->setGeometry(QRect(50, 400, 113, 34));
        lineEdit_9->setReadOnly(true);
        password = new QLineEdit(DialogTeacherEdit);
        password->setObjectName("password");
        password->setGeometry(QRect(170, 400, 270, 34));
        lineEdit_8 = new QLineEdit(DialogTeacherEdit);
        lineEdit_8->setObjectName("lineEdit_8");
        lineEdit_8->setGeometry(QRect(50, 370, 113, 34));
        lineEdit_8->setReadOnly(true);
        btnDefault = new QPushButton(DialogTeacherEdit);
        btnDefault->setObjectName("btnDefault");
        btnDefault->setGeometry(QRect(490, 190, 111, 41));
        btnDefault->setFont(font);
        btnDefault->setCursor(QCursor(Qt::PointingHandCursor));
        lineEdit_6 = new QLineEdit(DialogTeacherEdit);
        lineEdit_6->setObjectName("lineEdit_6");
        lineEdit_6->setGeometry(QRect(50, 340, 113, 31));
        lineEdit_6->setReadOnly(true);
        level_2 = new QLineEdit(DialogTeacherEdit);
        level_2->setObjectName("level_2");
        level_2->setGeometry(QRect(50, 250, 113, 34));
        level_2->setReadOnly(true);
        lineEdit_5 = new QLineEdit(DialogTeacherEdit);
        lineEdit_5->setObjectName("lineEdit_5");
        lineEdit_5->setGeometry(QRect(50, 310, 113, 34));
        lineEdit_5->setReadOnly(true);
        lineEdit = new QLineEdit(DialogTeacherEdit);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(50, 190, 113, 34));
        lineEdit->setReadOnly(true);
        Lname = new QLineEdit(DialogTeacherEdit);
        Lname->setObjectName("Lname");
        Lname->setGeometry(QRect(170, 190, 270, 34));
        level = new QLineEdit(DialogTeacherEdit);
        level->setObjectName("level");
        level->setGeometry(QRect(170, 250, 270, 31));

        retranslateUi(DialogTeacherEdit);

        QMetaObject::connectSlotsByName(DialogTeacherEdit);
    } // setupUi

    void retranslateUi(QDialog *DialogTeacherEdit)
    {
        DialogTeacherEdit->setWindowTitle(QCoreApplication::translate("DialogTeacherEdit", "Dialog", nullptr));
        btnEdit->setText(QCoreApplication::translate("DialogTeacherEdit", "Edit Account", nullptr));
        btnLook->setText(QCoreApplication::translate("DialogTeacherEdit", "Look", nullptr));
        Fname->setText(QString());
        label_4->setText(QCoreApplication::translate("DialogTeacherEdit", "Account Details", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("DialogTeacherEdit", "Day of Birth", nullptr));
        month->setText(QString());
        day->setText(QString());
        btnReset->setText(QCoreApplication::translate("DialogTeacherEdit", "Reset", nullptr));
        lineEdit_2->setText(QCoreApplication::translate("DialogTeacherEdit", "First Name", nullptr));
        year->setText(QString());
        number->setText(QString());
        label_2->setText(QCoreApplication::translate("DialogTeacherEdit", "First Name", nullptr));
        label_3->setText(QCoreApplication::translate("DialogTeacherEdit", "Teacher ID", nullptr));
        label->setText(QCoreApplication::translate("DialogTeacherEdit", "Last Name", nullptr));
        lineEdit_9->setText(QCoreApplication::translate("DialogTeacherEdit", "password", nullptr));
        password->setText(QString());
        lineEdit_8->setText(QCoreApplication::translate("DialogTeacherEdit", "number", nullptr));
        btnDefault->setText(QCoreApplication::translate("DialogTeacherEdit", "Back to Default", nullptr));
        lineEdit_6->setText(QCoreApplication::translate("DialogTeacherEdit", "Year of Birth", nullptr));
        level_2->setText(QCoreApplication::translate("DialogTeacherEdit", "Level", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("DialogTeacherEdit", "Month of Birth", nullptr));
        lineEdit->setText(QCoreApplication::translate("DialogTeacherEdit", "Last Name", nullptr));
        Lname->setText(QString());
        level->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogTeacherEdit: public Ui_DialogTeacherEdit {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTEACHEREDIT_H
