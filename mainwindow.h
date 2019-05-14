#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
     void dig_pressed();

     void on_pushButton_13_pressed();

     void on_pushButton_17_pressed();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
