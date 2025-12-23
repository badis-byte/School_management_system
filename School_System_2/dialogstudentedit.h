#ifndef DIALOGSTUDENTEDIT_H
#define DIALOGSTUDENTEDIT_H

#include <QDialog>
#include "staff.h"

namespace Ui {
class DialogStudentEdit;
}

class DialogStudentEdit : public QDialog
{
    Q_OBJECT

public:
    explicit DialogStudentEdit(QWidget *parent = nullptr, Student* student= nullptr);
    ~DialogStudentEdit();

private slots:
    void on_btnLook_clicked();

    void on_btnDefault_clicked();

    void on_btnReset_clicked();

    void on_btnEdit_clicked();

private:
    Ui::DialogStudentEdit *ui;
    Student* students;
    int Position;
    QString lnamee;
    QString fnamee;
    QString numberr;
    QString dayy;
    QString monthh;
    QString yearr;
    QString passwordd;
    QString levell;
};

#endif // DIALOGSTUDENTEDIT_H
