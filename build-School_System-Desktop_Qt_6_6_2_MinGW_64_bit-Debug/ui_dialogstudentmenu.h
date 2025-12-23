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
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DialogStudentMenu
{
public:
    QLabel *label;

    void setupUi(QDialog *DialogStudentMenu)
    {
        if (DialogStudentMenu->objectName().isEmpty())
            DialogStudentMenu->setObjectName("DialogStudentMenu");
        DialogStudentMenu->resize(400, 300);
        label = new QLabel(DialogStudentMenu);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 100, 181, 41));

        retranslateUi(DialogStudentMenu);

        QMetaObject::connectSlotsByName(DialogStudentMenu);
    } // setupUi

    void retranslateUi(QDialog *DialogStudentMenu)
    {
        DialogStudentMenu->setWindowTitle(QCoreApplication::translate("DialogStudentMenu", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogStudentMenu", "hello student", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogStudentMenu: public Ui_DialogStudentMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSTUDENTMENU_H
