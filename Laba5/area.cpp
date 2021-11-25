#include "area.h"
#include "ui_square.h"

square::square(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::square)
{
    ui->setupUi(this);
    this->ui->sqrBtn->setChecked(true);
}

square::~square()
{
    delete ui;
}

void square::on_calcBtn_clicked()
{
    if(this->ui->sqrBtn->isChecked()){
        auto sideA = this->ui->sideA->value();
        auto sideB = this->ui->sideB->value();
        auto res = "Площа = " + QString::number(sideA * sideB) + "\n";
        this->mainWin->setLabel(res);
    }
    if(this->ui->perimBtn->isChecked()){
        auto sideA = this->ui->sideA->value();
        auto sideB = this->ui->sideB->value();
        auto res = "Периметр = " + QString::number(sideA * 2 + sideB * 2) + "\n";
        this->mainWin->setLabel(res);
    }
    this->mainWin->show();
    this->hide();

}
