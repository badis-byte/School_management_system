#ifndef DIALOGTEACHERMENU_H
#define DIALOGTEACHERMENU_H

#include <QDialog>
#include <staff.h>

namespace Ui {
class DialogTeacherMenu;
}

class DialogTeacherMenu : public QDialog
{
    Q_OBJECT

public:
    explicit DialogTeacherMenu(QWidget *parent = nullptr, Teacher teacher= Teacher());
    ~DialogTeacherMenu();

private slots:

private:
    Ui::DialogTeacherMenu *ui;
    Teacher teacher;
};

#endif // DIALOGTEACHERMENU_H
