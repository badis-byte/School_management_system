#include "dialogstudentmenu.h"
#include "ui_dialogstudentmenu.h"

#include "staff.h"

DialogStudentMenu::DialogStudentMenu(QWidget *parent, Student student)
    : QDialog(parent)
    , ui(new Ui::DialogStudentMenu)
{
    ui->setupUi(this);
    this->student= student;
    ui->ID->setText(QString::number(student.getID()));
    ui->Birth->setText( QString::fromStdString(student.getBirth() ));
    ui->Name->setText(  QString::fromStdString(student.getLname() )+" "+QString::fromStdString(student.getFname() ));
    ui->Level->setText( QString::number(student.getLevel() ));
}

DialogStudentMenu::~DialogStudentMenu()
{
    delete ui;
}
