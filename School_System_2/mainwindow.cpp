#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "dialogadmin.h"
#include "dialoglogin.h"
#include <QInputDialog>
#include <QMessageBox>
#include "staff.h"
#include <fstream>
#include <QString>
#include <string>
#include <iostream>

void initializer(int n, Student* students){
    int here=0;
    for(int i=0; i<n; ++i){
        fstream file;

        file.open("..\\student\\fname.txt", ios::in);
        string fname;
        while(getline(file, fname)){
            if(here==i)
                break;
            ++here;
        }
        file.close();
        here=0;/////////////////////////////////////////////fname
        file.open("..\\student\\lname.txt", ios::in);
        string lname;
        while(getline(file, lname)){
            if(here==i)
                break;
            ++here;
        }
        file.close();
        here=0;////////////////////////////////////////////lname
        file.open("..\\student\\birth.txt", ios::in);
        string birth;
        while(getline(file, birth)){
            if(here==i)
                break;
            ++here;
        }
        file.close();
        here=0;////////////////////////////////////////////birth
        file.open("..\\student\\number.txt", ios::in);
        string number;
        while(getline(file, number)){
            if(here==i)
                break;
            ++here;
        }
        file.close();
        here=0;//////////////////////////////////////////////number
        file.open("..\\student\\level.txt", ios::in);
        string level;
        while(getline(file, level)){
            if(here==i)
                break;
            ++here;
        }
        file.close();
        here=0;////////////////////////////////////////////////////level
        file.open("..\\student\\id.txt", ios::in);
        string id;
        while(getline(file, id)){
            if(here==i)
                break;
            ++here;
        }
        file.close();
        here=0;///////////////////////////////////////////////////////ID
        int day,month,year,numberr, levell, ID;
        string da, mo, ye;
        da=birth.substr(0,2);
        mo=birth.substr(3,2);
        ye=birth.substr(6);

        qDebug()<<id;qDebug()<<da;qDebug()<<mo;qDebug()<<ye;qDebug()<<number;qDebug()<<level;
        ID= stoi(id);
        day= stoi(da);
        month= stoi( mo);
        year= stoi( ye);
        numberr= stoi(number);
        levell= stoi(level);

        students[i]= Student(lname, fname, day, month, year, numberr, levell, i+1, ID);
    }
}
void initializer(int n, Teacher* teachers){
    int here=0;
    for(int i=0; i<n; ++i){
        fstream file;

        file.open("..\\teacher\\fname.txt", ios::in);
        string fname;
        while(getline(file, fname)){
            if(here==i)
                break;
            ++here;
        }
        file.close();
        here=0;/////////////////////////////////////////////fname
        file.open("..\\teacher\\lname.txt", ios::in);
        string lname;
        while(getline(file, lname)){
            if(here==i)
                break;
            ++here;
        }
        file.close();
        here=0;////////////////////////////////////////////lname
        file.open("..\\teacher\\birth.txt", ios::in);
        string birth;
        while(getline(file, birth)){
            if(here==i)
                break;
            ++here;
        }
        file.close();
        here=0;////////////////////////////////////////////birth
        file.open("..\\teacher\\number.txt", ios::in);
        string number;
        while(getline(file, number)){
            if(here==i)
                break;
            ++here;
        }
        file.close();
        here=0;//////////////////////////////////////////////number
        file.open("..\\teacher\\grade.txt", ios::in);
        string grade;
        while(getline(file, grade)){
            if(here==i)
                break;
            ++here;
        }
        file.close();
        here=0;////////////////////////////////////////////////////grade
        file.open("..\\teacher\\id.txt", ios::in);
        string id;
        while(getline(file, id)){
            if(here==i)
                break;
            ++here;
        }
        file.close();
        here=0;///////////////////////////////////////////////////////ID
        int day,month,year,numberr, ID;
        string da, mo, ye;
        da=birth.substr(0,2);
        mo=birth.substr(3,2);
        ye=birth.substr(6);

        ID= stoi(id);
        day= stoi(da);
        month= stoi( mo);
        year= stoi( ye);
        numberr= stoi(number);

        teachers[i]= Teacher(fname, lname, day, month, year, numberr, grade, i+1, ID);
    }
}


































MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    students= new Student[100];
    teachers= new Teacher[100];
    fstream total;
    string number;
    //////////////////////////////INITIALIZNG STUDENTS///////////////////////
    total.open("..\\student\\total.txt", ios::in);
    total>>number;
    int ttl= stoi(number);
    initializer(ttl, students);
    total.close();
    ///////////////////////////////INITIALIZING TEACHERS//////////////////////
    total.open("..\\teacher\\total.txt", ios::in);
    total>>number;
    ttl= stoi(number);
    initializer(ttl, teachers);
    total.close();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete [] students;
    delete [] teachers;
}

void MainWindow::on_admin_clicked()
{
    QString text = QInputDialog::getText(this,"Login","Enter password for Administration");
    if(text=="11"){
        DialogAdmin admin(this, students, teachers);
        admin.setModal(true);
        admin.exec();
    }else{
        QMessageBox::warning(this, "Permission denied", "Wrong password");
    }
}





void MainWindow::on_teacherstudent_clicked()
{
    DialogLogin login(this, students, teachers);
    login.setModal(true);
    login.exec();
}



