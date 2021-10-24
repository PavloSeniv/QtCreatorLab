#include "mainwindow.h"
#include "iostream"
#include "ui_mainwindow.h"
#include <time.h>

using namespace std;
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

void MainWindow::on_yesBtn_clicked()
{
    if(ui->cheatChkBox->isChecked()){
        exit(0);
        return;
    }

    int newPosX = rand()%200+360;
    int newPosY = rand()%400+70;
    auto newSizeX = ui->yesBtn->size();
    ui->yesBtn->setGeometry(newPosX,newPosY,newSizeX.width(),newSizeX.height());
}

void MainWindow::on_noBtn_clicked()
{
    exit(0);
}

