#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include<dialog.h>
#include<mainwindow1.h>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_2_clicked();


private:
    Ui::MainWindow *ui;
    Dialog *d;
    MainWindow1 *m;
};
#endif // MAINWINDOW_H
