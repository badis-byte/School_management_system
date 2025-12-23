#include "dialogadmin.h"
#include "ui_dialogadmin.h"
#include "staff.h"
#include "dialogstudentregister.h"
#include "dialogteacherregister.h"
#include "dialogstudentremove.h"
#include "dialogteacherremove.h"
#include "dialogstudentedit.h"
#include "dialogteacheredit.h"
#include <QString>
#include <fstream>
#include <iostream>
#include <string>
#include <fstream>


using namespace std;

DialogAdmin::DialogAdmin(QWidget *parent, Student* students, Teacher* teachers)
    : QDialog(parent)
    , ui(new Ui::DialogAdmin)
{
    ui->setupUi(this);
    this->students= students;
    this->teachers= teachers;

    fstream file;
    QString line;
    string lline;
    file.open("../student/total.txt", ios::in);
    file>>lline;
    line= QString::fromStdString(lline);
    ui->ttlStudents->setText(line);
    file.close();

    file.open("../teacher/total.txt", ios::in);
    file>>lline;
    line= QString::fromStdString(lline);
    ui->ttlTeachers->setText(line);
    file.close();


    ui->tableWidget->setRowCount(1000);
    ui->tableWidget_2->setRowCount(1000);

    ui->stacked->setCurrentIndex(0);
}

DialogAdmin::~DialogAdmin()
{
    delete ui;
}

void DialogAdmin::on_reg_student_clicked()
{
    DialogStudentRegister studentregister(this, students, teachers);
    studentregister.setModal(true);
    studentregister.exec();

    fstream file;
    QString line;
    string lline;
    file.open("../student/total.txt", ios::in);
    file>>lline;
    line= QString::fromStdString(lline);
    ui->ttlStudents->setText(line);
    file.close();
}


void DialogAdmin::on_reg_teacher_clicked()
{
    DialogTeacherRegister teacherregister(this, students, teachers);
    teacherregister.setModal(true);
    teacherregister.exec();

    fstream file;
    QString line;
    string lline;
    file.open("../teacher/total.txt", ios::in);
    file>>lline;
    line= QString::fromStdString(lline);
    ui->ttlTeachers->setText(line);
    file.close();
}


void DialogAdmin::on_rmv_student_clicked()
{
    DialogStudentRemove studentremove(this, students, teachers);
    studentremove.setModal(true);
    studentremove.exec();

    fstream file;
    QString line;
    string lline;
    file.open("../student/total.txt", ios::in);
    file>>lline;
    line= QString::fromStdString(lline);
    ui->ttlStudents->setText(line);
    file.close();
}


void DialogAdmin::on_rmv_teacher_clicked()
{
    DialogTeacherRemove teacherremove(this, students, teachers);
    teacherremove.setModal(true);
    teacherremove.exec();

    fstream file;
    QString line;
    string lline;
    file.open("../teacher/total.txt", ios::in);
    file>>lline;
    line= QString::fromStdString(lline);
    ui->ttlTeachers->setText(line);
    file.close();
}


void DialogAdmin::on_rmv_student_2_clicked()
{
    DialogStudentEdit studentedit(this, students);
    studentedit.setModal(true);
    studentedit.exec();
}


void DialogAdmin::on_rmv_teacher_2_clicked()
{
    DialogTeacherEdit teacheredit(this, teachers);
    teacheredit.setModal(true);
    teacheredit.exec();
}


