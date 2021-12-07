#include "listTabulations.h"
#include "ui_listTabulations.h"
#include <mainwindow.h>
#include <QFile>
#include <QTextStream>
#include <QtMath>
#include <QMessageBox>

table::table(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::table)
{
    ui->setupUi(this);
    QTextStream out(stdout);

    QFile file( "E:\StudyUniversaty\Course4\Semestry1\Qt-creator\QtCreatorLab\Laba7\list_tabul.txt");

    if (!file.open(QIODevice::ReadOnly))
    {
        QMessageBox msgWarning;
        msgWarning.setText("WARNING!\Файл відсутній!.");
        msgWarning.setIcon(QMessageBox::Warning);
        msgWarning.setWindowTitle("Error");
        msgWarning.exec();
    }

    QTextStream in(&file);

    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(1);

    QStringList headers;
    headers.append("tg(x)");

    ui->tableWidget->setHorizontalHeaderLabels(headers);
    ui->tableWidget->horizontalHeader()->setStretchLastSection(true);
    ui->tableWidget->setEditTriggers(QTableWidget::NoEditTriggers);

    while (!in.atEnd()) {

        QString line = in.readLine();
        ui->tableWidget->insertRow ( ui->tableWidget->rowCount() );
        ui->tableWidget->setItem   ( ui->tableWidget->rowCount()-1, 0, new QTableWidgetItem(line));
                        }
    file.close();
}

void table::on_pushButton_2_clicked()
{
    MainWindow *k = new MainWindow ;
    k->show();
    this->close();
}

    table::~table()
    {
      delete ui;
    }



