#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include <string>


int num1;
bool needS = false;
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //this->setCentralWidget(ui->textEdit);
    connect(ui->pushButton_2,SIGNAL(released()),this,SLOT(dig_pressed()));
    connect(ui->pushButton_3,SIGNAL(released()),this,SLOT(dig_pressed()));
    connect(ui->pushButton_6,SIGNAL(released()),this,SLOT(dig_pressed()));
    connect(ui->pushButton_7,SIGNAL(released()),this,SLOT(dig_pressed()));
    connect(ui->pushButton_8,SIGNAL(released()),this,SLOT(dig_pressed()));
    connect(ui->pushButton_10,SIGNAL(released()),this,SLOT(dig_pressed()));
    connect(ui->pushButton_11,SIGNAL(released()),this,SLOT(dig_pressed()));
    connect(ui->pushButton_12,SIGNAL(released()),this,SLOT(dig_pressed()));
    connect(ui->pushButton_14,SIGNAL(released()),this,SLOT(dig_pressed()));
    connect(ui->pushButton_15,SIGNAL(released()),this,SLOT(dig_pressed()));
    connect(ui->pushButton_16,SIGNAL(released()),this,SLOT(dig_pressed()));
    connect(ui->pushButton_0,SIGNAL(released()),this,SLOT(dig_pressed()));

    connect(ui->pushButton_4,SIGNAL(released()),this,SLOT(dig_pressed()));
    connect(ui->pushButton_13,SIGNAL(released()),this,SLOT(on_pushButton_13_pressed()));//add
    connect(ui->pushButton_5,SIGNAL(released()),this,SLOT(dig_pressed()));
    connect(ui->pushButton_9,SIGNAL(released()),this,SLOT(dig_pressed()));
    connect(ui->pushButton_17,SIGNAL(released()),this,SLOT(dig_pressed()));//equals
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::dig_pressed()
{
    //ui->textEdit->set;
    QPushButton * button = (QPushButton*)sender();
    //ui->label->setText(button->text());
    QString num1 = QString::number(ui->lcdNumber->intValue());
    QString num2 = (button->text());
    int num = (num1+num2).toInt();
  //  qDebug()<<nums;
    //int num = stoi(nums);
    //int numy = 0;
   // int numtemp= ((button->text()).toInt());
//    if(numtemp ==0)
//    {    QString num1y = QString::number(ui->lcdNumber->intValue());
//        QString num2y = (button->text());
//        numy = (num1y+num2y).toInt();
//    }
//    else
//        ui->lcdNumber->display(num);
    ui->lcdNumber->display(num);//+numtemp+numy);
}
//The Add function
void MainWindow::on_pushButton_13_pressed()
{
    QPushButton * button = (QPushButton*)sender();
    num1 = ui->lcdNumber->intValue();
    ui->lcdNumber->display(0);
    //ui->lcdNumber->display(num1);
    //ui->label->setText(button->text());
    //QString num1 = QString::number(ui->lcdNumber->intValue());
//    QString num2 = (button->text());
//    int sum2 = (num2).toInt();

//    ui->lcdNumber->display(sum1+sum2);
}
// The Equals Function
void MainWindow::on_pushButton_17_pressed()
{
    //ui->lcdNumber->display(0);
    int sum, num2;
    //QPushButton * button = (QPushButton*)sender();
    //QString s1 = QString::number(ui->lcdNumber->intValue());
    //QString s2 = (button->text());
    num2 = ui->lcdNumber->intValue();
    //num2 = (s1+s2).toInt();;
    sum = num1+num2;
    //qDebug<<sum;
    ui->lcdNumber->display(sum);
    needS = true;

}
