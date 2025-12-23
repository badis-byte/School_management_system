#include "dialogstudentedit.h"
#include "ui_dialogstudentedit.h"

#include "staff.h"
#include <iostream>
#include <fstream>
#include <QString>
#include <QMessageBox>


bool checkdate(int d, int m, int y){
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









































DialogStudentEdit::DialogStudentEdit(QWidget *parent, Student* students)
    : QDialog(parent)
    , ui(new Ui::DialogStudentEdit)
{
    ui->setupUi(this);
    this->students= students;
    ui->btnDefault->hide();
    ui->btnReset->hide();
    ui->btnEdit->hide();
}

DialogStudentEdit::~DialogStudentEdit()
{
    delete ui;
}

void DialogStudentEdit::on_btnLook_clicked()
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
    file.open("..\\student\\id.txt", ios::in);
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
        file.open("..\\student\\usr.txt", ios::in);
        while(count!=0 &&getline(file, realusr)){
            --count;
        }
        file.close();
        if(realusr== attemptusr){
            a=b;
            QString birth;
            file.open("..\\student\\birth.txt", ios::in);
            while(a!=0 &&getline(file, temp)){
                --a;
            }
            birth= QString::fromStdString(temp);
            file.close();

            a=b;
            QString ID;
            file.open("..\\student\\id.txt", ios::in);
            while(a!=0 &&getline(file, temp)){
                --a;
            }
            ID= QString::fromStdString(temp);
            file.close();

            a=b;
            QString level;
            file.open("..\\student\\level.txt", ios::in);
            while(a!=0 &&getline(file, temp) ){
                --a;
            }
            level= QString::fromStdString(temp);
            file.close();

            a=b;
            QString number;
            file.open("..\\student\\number.txt", ios::in);
            while(a!=0 &&getline(file, temp) ){
                --a;
            }
            number= QString::fromStdString(temp);
            file.close();

            a=b;
            QString password;
            file.open("..\\student\\psswd.txt", ios::in);
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
            ui->level->setText(level);
            ui->number->setText(number);
            ui->day->setText(  birthd.left(2));
            ui->year->setText( birthy.right(4));
            ui->month->setText( birthy.mid(3, 2));
            ui->password->setText( password);

            lnamee= lname;
            fnamee=fname;
            levell=level;
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


void DialogStudentEdit::on_btnDefault_clicked()
{
    ui->Lname->setText(lnamee);
    ui->Fname->setText(fnamee);
    ui->level->setText(levell);
    ui->number->setText(numberr);
    ui->day->setText(  dayy);
    ui->year->setText( yearr);
    ui->month->setText( monthh);
    ui->password->setText( passwordd);
}


void DialogStudentEdit::on_btnReset_clicked()
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


void DialogStudentEdit::on_btnEdit_clicked()
{




    fstream file;
    string line;
    int temp=0;
    fstream fole;


    ////////////////////////////////////////////////////////////////////////usr
    {
        file.open("../student/usr.txt", ios::in);
        fole.open("../student/usr1.txt", ios::out| ios::app);

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


        file.open("../student/usr.txt", ios::out);
        file<<"";
        file.close();
        file.open("../student/usr.txt", ios::app);
        fole.open("../student/usr1.txt", ios::in);
        while(getline(fole, line))
            file<<line<<endl;

        file.close();
        fole.close();
        remove("../student/usr1.txt");
    }
    temp=0;//////////////////////////////////////////////////////////////////////fname
    {
        file.open("../student/fname.txt", ios::in);
        fole.open("../student/fname1.txt", ios::out| ios::app);

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


        file.open("../student/fname.txt", ios::out);
        file<<"";
        file.close();
        file.open("../student/fname.txt", ios::app);
        fole.open("../student/fname1.txt", ios::in);
        while(getline(fole, line))
            file<<line<<endl;

        file.close();
        fole.close();
        remove("../student/fname1.txt");
    }
    temp=0;//////////////////////////////////////////////////////////////////////lname
    {
        file.open("../student/lname.txt", ios::in);
        fole.open("../student/lname1.txt", ios::out| ios::app);

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


        file.open("../student/lname.txt", ios::out);
        file<<"";
        file.close();
        file.open("../student/lname.txt", ios::app);
        fole.open("../student/lname1.txt", ios::in);
        while(getline(fole, line))
            file<<line<<endl;

        file.close();
        fole.close();
        remove("../student/lname1.txt");
    }
    temp=0;//////////////////////////////////////////////////////////////////////birth

        if(!checkdate( ((ui->day->text()).toInt()),((ui->month->text()).toInt()),((ui->year->text()).toInt()))){
            QMessageBox::warning(this, "Invalid Date", "the date you provided is not valid");
        }else{
        file.open("../student/birth.txt", ios::in);
        fole.open("../student/birth1.txt", ios::out| ios::app);

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


        file.open("../student/birth.txt", ios::out);
        file<<"";
        file.close();
        file.open("../student/birth.txt", ios::app);
        fole.open("../student/birth1.txt", ios::in);
        while(getline(fole, line))
            file<<line<<endl;

        file.close();
        fole.close();
        remove("../student/birth1.txt");

    temp=0;/////////////////////////////////////////////////////////////////////number
    {
        file.open("../student/number.txt", ios::in);
        fole.open("../student/number1.txt", ios::out| ios::app);

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


        file.open("../student/number.txt", ios::out);
        file<<"";
        file.close();
        file.open("../student/number.txt", ios::app);
        fole.open("../student/number1.txt", ios::in);
        while(getline(fole, line))
            file<<line<<endl;

        file.close();
        fole.close();
        remove("../student/number1.txt");
    }
    temp=0;//////////////////////////////////////////////////////////////////////level
    {
        file.open("../student/level.txt", ios::in);
        fole.open("../student/level1.txt", ios::out| ios::app);

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


        file.open("../student/level.txt", ios::out);
        file<<"";
        file.close();
        file.open("../student/level.txt", ios::app);
        fole.open("../student/level1.txt", ios::in);
        while(getline(fole, line))
            file<<line<<endl;

        file.close();
        fole.close();
        remove("../student/level1.txt");
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
        file.open("../student/psswd.txt", ios::in);
        fole.open("../student/psswd1.txt", ios::out| ios::app);

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


        file.open("../student/psswd.txt", ios::out);
        file<<"";
        file.close();
        file.open("../student/psswd.txt", ios::app);
        fole.open("../student/psswd1.txt", ios::in);
        while(getline(fole, line))
            file<<line<<endl;

        file.close();
        fole.close();
        remove("../student/psswd1.txt");
    }


    students[Position-1].setLname((ui->Lname->text()).toStdString());
    students[Position-1].setFname( (ui->Fname->text()).toStdString());
    students[Position-1].setLevel( (ui->level->text()).toInt());
    students[Position-1].setNumber( (ui->number->text()).toInt());
    students[Position-1].setbday( ((ui->day->text()).toInt()),((ui->month->text()).toInt()),((ui->year->text()).toInt()));


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

