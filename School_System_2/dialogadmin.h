#ifndef DIALOGADMIN_H
#define DIALOGADMIN_H

#include <QDialog>
#include "staff.h"

namespace Ui {
class DialogAdmin;
}

class DialogAdmin : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAdmin(QWidget *parent = nullptr, Student* = nullptr, Teacher* = nullptr);
    ~DialogAdmin();

private slots:

    void on_reg_student_clicked();

    void on_reg_teacher_clicked();

    void on_rmv_student_clicked();

    void on_rmv_teacher_clicked();

    void on_rmv_student_2_clicked();

    void on_rmv_teacher_2_clicked();

    void on_radioButton_2_clicked();

    void on_radioButton_clicked();

private:
    Ui::DialogAdmin *ui;
    Student* students;
    Teacher* teachers;
};

#endif // DIALOGADMIN_H
