#include "dialogstudentregister.h"
#include "ui_dialogstudentregister.h"
#include <fstream>
#include <iostream>
#include <string>
#include <QMessageBox>
#include <QString>
#include "staff.h"
using namespace std;


bool checkdatee(int d, int m, int y){
    bool D=false;

    if(m<1 || m>12)
        return false;
    if(y<1900 || y>2020)
        return false;

    if( y % 400 ==0 || (y % 4 ==0 && y % 100 != 0)){
        D= true;
    }else{
        D=false;
    }
    int n;
    if(m==2 && D== true){
        n= 28;
    }else{
        if(m==2 && D== false){
            n= 29;
        }else{
            if( m==4||m==6|| m==9|| m==11){
                n= 31;
            }else{
                n= 30;
            }
        }
    }

    if(d<1 || d>n)
        return false;

    return true;
}
































DialogStudentRegister::DialogStudentRegister(QWidget *parent, Student* students, Teacher* teachers)
    : QDialog(parent)
    , ui(new Ui::DialogStudentRegister)
{
    ui->setupUi(this);
    this->students= students;
    this->teachers= teachers;
}

DialogStudentRegister::~DialogStudentRegister()
{
    delete ui;
}

void DialogStudentRegister::on_pushButton_rregister_clicked()
{
    QString Fname = ui->lineEditFname->text();
    QString Lname = ui->lineEditLname->text();
    QString year = ui->lineEditYear->text();
    QString month = ui->lineEditMonth ->text();
    QString day = ui->lineEditDay ->text();
    QString number = ui->lineEditNumber ->text();
    QString password = ui->lineEditPsswd ->text();
    int level;
    if( ui->one->isChecked()){level=1;}
    if( ui->two->isChecked()){level=2;}
    if( ui->three->isChecked()){level=3;}
    if( ui->four->isChecked()){level=4;}
    if( ui->five->isChecked()){level=5;}

    if(!checkdatee(day.toInt(), month.toInt(), year.toInt())){
        QMessageBox::warning(this, "Registration unsuccessful", "invalid Date");
    }
    else{
    //Student::staticstudent(1);
    //Student temp(Fname.toStdString(), Lname.toStdString(), day.toInt(), month.toInt(), year.toInt(), number.toInt(), level);

    fstream total;
    total.open("..\\student\\total.txt", ios::in);
    string num;
    total>>num;
    qDebug()<<num;
    int ttl= stoi(num);
    total.close();
    total.open("..\\student\\total.txt", ios::out);
    total<<to_string(ttl+1);
    total.close();

    Student temp(Fname.toStdString(), Lname.toStdString(), day.toInt(), month.toInt(), year.toInt(), number.toInt(), level, ttl+1);
    students[ttl]= temp;

    fstream file;
    file.open("..\\student\\usr.txt", ios::out | ios::app);
    file<<Lname.toStdString()<<" "<<Fname.toStdString()<<endl;
    file.close();

    file.open("..\\student\\psswd.txt", ios::out | ios::app);
    file<<password.toStdString()<<endl;
    file.close();

    file.open("..\\student\\fname.txt", ios::out | ios::app);
    file<<Fname.toStdString()<<endl;
    file.close();

    file.open("..\\student\\lname.txt", ios::out | ios::app);
    file<<Lname.toStdString()<<endl;
    file.close();
    //////////////////////////////////////////////////////////////////////date format
    if(day.length()==1)
        day= "0"+day;
    if(month.length()==1)
        month= "0"+month;
    //////////////////////////////////////////////////////////////////////////////////
    file.open("..\\student\\birth.txt", ios::out | ios::app);
    file<<day.toStdString()+"/"+month.toStdString()+"/"+year.toStdString()<<endl;
    file.close();

    file.open("..\\student\\number.txt", ios::out | ios::app);
    file<<number.toStdString()<<endl;
    file.close();

    file.open("..\\student\\level.txt", ios::out | ios::app);
    file<<QString::number(level).toStdString()<<endl;
    file.close();

    file.open("..\\student\\id.txt", ios::out | ios::app);
    file<<QString::number(Student::staticstudent()).toStdString()<<endl;
    file.close();

    QString info= "new student \""+Lname+" "+Fname+"\" is successfully registered";

    QMessageBox::information(this, "Registration success", info);
    this->close();
    }
}


void DialogStudentRegister::on_pushButton_clear_clicked()
{
    ui->lineEditFname->clear();
    ui->lineEditLname->clear();
    ui->lineEditYear->clear();
    ui->lineEditMonth ->clear();
    ui->lineEditDay ->clear();
    ui->lineEditNumber ->clear();
    ui->lineEditPsswd ->clear();

    if(! ui->one->isChecked()){ ui->one->setChecked(1);}
}

