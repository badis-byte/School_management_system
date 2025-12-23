#ifndef DIALOGSTUDENTREMOVE_H
#define DIALOGSTUDENTREMOVE_H

#include <QDialog>
#include "staff.h"

namespace Ui {
class DialogStudentRemove;
}

class DialogStudentRemove : public QDialog
{
    Q_OBJECT

public:
    explicit DialogStudentRemove(QWidget *parent = nullptr, Student* students= nullptr, Teacher* teachers= nullptr);
    ~DialogStudentRemove();

private slots:
    void on_btnLook_clicked();

    void on_btnReset_clicked();

    void on_btnLook_2_clicked();

private:
    Ui::DialogStudentRemove *ui;
    Student* students;
    Teacher* teachers;
    int Position;
};

#endif // DIALOGSTUDENTREMOVE_H
