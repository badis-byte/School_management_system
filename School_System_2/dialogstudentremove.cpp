#include "dialogstudentremove.h"
#include "ui_dialogstudentremove.h"
#include "staff.h"
#include <string>
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <QString>
#include <QMessageBox>

DialogStudentRemove::DialogStudentRemove(QWidget *parent, Student* students, Teacher* teachers)
    : QDialog(parent)
    , ui(new Ui::DialogStudentRemove)
{
    ui->setupUi(this);
    this->students= students;
    this->teachers= teachers;

    ui->btnReset->hide();
    ui->btnLook_2->hide();
}

DialogStudentRemove::~DialogStudentRemove()
{
    delete ui;
}

void DialogStudentRemove::on_btnLook_clicked()
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

            Position= b;

            ui->listWidget_2->addItem(lname+" "+fname);
            ui->listWidget_2->addItem(ID);
            ui->listWidget_2->addItem("Year "+level);
            ui->listWidget_2->addItem(birth);
            ui->listWidget_2->addItem(number);

            ui->btnReset->show();
            ui->btnLook->hide();
            ui->btnLook_2->show();
        }else{
            QMessageBox::warning(this, "Not Found", "No account with such Information");
        }
    }else{
        QMessageBox::warning(this, "Not Found", "No account with such Information");
    }

}


void DialogStudentRemove::on_btnReset_clicked()
{
    for(int i=0;i<5;++i)
    ui->listWidget_2->takeItem(0);

    ui->lineEdit_Fname->clear();
    ui->lineEdit_Lname->clear();
    ui->lineEdit_ID->clear();
    ui->btnLook_2->hide();
    ui->btnLook->show();
    ui->btnReset->hide();

}


void DialogStudentRemove::on_btnLook_2_clicked()
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
        if(temp == Position)
            continue;

        fole<<line<<endl;
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
        if(temp == Position)
            continue;

        fole<<line<<endl;
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
        if(temp == Position)
            continue;

        fole<<line<<endl;
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
    {
    file.open("../student/birth.txt", ios::in);
    fole.open("../student/birth1.txt", ios::out| ios::app);

    while(getline(file, line)){
        ++temp;
        if(temp == Position)
            continue;

        fole<<line<<endl;
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
}
    temp=0;/////////////////////////////////////////////////////////////////////number
    {
    file.open("../student/number.txt", ios::in);
    fole.open("../student/number1.txt", ios::out| ios::app);

    while(getline(file, line)){
        ++temp;
        if(temp == Position)
            continue;

        fole<<line<<endl;
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
        if(temp == Position)
            continue;

        fole<<line<<endl;
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
    {
        file.open("../student/id.txt", ios::in);
    fole.open("../student/id1.txt", ios::out| ios::app);

    while(getline(file, line)){
        ++temp;
        if(temp == Position)
            continue;

        fole<<line<<endl;
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
    }
    temp=0;//////////////////////////////////////////////////////////////////////psswd
    {
        file.open("../student/psswd.txt", ios::in);
    fole.open("../student/psswd1.txt", ios::out| ios::app);

    while(getline(file, line)){
        ++temp;
        if(temp == Position)
            continue;

        fole<<line<<endl;
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

    fstream total;
    total.open("..\\student\\total.txt", ios::in);
    string num;
    total>>num;
    qDebug()<<num;
    int ttl= stoi(num);
    total.close();
    total.open("..\\student\\total.txt", ios::out);
    total<<to_string(ttl-1);
    total.close();

    for(int i=Position-1; i<ttl-1; ++i)
        students[i]=students[i+1];

    ui->lineEdit_Fname->clear();
    ui->lineEdit_Lname->clear();
    ui->lineEdit_ID->clear();
    ui->btnLook_2->hide();
    ui->btnLook->show();

    for(int i=0;i<5;++i)
        ui->listWidget_2->takeItem(0);

    QMessageBox::information(this, "Deleted", "Account deleted with success");
}

