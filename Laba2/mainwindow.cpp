#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <time.h>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    srand (time(NULL));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_btn1_clicked()
{
    int newRandPositionX = rand()%250+700;
    int newRandPositionY = rand()%500+100;
    int newSizeButtonX = rand()%250+50;
    int newSizeButtonY = rand()%200+100;
    this->scoreCountButton1++;
    ui->scoreCountButton1->setText( QString::fromStdString(std::to_string(scoreCountButton1)));
    ui->btn2->setEnabled(true);
    ui->btn1->setEnabled(false);
    ui->btn1->hide();
    ui->btn2->show();
    ui->btn2->setGeometry(newRandPositionX,newRandPositionY,newSizeButtonX,newSizeButtonY);
}

void MainWindow::on_btn2_clicked()
{
    int newRandPositionX = rand()%325+100;
    int newRandPositionY = rand()%150+50;
    int newSizeButtonX = rand()%250+100;
    int newSizeButtonY = rand()%250+150;
    this->scoreCountButton2++;
    ui->scoreCountButton2->setText( QString::fromStdString(std::to_string(scoreCountButton2)));
    ui->btn1->setEnabled(true);
    ui->btn2->setEnabled(false);
    ui->btn2->hide();
    ui->btn1->show();
    ui->btn1->setGeometry(newRandPositionX,newRandPositionY,newSizeButtonX,newSizeButtonY);
}
