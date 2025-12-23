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

QT_BEGIN_NAMESPACE

class Ui_DialogTeacherRegister
{
public:

    void setupUi(QDialog *DialogTeacherRegister)
    {
        if (DialogTeacherRegister->objectName().isEmpty())
            DialogTeacherRegister->setObjectName("DialogTeacherRegister");
        DialogTeacherRegister->resize(400, 300);

        retranslateUi(DialogTeacherRegister);

        QMetaObject::connectSlotsByName(DialogTeacherRegister);
    } // setupUi

    void retranslateUi(QDialog *DialogTeacherRegister)
    {
        DialogTeacherRegister->setWindowTitle(QCoreApplication::translate("DialogTeacherRegister", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogTeacherRegister: public Ui_DialogTeacherRegister {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGTEACHERREGISTER_H
