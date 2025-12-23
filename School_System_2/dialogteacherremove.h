#ifndef DIALOGTEACHERREMOVE_H
#define DIALOGTEACHERREMOVE_H

#include <QDialog>
#include "staff.h"

namespace Ui {
class DialogTeacherRemove;
}

class DialogTeacherRemove : public QDialog
{
    Q_OBJECT

public:
    explicit DialogTeacherRemove(QWidget *parent = nullptr, Student*  students= nullptr, Teacher* teachers=nullptr);
    ~DialogTeacherRemove();

private slots:
    void on_btnLook_clicked();

    void on_btnLook_2_clicked();

    void on_btnReset_clicked();

private:
    Ui::DialogTeacherRemove *ui;
    Student* students;
    Teacher* teachers;
    int Position;
};

#endif // DIALOGTEACHERREMOVE_H
