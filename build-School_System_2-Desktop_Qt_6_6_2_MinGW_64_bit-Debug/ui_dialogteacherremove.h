/********************************************************************************
** Form generated from reading UI file 'dialogteacherremove.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTEACHERREMOVE_H
#define UI_DIALOGTEACHERREMOVE_H

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

class Ui_DialogTeacherRemove
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
    QListWidget *listWidget_2;
    QPushButton *btnLook_2;
    QLabel *label_4;
    QPushButton *btnLook;
    QPushButton *btnReset;
    QListWidget *listWidget;

    void setupUi(QDialog *DialogTeacherRemove)
    {
        if (DialogTeacherRemove->objectName().isEmpty())
            DialogTeacherRemove->setObjectName("DialogTeacherRemove");
        DialogTeacherRemove->resize(652, 526);
        formLayoutWidget = new QWidget(DialogTeacherRemove);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(40, 30, 421, 134));
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

        listWidget_2 = new QListWidget(DialogTeacherRemove);
        listWidget_2->setObjectName("listWidget_2");
        listWidget_2->setGeometry(QRect(170, 200, 341, 171));
        listWidget_2->setSpacing(6);
        btnLook_2 = new QPushButton(DialogTeacherRemove);
        btnLook_2->setObjectName("btnLook_2");
        btnLook_2->setGeometry(QRect(400, 390, 111, 41));
        QFont font;
        font.setBold(true);
        btnLook_2->setFont(font);
        btnLook_2->setCursor(QCursor(Qt::PointingHandCursor));
        label_4 = new QLabel(DialogTeacherRemove);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 170, 141, 20));
        label_4->setFrameShape(QFrame::WinPanel);
        label_4->setFrameShadow(QFrame::Sunken);
        btnLook = new QPushButton(DialogTeacherRemove);
        btnLook->setObjectName("btnLook");
        btnLook->setGeometry(QRect(500, 80, 111, 41));
        btnLook->setFont(font);
        btnLook->setCursor(QCursor(Qt::PointingHandCursor));
        btnReset = new QPushButton(DialogTeacherRemove);
        btnReset->setObjectName("btnReset");
        btnReset->setGeometry(QRect(210, 390, 111, 41));
        btnReset->setFont(font);
        btnReset->setCursor(QCursor(Qt::PointingHandCursor));
        listWidget = new QListWidget(DialogTeacherRemove);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(40, 200, 121, 171));
        listWidget->setTabletTracking(false);
        listWidget->setFrameShape(QFrame::StyledPanel);
        listWidget->setFrameShadow(QFrame::Sunken);
        listWidget->setLineWidth(1);
        listWidget->setMidLineWidth(0);
        listWidget->setSpacing(6);

        retranslateUi(DialogTeacherRemove);

        QMetaObject::connectSlotsByName(DialogTeacherRemove);
    } // setupUi

    void retranslateUi(QDialog *DialogTeacherRemove)
    {
        DialogTeacherRemove->setWindowTitle(QCoreApplication::translate("DialogTeacherRemove", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("DialogTeacherRemove", "First Name", nullptr));
        label_3->setText(QCoreApplication::translate("DialogTeacherRemove", "Teacher ID", nullptr));
        label->setText(QCoreApplication::translate("DialogTeacherRemove", "Last Name", nullptr));
        btnLook_2->setText(QCoreApplication::translate("DialogTeacherRemove", "Delete Account", nullptr));
        label_4->setText(QCoreApplication::translate("DialogTeacherRemove", "Account Details", nullptr));
        btnLook->setText(QCoreApplication::translate("DialogTeacherRemove", "Look", nullptr));
        btnReset->setText(QCoreApplication::translate("DialogTeacherRemove", "Reset", nullptr));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("DialogTeacherRemove", "Full Name", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("DialogTeacherRemove", "ID", nullptr));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("DialogTeacherRemove", "grade", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("DialogTeacherRemove", "Birth Date", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("DialogTeacherRemove", "phone Number", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class DialogTeacherRemove: public Ui_DialogTeacherRemove {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTEACHERREMOVE_H
