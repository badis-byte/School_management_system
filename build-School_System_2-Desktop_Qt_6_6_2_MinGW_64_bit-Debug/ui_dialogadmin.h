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
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAdmin
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *ttlStudents;
    QLabel *label_5;
    QLineEdit *ttlTeachers;
    QLabel *label_4;
    QToolBox *toolBox;
    QWidget *page;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *reg_student;
    QPushButton *reg_teacher;
    QPushButton *reg_module;
    QWidget *page_3;
    QLabel *label_2;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *rmv_student;
    QPushButton *rmv_teacher;
    QPushButton *rmv_module;
    QWidget *page_2;
    QLabel *label_3;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *rmv_student_2;
    QPushButton *rmv_teacher_2;
    QPushButton *rmv_module_2;
    QStackedWidget *stacked;
    QWidget *pageStudents;
    QTableWidget *tableWidget;
    QWidget *pageTeachers;
    QTableWidget *tableWidget_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;

    void setupUi(QDialog *DialogAdmin)
    {
        if (DialogAdmin->objectName().isEmpty())
            DialogAdmin->setObjectName("DialogAdmin");
        DialogAdmin->resize(815, 564);
        formLayoutWidget = new QWidget(DialogAdmin);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(660, 0, 151, 92));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        ttlStudents = new QLineEdit(formLayoutWidget);
        ttlStudents->setObjectName("ttlStudents");
        ttlStudents->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, ttlStudents);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_5);

        ttlTeachers = new QLineEdit(formLayoutWidget);
        ttlTeachers->setObjectName("ttlTeachers");
        ttlTeachers->setReadOnly(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, ttlTeachers);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_4);

        toolBox = new QToolBox(DialogAdmin);
        toolBox->setObjectName("toolBox");
        toolBox->setGeometry(QRect(0, 390, 811, 171));
        page = new QWidget();
        page->setObjectName("page");
        page->setGeometry(QRect(0, 0, 811, 66));
        label = new QLabel(page);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 20, 91, 21));
        layoutWidget = new QWidget(page);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(150, 10, 541, 41));
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

        toolBox->addItem(page, QString::fromUtf8("ADD"));
        page_3 = new QWidget();
        page_3->setObjectName("page_3");
        page_3->setGeometry(QRect(0, 0, 811, 66));
        label_2 = new QLabel(page_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 0, 121, 41));
        layoutWidget_2 = new QWidget(page_3);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(170, 0, 551, 41));
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

        toolBox->addItem(page_3, QString::fromUtf8("Remove"));
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        page_2->setGeometry(QRect(0, 0, 811, 66));
        label_3 = new QLabel(page_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 10, 121, 41));
        layoutWidget_3 = new QWidget(page_2);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(140, 0, 551, 57));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        rmv_student_2 = new QPushButton(layoutWidget_3);
        rmv_student_2->setObjectName("rmv_student_2");

        horizontalLayout_3->addWidget(rmv_student_2);

        rmv_teacher_2 = new QPushButton(layoutWidget_3);
        rmv_teacher_2->setObjectName("rmv_teacher_2");

        horizontalLayout_3->addWidget(rmv_teacher_2);

        rmv_module_2 = new QPushButton(layoutWidget_3);
        rmv_module_2->setObjectName("rmv_module_2");

        horizontalLayout_3->addWidget(rmv_module_2);

        toolBox->addItem(page_2, QString::fromUtf8("Edit"));
        stacked = new QStackedWidget(DialogAdmin);
        stacked->setObjectName("stacked");
        stacked->setGeometry(QRect(0, 0, 651, 391));
        pageStudents = new QWidget();
        pageStudents->setObjectName("pageStudents");
        tableWidget = new QTableWidget(pageStudents);
        if (tableWidget->columnCount() < 6)
            tableWidget->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        tableWidget->setObjectName("tableWidget");
        tableWidget->setGeometry(QRect(0, 0, 631, 391));
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->verticalHeader()->setVisible(false);
        stacked->addWidget(pageStudents);
        pageTeachers = new QWidget();
        pageTeachers->setObjectName("pageTeachers");
        tableWidget_2 = new QTableWidget(pageTeachers);
        if (tableWidget_2->columnCount() < 6)
            tableWidget_2->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(3, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(4, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(5, __qtablewidgetitem11);
        tableWidget_2->setObjectName("tableWidget_2");
        tableWidget_2->setGeometry(QRect(0, 0, 631, 391));
        tableWidget_2->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget_2->verticalHeader()->setVisible(false);
        stacked->addWidget(pageTeachers);
        radioButton = new QRadioButton(DialogAdmin);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(660, 130, 112, 26));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(DialogAdmin);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(660, 160, 112, 26));

        retranslateUi(DialogAdmin);

        toolBox->setCurrentIndex(0);
        stacked->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DialogAdmin);
    } // setupUi

    void retranslateUi(QDialog *DialogAdmin)
    {
        DialogAdmin->setWindowTitle(QCoreApplication::translate("DialogAdmin", "Dialog", nullptr));
        label_5->setText(QCoreApplication::translate("DialogAdmin", "total Teachers:", nullptr));
        label_4->setText(QCoreApplication::translate("DialogAdmin", "total Students:", nullptr));
        label->setText(QCoreApplication::translate("DialogAdmin", "ADD:", nullptr));
        reg_student->setText(QCoreApplication::translate("DialogAdmin", "Student", nullptr));
        reg_teacher->setText(QCoreApplication::translate("DialogAdmin", "Teacher", nullptr));
        reg_module->setText(QCoreApplication::translate("DialogAdmin", "Module", nullptr));
        toolBox->setItemText(toolBox->indexOf(page), QCoreApplication::translate("DialogAdmin", "ADD", nullptr));
        label_2->setText(QCoreApplication::translate("DialogAdmin", "REMOVE:", nullptr));
        rmv_student->setText(QCoreApplication::translate("DialogAdmin", "Student", nullptr));
        rmv_teacher->setText(QCoreApplication::translate("DialogAdmin", "Teacher", nullptr));
        rmv_module->setText(QCoreApplication::translate("DialogAdmin", "Module", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("DialogAdmin", "Remove", nullptr));
        label_3->setText(QCoreApplication::translate("DialogAdmin", "EDIT:", nullptr));
        rmv_student_2->setText(QCoreApplication::translate("DialogAdmin", "Student", nullptr));
        rmv_teacher_2->setText(QCoreApplication::translate("DialogAdmin", "Teacher", nullptr));
        rmv_module_2->setText(QCoreApplication::translate("DialogAdmin", "Module", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("DialogAdmin", "Edit", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DialogAdmin", "id", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DialogAdmin", "Last Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DialogAdmin", "First Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DialogAdmin", "level", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DialogAdmin", "Birth day", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("DialogAdmin", "number", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("DialogAdmin", "id", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("DialogAdmin", "Last Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("DialogAdmin", "First Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_2->horizontalHeaderItem(3);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("DialogAdmin", "grade", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_2->horizontalHeaderItem(4);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("DialogAdmin", "Birth day", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_2->horizontalHeaderItem(5);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("DialogAdmin", "number", nullptr));
        radioButton->setText(QCoreApplication::translate("DialogAdmin", "Students", nullptr));
        radioButton_2->setText(QCoreApplication::translate("DialogAdmin", "Teachers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAdmin: public Ui_DialogAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADMIN_H
