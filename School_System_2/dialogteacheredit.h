#ifndef DIALOGTEACHEREDIT_H
#define DIALOGTEACHEREDIT_H

#include <QDialog>
#include "staff.h"

namespace Ui {
class DialogTeacherEdit;
}

class DialogTeacherEdit : public QDialog
{
    Q_OBJECT

public:
    explicit DialogTeacherEdit(QWidget *parent = nullptr, Teacher* teachers= nullptr);
    ~DialogTeacherEdit();

private slots:
    void on_btnLook_clicked();

    void on_btnReset_clicked();

    void on_btnDefault_clicked();

    void on_btnEdit_clicked();

private:
    Ui::DialogTeacherEdit *ui;
    Teacher* teachers;
    int Position;
    QString lnamee;
    QString fnamee;
    QString numberr;
    QString dayy;
    QString monthh;
    QString yearr;
    QString passwordd;
    QString gradee;
};

#endif // DIALOGTEACHEREDIT_H
