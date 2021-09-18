#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent):
    QMainWindow(parent),
      ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setProperty("currentState", 0);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QPushButton *button = static_cast<QPushButton*>(sender());
        int state = button->property("currentState").toInt();
        if(state == 0) {
            ui->pushButton_2->setText("Click One");
            button->setProperty("currentState", 1);
        } else if(state == 1) {
           ui->pushButton_2->setText("Click Two");
           button->setProperty("currentState", 2);
        } else if(state == 2) {
            ui->pushButton_2->setText("Click Three");
            button->setProperty("currentState", 3);
        } else if(state == 3) {
            ui->pushButton_2->setText("Click For");
            button->setProperty("currentState", 4);
        } else if(state == 4) {
            ui->pushButton_2->setText("Click Five");
            button->setProperty("currentState", 5);
        } else if(state == 5) {
            ui->pushButton_2->setText("Click Six");
            button->setProperty("currentState", 6);
        } else {
            ui->pushButton_2->setText("Click Stop");
        }
}
