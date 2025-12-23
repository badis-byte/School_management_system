/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *teacherstudent;
    QPushButton *admin;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(170, 100, 271, 51));
        QFont font;
        font.setPointSize(15);
        font.setUnderline(true);
        font.setStrikeOut(false);
        label->setFont(font);
        teacherstudent = new QPushButton(centralwidget);
        teacherstudent->setObjectName("teacherstudent");
        teacherstudent->setGeometry(QRect(78, 180, 601, 101));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(teacherstudent->sizePolicy().hasHeightForWidth());
        teacherstudent->setSizePolicy(sizePolicy);
        QFont font1;
        font1.setPointSize(12);
        font1.setItalic(true);
        teacherstudent->setFont(font1);
        admin = new QPushButton(centralwidget);
        admin->setObjectName("admin");
        admin->setGeometry(QRect(80, 310, 601, 101));
        sizePolicy.setHeightForWidth(admin->sizePolicy().hasHeightForWidth());
        admin->setSizePolicy(sizePolicy);
        admin->setFont(font1);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Are you signing in as :", nullptr));
        teacherstudent->setText(QCoreApplication::translate("MainWindow", "Student / Teacher", nullptr));
        admin->setText(QCoreApplication::translate("MainWindow", "Administration", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