void DialogAdmin::on_radioButton_clicked()
{
    ui->stacked->setCurrentIndex(1);

    QString number;
    QString fname;
    QString lname;
    QString grade;
    QString id;
    QString bday;
    int total;
    string ttl;
    string line;

    fstream file;
    file.open("../teacher/total.txt", ios::in);
    file>>ttl;
    total = stoi(ttl);
    //QDebug(total);
    file.close();

    for( int i=0; i<total; ++i){
        int a;

        /////////////////////////////////////////////////////////////////////////////
        file.open("../teacher/id.txt", ios::in);
        a=i;
        while( getline(file, line) && a!=0 ){
            --a;
        }
        id= QString::fromStdString(line);
        file.close();
        //////////////////////////////////////////////////////////////////////////////
        file.open("../teacher/number.txt", ios::in);
        a=i;
        while( getline(file, line) && a!=0 ){
            --a;
        }
        number= QString::fromStdString(line);
        file.close();
        ///////////////////////////////////////////////////////////////////////////////
        file.open("../teacher/lname.txt", ios::in);
        a=i;
        while( getline(file, line) && a!=0 ){
            --a;
        }
        lname= QString::fromStdString(line);
        file.close();
        ////////////////////////////////////////////////////////////////////////////////
        file.open("../teacher/fname.txt", ios::in);
        a=i;
        while( getline(file, line) && a!=0 ){
            --a;
        }
        fname= QString::fromStdString(line);
        file.close();
        ///
        file.open("../teacher/level.txt", ios::in);
        a=i;
        while( getline(file, line) && a!=0 ){
            --a;
        }
        grade= QString::fromStdString(line);
        file.close();
        ///////////////////////////////////////////////////////////////////////////////
        file.open("../teacher/birth.txt", ios::in);
        a=i;
        while( getline(file, line) && a!=0 ){
            --a;
        }
        bday= QString::fromStdString(line);
        file.close();
        /////////////////////////////////////////////////////////////////////////////////

        ui->tableWidget->setItem(i, 0, new QTableWidgetItem(QString(id)) );
        ui->tableWidget->setItem(i, 1, new QTableWidgetItem(QString(lname)) );
        ui->tableWidget->setItem(i, 2, new QTableWidgetItem(QString(fname)) );
        ui->tableWidget->setItem(i, 3, new QTableWidgetItem(QString(grade)) );
        ui->tableWidget->setItem(i, 4, new QTableWidgetItem(QString(bday)) );
        ui->tableWidget->setItem(i, 5, new QTableWidgetItem(QString(number)) );


    }
}


void DialogAdmin::on_radioButton_2_clicked()
{

    ui->stacked->setCurrentIndex(0);

    QString number;
    QString fname;
    QString lname;
    QString level;
    QString id;
    QString bday;
    int total;
    string ttl;
    string line;

    fstream file;
    file.open("../student/total.txt", ios::in);
    file>>ttl;
    total = stoi(ttl);
    //QDebug(total);
    file.close();

    for( int i=0; i<total; ++i){
        int a;

    /////////////////////////////////////////////////////////////////////////////
    file.open("../student/id.txt", ios::in);
        a=i;
    while( getline(file, line) && a!=0 ){
            --a;
    }
    id= QString::fromStdString(line);
    file.close();
    //////////////////////////////////////////////////////////////////////////////
    file.open("../student/number.txt", ios::in);
    a=i;
    while( getline(file, line) && a!=0 ){
        --a;
    }
    number= QString::fromStdString(line);
    file.close();
    ///////////////////////////////////////////////////////////////////////////////
    file.open("../student/fname.txt", ios::in);
    a=i;
    while( getline(file, line) && a!=0 ){
        --a;
    }
    fname= QString::fromStdString(line);
    file.close();
    ////////////////////////////////////////////////////////////////////////////////
    file.open("../student/lname.txt", ios::in);
    a=i;
    while( getline(file, line) && a!=0 ){
        --a;
    }
    lname= QString::fromStdString(line);
    file.close();
    ///
    file.open("../student/level.txt", ios::in);
    a=i;
    while( getline(file, line) && a!=0 ){
        --a;
    }
    level= QString::fromStdString(line);
    file.close();
    ///////////////////////////////////////////////////////////////////////////////
    file.open("../student/birth.txt", ios::in);
    a=i;
    while( getline(file, line) && a!=0 ){
        --a;
    }
    bday= QString::fromStdString(line);
    file.close();
    /////////////////////////////////////////////////////////////////////////////////

    ui->tableWidget_2->setItem(i, 0, new QTableWidgetItem(QString(id)));
    ui->tableWidget_2->setItem(i, 1, new QTableWidgetItem(QString(lname)) );
    ui->tableWidget_2->setItem(i, 2, new QTableWidgetItem(QString(fname)) );
    ui->tableWidget_2->setItem(i, 3, new QTableWidgetItem(QString(level)) );
    ui->tableWidget_2->setItem(i, 4, new QTableWidgetItem(QString(bday)) );
    ui->tableWidget_2->setItem(i, 5, new QTableWidgetItem(QString(number)) );


    }
}

