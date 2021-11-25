#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "area.h"
#include "pifagor.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setLabel(QString value)
{
    this->ui->resultLbl->setText("Результат: " + value);
}

void MainWindow::on_pushButton_clicked()
{
    this->hide();
    square sq;
    sq.mainWin = this;
    sq.setModal(true);
    sq.exec();

}

void MainWindow::on_pushButton_2_clicked()
{
    this->hide();
    pif pif;
    pif.mainWin = this;
    pif.setModal(true);
    pif.exec();

}
