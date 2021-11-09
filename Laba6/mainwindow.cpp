#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>
#include <QDateTime>

static QTime time2, sec(0,0,0);
static QString text2;
static bool tem = 1, q = 1, i = 0;
static QTimer *time_1 = new QTimer();

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QTimer *time = new QTimer(this);

    connect(time, SIGNAL(timeout()), this, SLOT(showTime()) );
    time -> start();
    ui -> pushButton_2 -> setVisible(0);
    ui -> timeEdit -> setVisible(0);
    ui -> label_3 -> setVisible(0);
    ui -> label_4 -> setVisible(0);

    QDateTime dateTime=QDateTime::currentDateTime();
    QString datetimetext=dateTime.toString();
    ui->label_4->setText(datetimetext);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::showTime()
{
    QTime time = QTime::currentTime();
    QString time_text = time.toString("hh : mm : ss");
    ui->label->setText(time_text);
    if (time2 == QTime(QTime::currentTime().hour(), QTime::currentTime().minute()))
    {
        ui->label_3->setText("ALARM \a");
        ui -> pushButton -> setText("Будильник");
        i = 0;
        ui -> pushButton -> setVisible(1);
        ui -> pushButton_2 -> setVisible(0);
    }
}

void MainWindow::showSecund()
{
    QString time_text_1 = sec.toString("hh : mm : ss");
    ui->label_2->setText(time_text_1);
    sec = sec.addSecs(1);

}

void MainWindow::on_pushButton_clicked()
{
    if (i) { i = 0;  ui -> timeEdit -> setVisible(0); ui -> label_3 -> setVisible(1);
        ui -> pushButton -> setText("EDIT");
        ui -> pushButton_2 -> setVisible(1);}
    else { i = 1;  ui -> timeEdit -> setVisible(1); ui -> label_3 -> setVisible(0);
        ui -> pushButton -> setText("SAVE");}

    time2 = ui->timeEdit->time();
    text2 = time2.toString("hh:mm");
    ui->label_3->setText ( text2);
}

void MainWindow::on_pushButton_2_clicked()
{
    ui -> pushButton_2 -> setVisible(0);
    ui -> pushButton -> setText("Будильник");
    ui -> timeEdit -> setVisible(0); ui -> label_3 -> setVisible(0);
    ui->label_3 -> setVisible(0);
    ui -> pushButton -> setVisible(1);
}

void MainWindow::on_pushButton_3_clicked()
{
    if (q) {
        connect(time_1, SIGNAL(timeout()), this, SLOT(showSecund()) );
        time_1 -> start(17);
        ui->pushButton_4->setVisible(1); ui->pushButton_3->setText("STOP");   q = 0;
    }

    else    {
        disconnect(time_1, SIGNAL(timeout()), this, SLOT(showSecund()) );
        q = 1; ui->pushButton_3->setText("START"); sec.setHMS(0,0,0,0);
    }
}

void MainWindow::on_pushButton_4_clicked()
{
    if (tem) {
        ui->label ->setStyleSheet("font: 20pt MS Serif; color:   rgb(0,128,0)");
        ui->label_2 ->setStyleSheet("font: 20pt MS Serif; color:   rgb(0,128,0)");
        ui->label_3 ->setStyleSheet("font: 20pt MS Serif; color:   rgb(0,128,0)");
        ui->label_4 ->setStyleSheet("font: 20pt MS Serif; color:   rgb(0,128,0)");
        ui->pushButton_4->setText("Підсвітка ON");
        tem = 0; }

    else {     ui->centralwidget->setStyleSheet("background-color: rgb(240, 240, 240)");
        ui->pushButton_4->setText("Підсвітка OFF");
        ui->label ->setStyleSheet("font: 20pt MS Serif; color:   rgb(0, 0, 0)");
        ui->label_2 ->setStyleSheet("font: 20pt MS Serif; color:   rgb(0, 0, 0)");
        ui->label_3 ->setStyleSheet("font: 20pt MS Serif; color:   rgb(0, 0, 0)");
        ui->label_4 ->setStyleSheet("font: 20pt MS Serif; color:   rgb(0, 0, 0)");
        tem = 1;
    }
}

void MainWindow::on_pushButton_5_clicked()
{

    if (q)  {
        ui->label_4->show();   q = 0;
    }
    else    {
        ui->label_4->hide();   q = 1;}

}
