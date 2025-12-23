#ifndef STAFF_H
#define STAFF_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Birthday{
public:

    Birthday(){}

    Birthday(int dayy, int monthh, int yearr):day(dayy), month(monthh), year(yearr)
    {

    }

    string stringBirth(){
        string a= to_string(day)+"/"+to_string(month)+"/"+to_string(year);
        return a;
    }

    void setbirth( int d, int m, int y){
        day=d;
        month=m;
        year=y;
    }

    void print(){
        cout<<day<<"/"<<month<<"/"<<year<<endl;
    }

private:
    int day, month, year;
};

class Module{
public:
    Module(){}
    Module(string namee, int levell):name(namee), level(levell){}
private:
    string name;
    int level;
};

class Staff{

    public:

        Staff(){}

        Staff(string Fnamee, string Lnamee,int day, int month, int year, int numberr):bday(day,month,year), Fname(Fnamee), Lname(Lnamee), number(numberr)
        {

        }

        static int staticstaff(){
            return STi;
        }

        static void staticstaff(int){
            STi++;
        }

        std::string getFname() const {
            return Fname;
        }

        void setFname(const std::string& Fnamee) {
            Fname = Fnamee;
        }

        std::string getLname() const {
            return Lname;
        }

        void setLname(const std::string& Lnamee) {
            Lname = Lnamee;
        }

        int getNumber() const {
            return number;
        }

        void setNumber(int numberr) {
            number = numberr;
        }

        string getBirth(){
            return bday.stringBirth();
        }

        void setbday( int d, int m, int y){
            bday.setbirth(d,m,y);
        }
    protected:
        string Fname, Lname;
        Module module[10];
        static int STi;
        Birthday bday;

        int number;

    };


class Student : public Staff{
public:
    Student(){

    }

    Student(string Fnamee, string Lnamee,int day, int month, int year, int numberr, int levell, int pos):Staff(Fnamee,Lnamee,day,month,year,numberr),
        level(levell), position(pos){
        staticstudent(5);
        ID= staticstudent();
    }

    Student(string Fnamee, string Lnamee,int day, int month, int year, int numberr, int levell, int pos, int IDD):Staff(Fnamee,Lnamee,day,month,year,numberr),
        ID(IDD), level(levell){
        Si= IDD;
    }

    static int staticstudent(){
        return Si;
    }

    static void staticstudent(int){
        ++Si;
    }

    int getID() const {
        return ID;
    }

    void setID(int id) {
        ID = id;
    }

    int getLevel() const {
        return level;
    }

    void setLevel(int lvl) {
        level = lvl;
    }

private:
    int ID;
    int level, position;
    static int Si;

    };



class Teacher : public Staff{
public:
    Teacher(){

    }

    Teacher(string Fnamee, string Lnamee,int day, int month, int year, int numberr, string gradee, int pos):Staff(Fnamee,Lnamee,day,month,year,numberr),
        position(pos), grade(gradee){
        staticteacher(5);
        ID=staticteacher();
    }

    Teacher(string Fnamee, string Lnamee,int day, int month, int year, int numberr, string gradee,int pos, int IDD):Staff(Fnamee,Lnamee,day,month,year,numberr),
        ID(IDD), grade(gradee){
        Ti= IDD;
    }

    static int staticteacher(){
        return Ti;
    }

    static void staticteacher(int){
        ++Ti;
    }

    int getID() const {
        return ID;
    }

    void setID(int id) {
        ID = id;
    }

    std::string getGrade() const {
        return grade;
    }

    void setGrade(const std::string& gr) {
        grade = gr;
    }


private:
    int ID, position;
    string grade;
    static int Ti;

};





















/*
class registerManager{

public:
    registerManager(){}

    Student Sregisterr(){
        Student::staticstudent(1);

        cout<<"First Name: ";   cin>>Fname;
        cout<<"Last Name: ";   cin>>Lname;
        cout<<"Year of birth: ";   cin>>year;
        cout<<"month of birth: ";   cin>>month;
        cout<<"day of birth: ";   cin>>day;
        cout<<"Level ";   cin>>level;
        cout<<"number";   cin>>number;
        /////////////////////////////////////////////////////////////////////////////////////////////


        cout <<"create a password for this account: \n";    cin>>psswd;
        fstream file("..\\student\\usr.txt", ios::out|ios::app);
        file<<Lname+" "+Fname<<endl;
        file.close();

        file.open("..\\student\\psswd.txt", ios::out|ios::app);
        file<<psswd<<endl;
        file.close();


        /////////////////////////////////////////////////////////////////////////////////////////////
        return Student( Fname, Lname,day,  month,  year,  number,  level, Student::staticstudent()+1);
    }


    Teacher Tregisterr(){
        Teacher::staticteacher(1);

        cout<<"First Name: ";   cin>>Fname;
        cout<<"Last Name: ";   cin>>Lname;
        cout<<"Year of birth: ";   cin>>year;
        cout<<"month of birth: ";   cin>>month;
        cout<<"day of birth: ";   cin>>day;
        cout<<"grade ";   cin>>grade;
        cout<<"number";   cin>>number;
        /////////////////////////////////////////////////////////////////////////////////////////////


        cout <<"create a password for this account: \n";    cin>>psswd;
        fstream file("..\\teacher\\usr.txt", ios::out|ios::app);
        file<<Lname+" "+Fname<<endl;
        file.close();

        file.open("..\\teacher\\psswd.txt", ios::out|ios::app);
        file<<psswd<<endl;
        file.close();


        /////////////////////////////////////////////////////////////////////////////////////////////
        return Teacher( Fname, Lname,day,  month,  year,  number,  grade, Teacher::staticteacher()+1);
    }

private:

    int day, month, year;
    string Fname, Lname, psswd, grade;
    int level, number;
};
*/

#endif // STAFF_H
