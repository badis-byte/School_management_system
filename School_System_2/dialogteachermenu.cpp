#include "dialogteachermenu.h"
#include "ui_dialogteachermenu.h"

DialogTeacherMenu::DialogTeacherMenu(QWidget *parent, Teacher teacher)
    : QDialog(parent)
    , ui(new Ui::DialogTeacherMenu)
{
    ui->setupUi(this);
    this->teacher= teacher;
    ui->ID->setText(QString::number(teacher.getID()));
    ui->Birth->setText( QString::fromStdString(teacher.getBirth() ));
    ui->Name->setText(  QString::fromStdString(teacher.getLname() )+" "+QString::fromStdString(teacher.getFname() ));
    ui->Grade->setText( QString::fromStdString(teacher.getGrade() ));
}

DialogTeacherMenu::~DialogTeacherMenu()
{
    delete ui;
}
