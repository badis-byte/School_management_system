#ifndef DIALOGSTUDENTMENU_H
#define DIALOGSTUDENTMENU_H

#include <QDialog>

#include "staff.h"

namespace Ui {
class DialogStudentMenu;
}

class DialogStudentMenu : public QDialog
{
    Q_OBJECT

public:
    explicit DialogStudentMenu(QWidget *parent = nullptr, Student student= Student());
    ~DialogStudentMenu();

private slots:


private:
    Ui::DialogStudentMenu *ui;
    Student student;
};

#endif // DIALOGSTUDENTMENU_H
