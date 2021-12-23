#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFile>
#include <QTextStream>
#include <QtMath>
#include <listTabulations.h>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->doubleSpinBox_firstStep->setMinimum(-40);
    ui->doubleSpinBox_firstStep->setSingleStep(2);
    ui->doubleSpinBox_firstStep->setValue(2);

    ui->doubleSpinBox_lastStep->setMinimum(-40);
    ui->doubleSpinBox_lastStep->setSingleStep(2);
    ui->doubleSpinBox_lastStep->setValue(22);

    ui->doubleSpinBox_step->setSingleStep(0.1);
    ui->doubleSpinBox_step->setValue(2);
}

MainWindow::~MainWindow()
{
    delete ui;

}


void MainWindow::on_pushButton_clicked()
{
    QTextStream out(stdout);


    QString filename = "E:/StudyUniversaty/Course4/Semestry1/Qt-creator/QtCreatorLab/Laba7/list_tabul.txt";
    QFile file(filename);

    if (file.open(QIODevice::WriteOnly)) {
        QTextStream out(&file);

        double firstStep = ui->doubleSpinBox_firstStep->value();

        double lastStep = ui->doubleSpinBox_lastStep->value();
        double step = ui->doubleSpinBox_step->value();

        if(firstStep>lastStep) {
            double a;
            a=firstStep;
            firstStep=lastStep;
            lastStep=a;

        }

        for(double x = firstStep; x <= lastStep; x += step) {
            out << sin(x) << endl;
        }

        QMessageBox msgWarning;

        msgWarning.setText("Info!\nТабуляцію записано у файл!.");
        msgWarning.setIcon(QMessageBox::Information);
        msgWarning.setWindowTitle("OK");

        msgWarning.exec();

    }
    else     {
        QMessageBox msgWarning;
        msgWarning.setText("WARNING!\nФайлу не існує!.");
        msgWarning.setIcon(QMessageBox::Warning);
        msgWarning.setWindowTitle("Error");
        msgWarning.exec();
    }

    file.close();

    ui->pushButton->setEnabled(false);
    ui->doubleSpinBox_firstStep->setEnabled(false);
    ui->doubleSpinBox_lastStep->setEnabled(false);
    ui->doubleSpinBox_step->setEnabled(false);
}

void MainWindow::on_pushButton_2_clicked()
{
    table *w = new table ;
    w->show();
    this->close();
}
