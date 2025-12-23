#include "dialogteacherregister.h"
#include "ui_dialogteacherregister.h"
#include <string>
#include <iostream>
#include <fstream>
#include <QMessageBox>
using namespace std;

bool checkdaate(int d, int m, int y){
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






























DialogTeacherRegister::DialogTeacherRegister(QWidget *parent, Student* students, Teacher* teachers)
    : QDialog(parent)
    , ui(new Ui::DialogTeacherRegister)
{
    ui->setupUi(this);
    this->students= students;
    this->teachers= teachers;
}

DialogTeacherRegister::~DialogTeacherRegister()
{
    delete ui;
}








void DialogTeacherRegister::on_pushButton_rregister_clicked()
{
    QString Fname = ui->lineEditFname->text();
    QString Lname = ui->lineEditLname->text();
    QString year = ui->lineEditYear->text();
    QString month = ui->lineEditMonth ->text();
    QString day = ui->lineEditDay ->text();
    QString number = ui->lineEditNumber ->text();
    QString password = ui->lineEditPsswd ->text();
    std::string grade;
    if( ui->one->isChecked()){grade="Professor";}
    if( ui->two->isChecked()){grade="Doctor";}

    if(!checkdaate(day.toInt(), month.toInt(), year.toInt())){
        QMessageBox::warning(this, "Registration unsuccessful", "invalid Date");
    }
    else{

    //Teacher temp(Fname.toStdString(), Lname.toStdString(), day.toInt(), month.toInt(), year.toInt(), number.toInt(), grade);

    //teachers[temp.staticteacher()]= temp;
    fstream total;
    total.open("..\\teacher\\total.txt", ios::in);
    string num;
    total>>num;
    qDebug()<<num;
    int ttl= stoi(num);
    total.close();
    total.open("..\\teacher\\total.txt", ios::out);
    total<<to_string(ttl+1);
    total.close();

    Teacher temp(Fname.toStdString(), Lname.toStdString(), day.toInt(), month.toInt(), year.toInt(), number.toInt(), grade, ttl+1);
    teachers[ttl]= temp;

    fstream file;
    file.open("..\\teacher\\usr.txt", ios::out | ios::app);
    file<<Lname.toStdString()<<" "<<Fname.toStdString()<<endl;
    file.close();

    file.open("..\\teacher\\psswd.txt", ios::out | ios::app);
    file<<password.toStdString()<<endl;
    file.close();

    file.open("..\\teacher\\fname.txt", ios::out | ios::app);
    file<<Fname.toStdString()<<endl;
    file.close();

    file.open("..\\teacher\\lname.txt", ios::out | ios::app);
    file<<Lname.toStdString()<<endl;
    file.close();
    //////////////////////////////////////////////////////////////////////date format
    if(day.length()==1)
        day= "0"+day;
    if(month.length()==1)
        month= "0"+month;
    //////////////////////////////////////////////////////////////////////////////////
    file.open("..\\teacher\\birth.txt", ios::out | ios::app);
    file<<day.toStdString()+"/"+month.toStdString()+"/"+year.toStdString()<<endl;
    file.close();

    file.open("..\\teacher\\number.txt", ios::out | ios::app);
    file<<number.toStdString()<<endl;
    file.close();

    file.open("..\\teacher\\grade.txt", ios::out | ios::app);
    file<<grade<<endl;
    file.close();

    file.open("..\\teacher\\id.txt", ios::out | ios::app);
    file<<QString::number(Teacher::staticteacher()).toStdString()<<endl;
    file.close();


    QString info= "new teacher \""+Lname+" "+Fname+"\" was successfully registered";

    QMessageBox::information(this, "Registration success", info);
    this->close();
    }
}

















void DialogTeacherRegister::on_pushButton_clear_clicked()
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

