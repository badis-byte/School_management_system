#ifndef DIALOGSTUDENTREGISTER_H
#define DIALOGSTUDENTREGISTER_H

#include <QDialog>
#include "staff.h"

namespace Ui {
class DialogStudentRegister;
}

class DialogStudentRegister : public QDialog
{
    Q_OBJECT

public:
    explicit DialogStudentRegister(QWidget *parent = nullptr, Student* students= nullptr, Teacher* teachers = nullptr);
    ~DialogStudentRegister();

private slots:
    void on_pushButton_rregister_clicked();

    void on_pushButton_clear_clicked();

private:
    Ui::DialogStudentRegister *ui;
    Student* students;
    Teacher* teachers;
};

#endif // DIALOGSTUDENTREGISTER_H
