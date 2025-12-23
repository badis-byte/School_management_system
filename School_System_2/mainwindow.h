#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "staff.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_admin_clicked();

    void on_teacherstudent_clicked();

private:
    Ui::MainWindow *ui;
    Student* students;
    Teacher* teachers;
};
#endif // MAINWINDOW_H
