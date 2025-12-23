#ifndef DIALOGTEACHERREGISTER_H
#define DIALOGTEACHERREGISTER_H

#include <QDialog>
#include "staff.h"

namespace Ui {
class DialogTeacherRegister;
}

class DialogTeacherRegister : public QDialog
{
    Q_OBJECT

public:
    explicit DialogTeacherRegister(QWidget *parent = nullptr, Student* students = nullptr, Teacher* teachers = nullptr);
    ~DialogTeacherRegister();

private slots:
    void on_pushButton_rregister_clicked();

    void on_pushButton_clear_clicked();

private:
    Ui::DialogTeacherRegister *ui;
    Student* students;
    Teacher* teachers;
};

#endif // DIALOGTEACHERREGISTER_H
