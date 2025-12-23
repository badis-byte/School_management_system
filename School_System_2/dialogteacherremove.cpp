#include "dialogteacherremove.h"
#include "ui_dialogteacherremove.h"
#include "staff.h"
#include <QMessageBox>

DialogTeacherRemove::DialogTeacherRemove(QWidget *parent, Student*  students, Teacher* teachers)
    : QDialog(parent)
    , ui(new Ui::DialogTeacherRemove)
{
    ui->setupUi(this);
    this->students= students;
    this->teachers= teachers;

    ui->btnReset->hide();
    ui->btnLook_2->hide();
}

DialogTeacherRemove::~DialogTeacherRemove()
{
    delete ui;
}

void DialogTeacherRemove::on_btnLook_clicked()
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
        //Position= count;
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
                file.open("..\\teacher\\grade.txt", ios::in);
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

                Position= b;

                ui->listWidget_2->addItem(lname+" "+fname);
                ui->listWidget_2->addItem(ID);
                ui->listWidget_2->addItem(grade);
                ui->listWidget_2->addItem(birth);
                ui->listWidget_2->addItem(number);

                ui->btnReset->show();
                ui->btnLook->hide();
                ui->btnLook_2->show();
            }else{
                QMessageBox::warning(this, "Not Found", "No account with such Information usr");
            }
        }else{
            QMessageBox::warning(this, "Not Found", "No account with such Information id");
        }

    }


void DialogTeacherRemove::on_btnLook_2_clicked()
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
            if(temp == Position)
                continue;

            fole<<line<<endl;
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
            if(temp == Position)
                continue;

            fole<<line<<endl;
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
            if(temp == Position)
                continue;

            fole<<line<<endl;
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
    {
        file.open("../teacher/birth.txt", ios::in);
        fole.open("../teacher/birth1.txt", ios::out| ios::app);

        while(getline(file, line)){
            ++temp;
            if(temp == Position)
                continue;

            fole<<line<<endl;
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
    }
    temp=0;/////////////////////////////////////////////////////////////////////number
    {
        file.open("../teacher/number.txt", ios::in);
        fole.open("../teacher/number1.txt", ios::out| ios::app);

        while(getline(file, line)){
            ++temp;
            if(temp == Position)
                continue;

            fole<<line<<endl;
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
        remove("../teacher/number1.txt");
    }
    temp=0;//////////////////////////////////////////////////////////////////////level
    {
        file.open("../teacher/grade.txt", ios::in);
        fole.open("../teacher/grade1.txt", ios::out| ios::app);

        while(getline(file, line)){
            ++temp;
            if(temp == Position)
                continue;

            fole<<line<<endl;
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
    {
        file.open("../teacher/id.txt", ios::in);
        fole.open("../teacher/id1.txt", ios::out| ios::app);

        while(getline(file, line)){
            ++temp;
            if(temp == Position)
                continue;

            fole<<line<<endl;
        }
        fole.close();
        file.close();


        file.open("../teacher/id.txt", ios::out);
        file<<"";
        file.close();
        file.open("../teacher/id.txt", ios::app);
        fole.open("../teacher/id1.txt", ios::in);
        while(getline(fole, line))
            file<<line<<endl;

        file.close();
        fole.close();
        remove("../teacher/id1.txt");
    }
    temp=0;//////////////////////////////////////////////////////////////////////psswd
    {
        file.open("../teacher/psswd.txt", ios::in);
        fole.open("../teacher/psswd1.txt", ios::out| ios::app);

        while(getline(file, line)){
            ++temp;
            if(temp == Position)
                continue;

            fole<<line<<endl;
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

    fstream total;
    total.open("..\\teacher\\total.txt", ios::in);
    string num;
    total>>num;
    qDebug()<<num;
    int ttl= stoi(num);
    total.close();
    total.open("..\\teacher\\total.txt", ios::out);
    total<<to_string(ttl-1);
    total.close();

    for(int i=Position-1; i<ttl-1; ++i)
        teachers[i]=teachers[i+1];

    ui->lineEdit_Fname->clear();
    ui->lineEdit_Lname->clear();
    ui->lineEdit_ID->clear();
    ui->btnLook_2->hide();
    ui->btnLook->show();

    for(int i=0;i<5;++i)
        ui->listWidget_2->takeItem(0);

    QMessageBox::information(this, "Deleted", "Account deleted with success");
}


void DialogTeacherRemove::on_btnReset_clicked()
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

