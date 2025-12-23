/********************************************************************************
** Form generated from reading UI file 'dialogadmin.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADMIN_H
#define UI_DIALOGADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAdmin
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *reg_student;
    QPushButton *reg_teacher;
    QPushButton *reg_module;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *rmv_student;
    QPushButton *rmv_teacher;
    QPushButton *rmv_module;
    QLabel *label_2;

    void setupUi(QDialog *DialogAdmin)
    {
        if (DialogAdmin->objectName().isEmpty())
            DialogAdmin->setObjectName("DialogAdmin");
        DialogAdmin->resize(815, 564);
        label = new QLabel(DialogAdmin);
        label->setObjectName("label");
        label->setGeometry(QRect(300, 60, 91, 21));
        layoutWidget = new QWidget(DialogAdmin);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(110, 90, 541, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        reg_student = new QPushButton(layoutWidget);
        reg_student->setObjectName("reg_student");

        horizontalLayout->addWidget(reg_student);

        reg_teacher = new QPushButton(layoutWidget);
        reg_teacher->setObjectName("reg_teacher");

        horizontalLayout->addWidget(reg_teacher);

        reg_module = new QPushButton(layoutWidget);
        reg_module->setObjectName("reg_module");

        horizontalLayout->addWidget(reg_module);

        layoutWidget_2 = new QWidget(DialogAdmin);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(110, 250, 551, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        rmv_student = new QPushButton(layoutWidget_2);
        rmv_student->setObjectName("rmv_student");

        horizontalLayout_2->addWidget(rmv_student);

        rmv_teacher = new QPushButton(layoutWidget_2);
        rmv_teacher->setObjectName("rmv_teacher");

        horizontalLayout_2->addWidget(rmv_teacher);

        rmv_module = new QPushButton(layoutWidget_2);
        rmv_module->setObjectName("rmv_module");

        horizontalLayout_2->addWidget(rmv_module);

        label_2 = new QLabel(DialogAdmin);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(300, 210, 121, 41));

        retranslateUi(DialogAdmin);

        QMetaObject::connectSlotsByName(DialogAdmin);
    } // setupUi

    void retranslateUi(QDialog *DialogAdmin)
    {
        DialogAdmin->setWindowTitle(QCoreApplication::translate("DialogAdmin", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogAdmin", "ADD:", nullptr));
        reg_student->setText(QCoreApplication::translate("DialogAdmin", "Student", nullptr));
        reg_teacher->setText(QCoreApplication::translate("DialogAdmin", "Teacher", nullptr));
        reg_module->setText(QCoreApplication::translate("DialogAdmin", "Module", nullptr));
        rmv_student->setText(QCoreApplication::translate("DialogAdmin", "Student", nullptr));
        rmv_teacher->setText(QCoreApplication::translate("DialogAdmin", "Teacher", nullptr));
        rmv_module->setText(QCoreApplication::translate("DialogAdmin", "Module", nullptr));
        label_2->setText(QCoreApplication::translate("DialogAdmin", "REMOVE:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAdmin: public Ui_DialogAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADMIN_H
