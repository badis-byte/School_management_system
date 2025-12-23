#include "dialogteacheredit.h"
#include "ui_dialogteacheredit.h"

#include "staff.h"
#include <iostream>
#include <fstream>
#include <QString>
#include <QMessageBox>


bool checkdatte(int d, int m, int y){
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

DialogTeacherEdit::DialogTeacherEdit(QWidget *parent, Teacher *teachers)
    : QDialog(parent)
    , ui(new Ui::DialogTeacherEdit)
{
    ui->setupUi(this);
    this->teachers= teachers;
    ui->btnDefault->hide();
    ui->btnReset->hide();
    ui->btnEdit->hide();
}

DialogTeacherEdit::~DialogTeacherEdit()
{
    delete ui;
}

void DialogTeacherEdit::on_btnLook_clicked()
{
    QString lname= ui->lineEdit_Lname->text();
    QString fname= ui->lineEdit_Fname->text();
    QString id= ui->lineEdit_ID->text();
    string attemptusr = lname.toStdString()+" "+fname.toStdString();
    string attemptid= id.toStdString();
    string realid, realusr;
    int count=0;
    bool foundid =false;
    fstream file;
    file.open("..\\teacher\\id.txt", ios::in);
    while(getline(file, realid)){
        ++count;
        if(realid== attemptid){
            foundid=true;
            break;
        }
    }
    file.close();
    int a,b;
    b = count;
    string temp;
    if(foundid){
        file.open("..\\teacher\\usr.txt", ios::in);
        while(count!=0 &&getline(file, realusr)){
            --count;
        }
        file.close();
        if(realusr== attemptusr){
            a=b;
            QString birth;
            file.open("..\\teacher\\birth.txt", ios::in);
            while(a!=0 &&getline(file, temp)){
                --a;
            }
            birth= QString::fromStdString(temp);
            file.close();

            a=b;
            QString ID;
            file.open("..\\teacher\\id.txt", ios::in);
            while(a!=0 &&getline(file, temp)){
                --a;
            }
            ID= QString::fromStdString(temp);
            file.close();

            a=b;
            QString grade;
            file.open("..\\teacher\\level.txt", ios::in);
            while(a!=0 &&getline(file, temp) ){
                --a;
            }
            grade= QString::fromStdString(temp);
            file.close();

            a=b;
            QString number;
            file.open("..\\teacher\\number.txt", ios::in);
            while(a!=0 &&getline(file, temp) ){
                --a;
            }
            number= QString::fromStdString(temp);
            file.close();

            a=b;
            QString password;
            file.open("..\\teacher\\psswd.txt", ios::in);
            while(a!=0 &&getline(file, temp) ){
                --a;
            }
            password= QString::fromStdString(temp);
            file.close();

            Position= b;
            QString birthd, birthm, birthy;
            birthd= birthm= birthy = birth;
            ui->Lname->setText(lname);
            ui->Fname->setText(fname);
            ui->level->setText(grade);
            ui->number->setText(number);
            ui->day->setText(  birthd.left(2));
            ui->year->setText( birthy.right(4));
            ui->month->setText( birthy.mid(3, 2));
            ui->password->setText( password);

            lnamee= lname;
            fnamee=fname;
            gradee=grade;
            numberr=number;
            dayy= birthd.left(2);
            monthh= birthy.mid(3, 2);
            yearr= birthy.right(4);
            passwordd= password;


            ui->btnReset->show();
            ui->btnLook->hide();
            ui->btnEdit->show();
            ui->btnDefault->show();
        }else{
            QMessageBox::warning(this, "Not Found", "No account with such Information");
        }
    }else{
        QMessageBox::warning(this, "Not Found", "No account with such Information");
    }
}


void DialogTeacherEdit::on_btnReset_clicked()
{
    ui->Lname->clear();
    ui->Fname->clear();
    ui->level->clear();
    ui->number->clear();
    ui->day->clear();
    ui->year->clear();
    ui->month->clear();
    ui->password->clear();

    ui->lineEdit_Lname->clear();
    ui->lineEdit_Fname->clear();
    ui->lineEdit_ID->clear();

    ui->btnDefault->hide();
    ui->btnEdit->hide();
    ui->btnReset->hide();
    ui->btnLook->show();
}


void DialogTeacherEdit::on_btnDefault_clicked()
{
    ui->Lname->setText(lnamee);
    ui->Fname->setText(fnamee);
    ui->level->setText(gradee);
    ui->number->setText(numberr);
    ui->day->setText(  dayy);
    ui->year->setText( yearr);
    ui->month->setText( monthh);
    ui->password->setText( passwordd);
}


void DialogTeacherEdit::on_btnEdit_clicked()
{


    fstream file;
    string line;
    int temp=0;
    fstream fole;


    ////////////////////////////////////////////////////////////////////////usr
    {
        file.open("../teacher/usr.txt", ios::in);
        fole.open("../teacher/usr1.txt", ios::out| ios::app);

        while(getline(file, line)){
            ++temp;
            if(temp == Position){

                fole<<(ui->Lname->text()).toStdString()+" "+(ui->Fname->text()).toStdString()<<endl;
            }else{
                fole<<line<<endl;
            }
        }
        fole.close();
        file.close();


        file.open("../teacher/usr.txt", ios::out);
        file<<"";
        file.close();
        file.open("../teacher/usr.txt", ios::app);
        fole.open("../teacher/usr1.txt", ios::in);
        while(getline(fole, line))
            file<<line<<endl;

        file.close();
        fole.close();
        remove("../teacher/usr1.txt");
    }
    temp=0;//////////////////////////////////////////////////////////////////////fname
    {
        file.open("../teacher/fname.txt", ios::in);
        fole.open("../teacher/fname1.txt", ios::out| ios::app);

        while(getline(file, line)){
            ++temp;
            if(temp == Position){

                fole<<(ui->Fname->text()).toStdString()<<endl;
            }else{
                fole<<line<<endl;
            }
        }
        fole.close();
        file.close();


        file.open("../teacher/fname.txt", ios::out);
        file<<"";
        file.close();
        file.open("../teacher/fname.txt", ios::app);
        fole.open("../teacher/fname1.txt", ios::in);
        while(getline(fole, line))
            file<<line<<endl;

        file.close();
        fole.close();
        remove("../teacher/fname1.txt");
    }
    temp=0;//////////////////////////////////////////////////////////////////////lname
    {
        file.open("../teacher/lname.txt", ios::in);
        fole.open("../teacher/lname1.txt", ios::out| ios::app);

        while(getline(file, line)){
            ++temp;
            if(temp == Position){

                fole<<(ui->Lname->text()).toStdString()<<endl;
            }else{
                fole<<line<<endl;
            }
        }
        fole.close();
        file.close();


        file.open("../teacher/lname.txt", ios::out);
        file<<"";
        file.close();
        file.open("../teacher/lname.txt", ios::app);
        fole.open("../teacher/lname1.txt", ios::in);
        while(getline(fole, line))
            file<<line<<endl;

        file.close();
        fole.close();
        remove("../teacher/lname1.txt");
    }
    temp=0;//////////////////////////////////////////////////////////////////////birth

    if(!checkdatte( ((ui->day->text()).toInt()),((ui->month->text()).toInt()),((ui->year->text()).toInt()))){
        QMessageBox::warning(this, "Invalid Date", "the date you provided is not valid");
    }else{
        file.open("../teacher/birth.txt", ios::in);
        fole.open("../teacher/birth1.txt", ios::out| ios::app);

        //////////////////////////////////////////////////////////////////////date format
        if((ui->day->text()).length()==1)
            (ui->day)->setText( "0"+(ui->day->text()));
        if((ui->month->text()).length()==1)
            (ui->month)->setText("0"+(ui->month->text()));
        //////////////////////////////////////////////////////////////////////////////////


        while(getline(file, line)){
            ++temp;
            if(temp == Position){

                fole<<(ui->day->text()).toStdString()+"/"+(ui->month->text()).toStdString()+"/"+(ui->year->text()).toStdString()<<endl;
            }else{
                fole<<line<<endl;
            }
        }
        fole.close();
        file.close();


        file.open("../teacher/birth.txt", ios::out);
        file<<"";
        file.close();
        file.open("../teacher/birth.txt", ios::app);
        fole.open("../teacher/birth1.txt", ios::in);
        while(getline(fole, line))
            file<<line<<endl;

        file.close();
        fole.close();
        remove("../teacher/birth1.txt");

        temp=0;/////////////////////////////////////////////////////////////////////number
        {
            file.open("../teacher/number.txt", ios::in);
            fole.open("../teacher/number1.txt", ios::out| ios::app);

            while(getline(file, line)){
                ++temp;
                if(temp == Position){

                    fole<<(ui->number->text()).toStdString()<<endl;
                }else{
                    fole<<line<<endl;
                }
            }
            fole.close();
            file.close();


            file.open("../teacher/number.txt", ios::out);
            file<<"";
            file.close();
            file.open("../teacher/number.txt", ios::app);
            fole.open("../teacher/number1.txt", ios::in);
            while(getline(fole, line))
                file<<line<<endl;

            file.close();
            fole.close();
            remove("../student/number1.txt");
        }
        temp=0;//////////////////////////////////////////////////////////////////////level
        {
            file.open("../teacher/grade.txt", ios::in);
            fole.open("../teacher/grade1.txt", ios::out| ios::app);

            while(getline(file, line)){
                ++temp;
                if(temp == Position){

                    fole<<(ui->level->text()).toStdString()<<endl;
                }else{
                    fole<<line<<endl;
                }
            }
            fole.close();
            file.close();


            file.open("../teacher/grade.txt", ios::out);
            file<<"";
            file.close();
            file.open("../teacher/grade.txt", ios::app);
            fole.open("../teacher/grade1.txt", ios::in);
            while(getline(fole, line))
                file<<line<<endl;

            file.close();
            fole.close();
            remove("../teacher/grade1.txt");
        }
        temp=0;/////////////////////////////////////////////////////////////////////////ID
        {/*
        file.open("../student/id.txt", ios::in);
        fole.open("../student/id1.txt", ios::out| ios::app);

        while(getline(file, line)){
            ++temp;
            if(temp == Position){

                fole<<ui->lineEdit_ID<<endl;
            }else{
                fole<<line<<endl;
            }
        }
        fole.close();
        file.close();


        file.open("../student/id.txt", ios::out);
        file<<"";
        file.close();
        file.open("../student/id.txt", ios::app);
        fole.open("../student/id1.txt", ios::in);
        while(getline(fole, line))
            file<<line<<endl;

        file.close();
        fole.close();
        remove("../student/id1.txt");
    }*/
            temp=0;//////////////////////////////////////////////////////////////////////psswd
            {
                file.open("../teacher/psswd.txt", ios::in);
                fole.open("../teacher/psswd1.txt", ios::out| ios::app);

                while(getline(file, line)){
                    ++temp;
                    if(temp == Position){

                        fole<<(ui->password->text()).toStdString()<<endl;
                    }else{
                        fole<<line<<endl;
                    }
                }
                fole.close();
                file.close();


                file.open("../teacher/psswd.txt", ios::out);
                file<<"";
                file.close();
                file.open("../teacher/psswd.txt", ios::app);
                fole.open("../teacher/psswd1.txt", ios::in);
                while(getline(fole, line))
                    file<<line<<endl;

                file.close();
                fole.close();
                remove("../teacher/psswd1.txt");
            }


            teachers[Position-1].setLname((ui->Lname->text()).toStdString());
            teachers[Position-1].setFname( (ui->Fname->text()).toStdString());
            teachers[Position-1].setGrade((ui->level->text()).toStdString());
            teachers[Position-1].setNumber( (ui->number->text()).toInt());
            teachers[Position-1].setbday( ((ui->day->text()).toInt()),((ui->month->text()).toInt()),((ui->year->text()).toInt()));


            ui->lineEdit_Fname->clear();
            ui->lineEdit_Lname->clear();
            ui->lineEdit_ID->clear();
            ui->btnEdit->hide();
            ui->btnReset->hide();
            ui->btnDefault->hide();
            ui->btnLook->show();


            ui->Lname->clear();
            ui->Fname->clear();
            ui->level->clear();
            ui->number->clear();
            ui->day->clear();
            ui->year->clear();
            ui->month->clear();
            ui->password->clear();


            QMessageBox::information(this, "Edited", "Account edited with success");
        }


    }
}

