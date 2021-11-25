#include "pifagor.h"
#include "ui_pif.h"
#include <QtMath>

pif::pif(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pif)
{
    ui->setupUi(this);
}

pif::~pif()
{
    delete ui;
}

void pif::on_clcBtn_clicked()
{
    auto leg1 = this->ui->leg1->value();
    auto leg2 = this->ui->leg2->value();
    auto res = "Гіпотенуза = " + QString::number(qSqrt(leg1*leg1 + leg2*leg2)) + "\n";
    this->mainWin->setLabel(res);
    this->mainWin->show();
    this->hide();
}
