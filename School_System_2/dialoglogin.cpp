#include "dialoglogin.h"
#include "ui_dialoglogin.h"
#include <iostream>
#include <fstream>
#include <QString>
#include <string>
#include "dialogstudentmenu.h"
#include "dialogteachermenu.h"
#include "staff.h"
#include <QMessageBox>

using namespace std;

string l;
using namespace std;

DialogLogin::DialogLogin(QWidget *parent, Student* students, Teacher* teachers)
    : QDialog(parent)
    , ui(new Ui::DialogLogin)
{
    ui->setupUi(this);
    this->students= students;
    this->teachers= teachers;
}

DialogLogin::~DialogLogin()
{
    delete ui;
}


void DialogLogin::on_login_clicked()
{
    QString attemptusr= ui->Lname->text() +" "+ ui->Fname->text() ;
    QString attemptpsswd= ui->password->text();
    QString attemptid= ui->ID->text();

    int x=0;
    if(ui->radiostudent->isChecked() ){
        fstream file;
        file.open("..\\student\\usr.txt", ios::in);

        int IDusr=0,IDpsswd=0,IDid=0,temp=0;
        string realusr, realpsswd, realid;
        while(getline(file, realusr)){
            if(temp!=0){
                --temp;
            }else{
                ++IDusr;IDpsswd=0;
                if(realusr == attemptusr.toStdString()){
                    file.close();
                    file.open("..\\student\\psswd.txt", ios::in);
                    //cout<<"Password: ";
                    //cin>> attemptpsswd;
                    while(getline(file, realpsswd)){
                        ++IDpsswd;
                        if(realpsswd == attemptpsswd.toStdString() && IDpsswd==IDusr){

                            fstream last;
                            last.open("..\\student\\id.txt", ios::in);
                            while(getline(last, realid)){
                                ++IDid;
                                if( realid == attemptid.toStdString() && IDusr == IDid){
                                ++x;last.close();
                            DialogStudentMenu studentmenu(this, students[IDusr-1]);
                            studentmenu.setModal(true);
                            studentmenu.exec();
                            goto end;
                                }}
                                    last.close();
                                    goto end;
                        }
                    }
                    file.close();
                    temp= IDusr;
                    file.open("..\\student\\usr.txt", ios::in);
                }
            }
        }end:  file.close();
    }else{
        std::fstream file;
        file.open("..\\teacher\\usr.txt", ios::in);

        int IDusr=0,IDpsswd=0,IDid=0,temp=0;
        string realusr, realpsswd, realid;
        while(getline(file, realusr)){
            if(temp!=0)
                --temp;
            else{
                ++IDusr;IDpsswd=0;
                if(realusr == attemptusr.toStdString()){
                    file.close();
                    file.open("..\\teacher\\psswd.txt", ios::in);
                    //cout<<"Password: ";
                    //cin>> attemptpsswd;
                    while(getline(file, realpsswd)){
                        ++IDpsswd;
                        if(realpsswd == attemptpsswd.toStdString() && IDpsswd==IDusr){

                            fstream last;
                            last.open("..\\teacher\\id.txt", ios::in);
                            while(IDusr != IDid && getline(last, realid))
                                ++IDid;
                            if( realid == attemptid.toStdString()){
                                ++x;last.close();
                                DialogTeacherMenu teachermenu(this, teachers[IDusr-1]);
                                teachermenu.setModal(true);
                                teachermenu.exec();
                                goto End;
                            }else{
                                last.close();
                                goto End;
                            }
                        }
                    }
                    file.close();
                    temp= IDusr;
                    file.open("..\\teacher\\usr.txt", ios::in);
                }
            }
        }End:   file.close();
    }
    if(x==0)
        QMessageBox::warning(this, "Permission denied", "Wrong input");
}


void DialogLogin::on_radioteacher_toggled(bool checked)
{
    ui->textID->setText("Teacher");
}


void DialogLogin::on_radiostudent_toggled(bool checked)
{
    ui->textID->setText("Student");
}

