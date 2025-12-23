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
    QLabel *label_Lname;
    QLabel *label_Fname;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *Lname;
    QLineEdit *Fname;
    QFrame *frame;
    QRadioButton *radiostudent;
    QRadioButton *radioteacher;
    QLineEdit *ID;
    QLabel *label_pass;
    QLineEdit *password;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLineEdit *textID;
    QLabel *label_pass_2;

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
        layoutWidget->setGeometry(QRect(30, 70, 431, 91));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        label_Lname = new QLabel(layoutWidget);
        label_Lname->setObjectName("label_Lname");

        verticalLayout->addWidget(label_Lname);

        label_Fname = new QLabel(layoutWidget);
        label_Fname->setObjectName("label_Fname");

        verticalLayout->addWidget(label_Fname);


        horizontalLayout->addLayout(verticalLayout);


        horizontalLayout_2->addLayout(horizontalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        Lname = new QLineEdit(layoutWidget);
        Lname->setObjectName("Lname");

        verticalLayout_2->addWidget(Lname);

        Fname = new QLineEdit(layoutWidget);
        Fname->setObjectName("Fname");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Fname->sizePolicy().hasHeightForWidth());
        Fname->setSizePolicy(sizePolicy);
        Fname->setEchoMode(QLineEdit::Normal);

        verticalLayout_2->addWidget(Fname);


        horizontalLayout_2->addLayout(verticalLayout_2);

        frame = new QFrame(DialogLogin);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(30, 160, 171, 31));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        radiostudent = new QRadioButton(frame);
        radiostudent->setObjectName("radiostudent");
        radiostudent->setGeometry(QRect(0, 0, 81, 26));
        radiostudent->setAutoFillBackground(false);
        radiostudent->setChecked(true);
        radioteacher = new QRadioButton(frame);
        radioteacher->setObjectName("radioteacher");
        radioteacher->setGeometry(QRect(90, 0, 81, 26));
        ID = new QLineEdit(DialogLogin);
        ID->setObjectName("ID");
        ID->setGeometry(QRect(130, 190, 331, 28));
        sizePolicy.setHeightForWidth(ID->sizePolicy().hasHeightForWidth());
        ID->setSizePolicy(sizePolicy);
        ID->setEchoMode(QLineEdit::Password);
        label_pass = new QLabel(DialogLogin);
        label_pass->setObjectName("label_pass");
        label_pass->setGeometry(QRect(40, 250, 70, 35));
        password = new QLineEdit(DialogLogin);
        password->setObjectName("password");
        password->setGeometry(QRect(120, 260, 261, 28));
        sizePolicy.setHeightForWidth(password->sizePolicy().hasHeightForWidth());
        password->setSizePolicy(sizePolicy);
        password->setEchoMode(QLineEdit::Password);
        widget = new QWidget(DialogLogin);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 190, 91, 30));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        textID = new QLineEdit(widget);
        textID->setObjectName("textID");
        sizePolicy.setHeightForWidth(textID->sizePolicy().hasHeightForWidth());
        textID->setSizePolicy(sizePolicy);
        textID->setEchoMode(QLineEdit::Normal);
        textID->setReadOnly(true);

        horizontalLayout_3->addWidget(textID);

        label_pass_2 = new QLabel(widget);
        label_pass_2->setObjectName("label_pass_2");

        horizontalLayout_3->addWidget(label_pass_2);


        retranslateUi(DialogLogin);

        QMetaObject::connectSlotsByName(DialogLogin);
    } // setupUi

    void retranslateUi(QDialog *DialogLogin)
    {
        DialogLogin->setWindowTitle(QCoreApplication::translate("DialogLogin", "Dialog", nullptr));
        login->setText(QCoreApplication::translate("DialogLogin", "LOGIN", nullptr));
        label_3->setText(QCoreApplication::translate("DialogLogin", "Please provide the following: ", nullptr));
        label_Lname->setText(QCoreApplication::translate("DialogLogin", "Last name", nullptr));
        label_Fname->setText(QCoreApplication::translate("DialogLogin", "First name", nullptr));
        Lname->setText(QString());
        radiostudent->setText(QCoreApplication::translate("DialogLogin", "student", nullptr));
        radioteacher->setText(QCoreApplication::translate("DialogLogin", "teacher", nullptr));
        label_pass->setText(QCoreApplication::translate("DialogLogin", "password :", nullptr));
        textID->setText(QCoreApplication::translate("DialogLogin", "Student", nullptr));
        label_pass_2->setText(QCoreApplication::translate("DialogLogin", "ID: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogLogin: public Ui_DialogLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLOGIN_H
