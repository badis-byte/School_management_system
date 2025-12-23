/********************************************************************************
** Form generated from reading UI file 'dialoglogin.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLOGIN_H
#define UI_DIALOGLOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogLogin
{
public:
    QPushButton *login;
    QLabel *label_3;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label_user;
    QLabel *label_pass;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *username;
    QLineEdit *password;
    QFrame *frame;
    QRadioButton *radiostudent;
    QRadioButton *radioteacher;

    void setupUi(QDialog *DialogLogin)
    {
        if (DialogLogin->objectName().isEmpty())
            DialogLogin->setObjectName("DialogLogin");
        DialogLogin->resize(580, 395);
        login = new QPushButton(DialogLogin);
        login->setObjectName("login");
        login->setGeometry(QRect(390, 260, 83, 29));
        label_3 = new QLabel(DialogLogin);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(80, 40, 251, 21));
        label_3->setScaledContents(false);
        layoutWidget = new QWidget(DialogLogin);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(70, 90, 431, 125));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_user = new QLabel(layoutWidget);
        label_user->setObjectName("label_user");

        verticalLayout->addWidget(label_user);

        label_pass = new QLabel(layoutWidget);
        label_pass->setObjectName("label_pass");

        verticalLayout->addWidget(label_pass);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        username = new QLineEdit(layoutWidget);
        username->setObjectName("username");

        verticalLayout_2->addWidget(username);

        password = new QLineEdit(layoutWidget);
        password->setObjectName("password");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(password->sizePolicy().hasHeightForWidth());
        password->setSizePolicy(sizePolicy);
        password->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(password);


        horizontalLayout_2->addLayout(verticalLayout_2);

        frame = new QFrame(DialogLogin);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(70, 230, 271, 91));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        radiostudent = new QRadioButton(frame);
        radiostudent->setObjectName("radiostudent");
        radiostudent->setGeometry(QRect(30, 30, 112, 26));
        radiostudent->setAutoFillBackground(false);
        radiostudent->setChecked(true);
        radioteacher = new QRadioButton(frame);
        radioteacher->setObjectName("radioteacher");
        radioteacher->setGeometry(QRect(150, 30, 112, 26));

        retranslateUi(DialogLogin);

        QMetaObject::connectSlotsByName(DialogLogin);
    } // setupUi

    void retranslateUi(QDialog *DialogLogin)
    {
        DialogLogin->setWindowTitle(QCoreApplication::translate("DialogLogin", "Dialog", nullptr));
        login->setText(QCoreApplication::translate("DialogLogin", "LOGIN", nullptr));
        label_3->setText(QCoreApplication::translate("DialogLogin", "Please provide the following: ", nullptr));
        label_user->setText(QCoreApplication::translate("DialogLogin", "username :", nullptr));
        label_pass->setText(QCoreApplication::translate("DialogLogin", "password :", nullptr));
        username->setText(QString());
        radiostudent->setText(QCoreApplication::translate("DialogLogin", "student", nullptr));
        radioteacher->setText(QCoreApplication::translate("DialogLogin", "teacher", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogLogin: public Ui_DialogLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H
