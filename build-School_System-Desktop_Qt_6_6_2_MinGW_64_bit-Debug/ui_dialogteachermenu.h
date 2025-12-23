/********************************************************************************
** Form generated from reading UI file 'dialogteachermenu.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGTEACHERMENU_H
#define UI_DIALOGTEACHERMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_DialogTeacherMenu
{
public:
    QLabel *label;

    void setupUi(QDialog *DialogTeacherMenu)
    {
        if (DialogTeacherMenu->objectName().isEmpty())
            DialogTeacherMenu->setObjectName("DialogTeacherMenu");
        DialogTeacherMenu->resize(400, 300);
        label = new QLabel(DialogTeacherMenu);
        label->setObjectName("label");
        label->setGeometry(QRect(140, 100, 211, 51));

        retranslateUi(DialogTeacherMenu);

        QMetaObject::connectSlotsByName(DialogTeacherMenu);
    } // setupUi

    void retranslateUi(QDialog *DialogTeacherMenu)
    {
        DialogTeacherMenu->setWindowTitle(QCoreApplication::translate("DialogTeacherMenu", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogTeacherMenu", "hello teacher", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogTeacherMenu: public Ui_DialogTeacherMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTEACHERMENU_H
