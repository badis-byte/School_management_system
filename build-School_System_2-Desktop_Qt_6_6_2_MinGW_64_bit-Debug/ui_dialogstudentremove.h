/********************************************************************************
** Form generated from reading UI file 'dialogstudentremove.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSTUDENTREMOVE_H
#define UI_DIALOGSTUDENTREMOVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogStudentRemove
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *lineEdit_Lname;
    QLabel *label_2;
    QLineEdit *lineEdit_Fname;
    QLabel *label_3;
    QLineEdit *lineEdit_ID;
    QLabel *label;
    QPushButton *btnLook;
    QListWidget *listWidget;
    QPushButton *btnLook_2;
    QLabel *label_4;
    QListWidget *listWidget_2;
    QPushButton *btnReset;

    void setupUi(QDialog *DialogStudentRemove)
    {
        if (DialogStudentRemove->objectName().isEmpty())
            DialogStudentRemove->setObjectName("DialogStudentRemove");
        DialogStudentRemove->resize(659, 591);
        formLayoutWidget = new QWidget(DialogStudentRemove);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(50, 60, 421, 134));
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

        btnLook = new QPushButton(DialogStudentRemove);
        btnLook->setObjectName("btnLook");
        btnLook->setGeometry(QRect(510, 110, 111, 41));
        QFont font;
        font.setBold(true);
        btnLook->setFont(font);
        btnLook->setCursor(QCursor(Qt::PointingHandCursor));
        listWidget = new QListWidget(DialogStudentRemove);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(50, 230, 121, 171));
        listWidget->setTabletTracking(false);
        listWidget->setFrameShape(QFrame::StyledPanel);
        listWidget->setFrameShadow(QFrame::Sunken);
        listWidget->setLineWidth(1);
        listWidget->setMidLineWidth(0);
        listWidget->setSpacing(6);
        btnLook_2 = new QPushButton(DialogStudentRemove);
        btnLook_2->setObjectName("btnLook_2");
        btnLook_2->setGeometry(QRect(410, 420, 111, 41));
        btnLook_2->setFont(font);
        btnLook_2->setCursor(QCursor(Qt::PointingHandCursor));
        label_4 = new QLabel(DialogStudentRemove);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(50, 200, 141, 20));
        label_4->setFrameShape(QFrame::WinPanel);
        label_4->setFrameShadow(QFrame::Sunken);
        listWidget_2 = new QListWidget(DialogStudentRemove);
        listWidget_2->setObjectName("listWidget_2");
        listWidget_2->setGeometry(QRect(180, 230, 341, 171));
        listWidget_2->setSpacing(6);
        btnReset = new QPushButton(DialogStudentRemove);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(220, 420, 111, 41));
        btnReset->setFont(font);
        btnReset->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(DialogStudentRemove);

        QMetaObject::connectSlotsByName(DialogStudentRemove);
    } // setupUi

    void retranslateUi(QDialog *DialogStudentRemove)
    {
        DialogStudentRemove->setWindowTitle(QCoreApplication::translate("DialogStudentRemove", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("DialogStudentRemove", "First Name", nullptr));
        label_3->setText(QCoreApplication::translate("DialogStudentRemove", "Student ID", nullptr));
        label->setText(QCoreApplication::translate("DialogStudentRemove", "Last Name", nullptr));
        btnLook->setText(QCoreApplication::translate("DialogStudentRemove", "Look", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("DialogStudentRemove", "Full Name", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("DialogStudentRemove", "ID", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("DialogStudentRemove", "Level", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("DialogStudentRemove", "Birth Date", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("DialogStudentRemove", "phone Number", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        btnLook_2->setText(QCoreApplication::translate("DialogStudentRemove", "Delete Account", nullptr));
        label_4->setText(QCoreApplication::translate("DialogStudentRemove", "Account Details", nullptr));
        btnReset->setText(QCoreApplication::translate("DialogStudentRemove", "Reset", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogStudentRemove: public Ui_DialogStudentRemove {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSTUDENTREMOVE_H
