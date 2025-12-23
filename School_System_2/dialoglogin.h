#ifndef DIALOGLOGIN_H
#define DIALOGLOGIN_H

#include <QDialog>
#include "staff.h"

namespace Ui {
class DialogLogin;
}

class DialogLogin : public QDialog
{
    Q_OBJECT

public:
    explicit DialogLogin(QWidget *parent = nullptr, Student* students = nullptr, Teacher* teachers = nullptr);
    ~DialogLogin();

private slots:

    void on_login_clicked();

    void on_radioteacher_toggled(bool checked);

    void on_radiostudent_toggled(bool checked);

private:
    Ui::DialogLogin *ui;
    Student* students;
    Teacher* teachers;
};

#endif // DIALOGLOGIN_H
