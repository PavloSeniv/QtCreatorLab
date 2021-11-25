#include "cinema_room.h"
#include "ui_cinema_room.h"
#include "description_seans.h"

#include <QDebug>
#include <QFile>
#include <QMessageBox>


static bool i;
static int j;
static int z1_s1[26][2];

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->photo_1 ->setPixmap(QPixmap(":movie_image/ghost_busters.jpg") );
    ui->photo_2 ->setPixmap(QPixmap(":movie_image/house_gucci.jpg") );
    ui->photo_3 ->setPixmap(QPixmap(":movie_image/nenast.jpg") );
    ui->photo_4 ->setPixmap(QPixmap(":movie_image/vichni.jpg") );
    ui->stackedWidget->setCurrentIndex(0);
    f2 = new seans;
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_small_hall_clicked()
{
    i = 1;
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_seans_1_clicked()
{
    if (i ==1)
        j = 1;
    else j = 5;
    f2->show_form(j, i);
    f2->open();
}

void MainWindow::on_seans_2_clicked()
{
    if (i ==1)
        j = 2;
    else j = 6;
    f2->show_form(j, i);
    f2->open();
}

void MainWindow::on_seans_3_clicked()
{
    if (i ==1)
        j = 3;
    else j = 7;
    f2->show_form(j,i);
    f2->open();
}

void MainWindow::on_seans_4_clicked()
{
    if (i ==1)
        j = 4;
    else j = 8;
    f2->show_form(j,i);
    f2->open();
}

void MainWindow::on_pushButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_info_1_clicked()
{
    QFile file1(":/movie_files/reservation_1.txt");
    QFile file2(":/movie_files/reservation_5.txt");
    int lich = 0;
    if (i == 1)
    {file1.open (QIODevice :: ReadOnly| QIODevice :: Text);
        if(file1.isOpen()  )
        {
            qDebug() << "File is open";
            while ( !file1.atEnd ())
            {
                z1_s1[lich][0]  = file1.read(1).toInt();
                lich++;
            }
            file1.close ();
        } else qDebug()<< "File is not open";}

    else {file2.open (QIODevice :: ReadOnly| QIODevice :: Text);
        if(file2.isOpen())
        {
            qDebug() << "File is open";
            while ( !file2.atEnd ())
            {
                z1_s1[lich][0]  = file2.read(1).toInt();
                lich++;
            }
            file2.close ();
        } else qDebug()<< "File is not open";}


    QFile file_k1(":/movie_files/sold_1.txt");
    QFile file_k2(":/movie_files/sold_5.txt");
    lich = 0;
    if (i == 1)
    {file_k1.open (QIODevice :: ReadOnly| QIODevice :: Text);
        if(file_k1.isOpen()  )
        {
            qDebug() << "File is open";
            while ( !file_k1.atEnd ())
            {
                z1_s1[lich][1]  = file_k1.read(1).toInt();
                lich++;
            }
            file_k1.close ();
        } else qDebug()<< "File is not open";}

    else {file_k2.open (QIODevice :: ReadOnly| QIODevice :: Text);
        if(file_k2.isOpen())
        {
            qDebug() << "File is open";
            while ( !file_k2.atEnd ())
            {
                z1_s1[lich][1]  = file_k2.read(1).toInt();
                lich++;
            }
            file_k2.close ();
        } else qDebug()<< "File is not open";}




    QFile film(":/movie_files/description_ghost_busters.txt");
    ui->stackedWidget->setCurrentIndex(2);
    ui->ph->setPixmap(QPixmap(":movie_image/ghost_busters.jpg") );

    film.open (QIODevice :: ReadOnly| QIODevice :: Text);
    if(film.isOpen()  )
    {
        qDebug() << "File is open";
        while ( !film.atEnd ())
        {
            ui->textBrowser->setText(film.readAll());
        }
        film.close ();
    }
    else qDebug()<< "File is not open";

}

void MainWindow::on_pushButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_info_2_clicked()
{
    QFile file1(":/movie_files/reservation_2.txt");
    QFile file2(":/movie_files/reservation_6.txt");
    int lich = 0;
    if (i == 1)
    {file1.open (QIODevice :: ReadOnly| QIODevice :: Text);
        if(file1.isOpen()  )
        {
            qDebug() << "File is open";
            while ( !file1.atEnd ())
            {
                z1_s1[lich][0]  = file1.read(1).toInt();
                lich++;
            }
            file1.close ();
        } else qDebug()<< "File is not open";}

    else {file2.open (QIODevice :: ReadOnly| QIODevice :: Text);
        if(file2.isOpen())
        {
            qDebug() << "File is open";
            while ( !file2.atEnd ())
            {
                z1_s1[lich][0]  = file2.read(1).toInt();
                lich++;
            }
            file2.close ();
        } else qDebug()<< "File is not open";}


    QFile file_k1(":/movie_files/sold_2.txt");
    QFile file_k2(":/movie_files/sold_6.txt");
    lich = 0;
    if (i == 1)
    {file_k1.open (QIODevice :: ReadOnly| QIODevice :: Text);
        if(file_k1.isOpen()  )
        {
            qDebug() << "File is open";
            while ( !file_k1.atEnd ())
            {
                z1_s1[lich][1]  = file_k1.read(1).toInt();
                lich++;
            }
            file_k1.close ();
        } else qDebug()<< "File is not open";}

    else {file_k2.open (QIODevice :: ReadOnly| QIODevice :: Text);
        if(file_k2.isOpen())
        {
            qDebug() << "File is open";
            while ( !file_k2.atEnd ())
            {
                z1_s1[lich][1]  = file_k2.read(1).toInt();
                lich++;
            }
            file_k2.close ();
        } else qDebug()<< "File is not open";}


    QFile film(":/movie_files/description_gucci.txt");
    ui->stackedWidget->setCurrentIndex(2);
    ui->ph->setPixmap(QPixmap(":movie_image/house_gucci.jpg") );

    film.open (QIODevice :: ReadOnly| QIODevice :: Text);
    if(film.isOpen()  )
    {
        qDebug() << "File is open";
        while ( !film.atEnd ())
        {
            ui->textBrowser->setText(film.readAll());
        }
        film.close ();
    }
    else qDebug()<< "File is not open";
}

void MainWindow::on_info_3_clicked()
{
    QFile file1(":/movie_files/reservation_3.txt");
    QFile file2(":/movie_files/reservation_7.txt");
    int lich = 0;
    if (i == 1)
    {file1.open (QIODevice :: ReadOnly| QIODevice :: Text);
        if(file1.isOpen()  )
        {
            qDebug() << "File is open";
            while ( !file1.atEnd ())
            {
                z1_s1[lich][0]  = file1.read(1).toInt();
                lich++;
            }
            file1.close ();
        } else qDebug()<< "File is not open";}

    else {file2.open (QIODevice :: ReadOnly| QIODevice :: Text);
        if(file2.isOpen())
        {
            qDebug() << "File is open";
            while ( !file2.atEnd ())
            {
                z1_s1[lich][0]  = file2.read(1).toInt();
                lich++;
            }
            file2.close ();
        } else qDebug()<< "File is not open";}


    QFile file_k1(":/movie_files/sold_3.txt");
    QFile file_k2(":/movie_files/sold_7.txt");
    lich = 0;
    if (i == 1)
    {file_k1.open (QIODevice :: ReadOnly| QIODevice :: Text);
        if(file_k1.isOpen()  )
        {
            qDebug() << "File is open";
            while ( !file_k1.atEnd ())
            {
                z1_s1[lich][1]  = file_k1.read(1).toInt();
                lich++;
            }
            file_k1.close ();
        } else qDebug()<< "File is not open";}

    else {file_k2.open (QIODevice :: ReadOnly| QIODevice :: Text);
        if(file_k2.isOpen())
        {
            qDebug() << "File is open";
            while ( !file_k2.atEnd ())
            {
                z1_s1[lich][1]  = file_k2.read(1).toInt();
                lich++;
            }
            file_k2.close ();
        } else qDebug()<< "File is not open";}


    QFile film(":/movie_files/description_neis.txt");
    ui->stackedWidget->setCurrentIndex(2);
    ui->ph->setPixmap(QPixmap(":movie_image/nenast.jpg") );

    film.open (QIODevice :: ReadOnly| QIODevice :: Text);
    if(film.isOpen()  )
    {
        qDebug() << "File is open";
        while ( !film.atEnd ())
        {
            ui->textBrowser->setText(film.readAll());
        }
        film.close ();
    }
    else qDebug()<< "File is not open";
}

void MainWindow::on_info_4_clicked()
{
    QFile file1(":/movie_files/reservation_4.txt");
    QFile file2(":/movie_files/reservation_8.txt");
    int lich = 0;
    if (i == 1)
    {file1.open (QIODevice :: ReadOnly| QIODevice :: Text);
        if(file1.isOpen()  )
        {
            qDebug() << "File is open";
            while ( !file1.atEnd ())
            {
                z1_s1[lich][0]  = file1.read(1).toInt();
                lich++;
            }
            file1.close ();
        } else qDebug()<< "File is not open";}

    else {file2.open (QIODevice :: ReadOnly| QIODevice :: Text);
        if(file2.isOpen())
        {
            qDebug() << "File is open";
            while ( !file2.atEnd ())
            {
                z1_s1[lich][0]  = file2.read(1).toInt();
                lich++;
            }
            file2.close ();
        } else qDebug()<< "File is not open";}


    QFile file_k1(":/movie_files/sold_4.txt");
    QFile file_k2(":/movie_files/sold_8.txt");
    lich = 0;
    if (i == 1)
    {file_k1.open (QIODevice :: ReadOnly| QIODevice :: Text);
        if(file_k1.isOpen()  )
        {
            qDebug() << "File is open";
            while ( !file_k1.atEnd ())
            {
                z1_s1[lich][1]  = file_k1.read(1).toInt();
                lich++;
            }
            file_k1.close ();
        } else qDebug()<< "File is not open";}

    else {file_k2.open (QIODevice :: ReadOnly| QIODevice :: Text);
        if(file_k2.isOpen())
        {
            qDebug() << "File is open";
            while ( !file_k2.atEnd ())
            {
                z1_s1[lich][1]  = file_k2.read(1).toInt();
                lich++;
            }
            file_k2.close ();
        } else qDebug()<< "File is not open";}


    QFile film(":/movie_files/description_vichi.txt");
    ui->stackedWidget->setCurrentIndex(2);
    ui->ph->setPixmap(QPixmap(":movie_image/vichni.jpg") );

    film.open (QIODevice :: ReadOnly| QIODevice :: Text);
    if(film.isOpen()  )
    {
        qDebug() << "File is open";
        while ( !film.atEnd ())
        {
            ui->textBrowser->setText(film.readAll());
        }
        film.close ();
    }
    else qDebug()<< "File is not open";
}

void MainWindow::on_pushButton_3_clicked()
{
    int a = ui->spinBox->text().toInt();
    int b = ui->spinBox_2->text().toInt();

    //КЕЙС У КЕЙСІ
    // перший кейс то ряд
    //в рядах перебираєм місця кейсами
    QLocale ukraine(QLocale::Ukrainian);
    switch (a) {
    case 1: {
        switch (b) {

        case 1:{
            if (z1_s1[0][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[0][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break; }
        case 2:{
            if (z1_s1[1][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[1][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break;  }
        case 3:{
            if (z1_s1[2][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[2][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break; }
        case 4:{
            if (z1_s1[3][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[3][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break; }
        case 5: {
            if (z1_s1[4][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[4][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break;}
        case 6:{
            if (z1_s1[5][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[5][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break;}
        }
        break;}

    case 2: {
        switch (b) {
        case 1:{
            if (z1_s1[6][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[6][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break;}
        case 2:{
            if (z1_s1[7][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[7][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break;}
        case 3:{
            if (z1_s1[8][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[8][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break;}
        case 4:{
            if (z1_s1[9][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[9][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break;}
        case 5:{
            if (z1_s1[10][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[10][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break;}
        case 6: {
            if (z1_s1[11][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[11][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break; }
        }
        break;}

    case 3: {
        switch (b) {
        case 1:{
            if (z1_s1[12][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[12][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break;  }
        case 2:{
            if (z1_s1[13][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[13][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break; }
        case 3:{
            if (z1_s1[14][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[14][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break; }
        case 4:{
            if (z1_s1[15][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[15][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break; }
        case 5:{
            if (z1_s1[16][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[16][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break;}
        case 6:{
            if (z1_s1[17][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[17][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break; }
        }
        break; }

    case 4: {
        switch (b) {
        case 1:{
            if (z1_s1[18][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[18][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break;}
        case 2:{
            if (z1_s1[19][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[19][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break;}
        case 3:{
            if (z1_s1[20][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[20][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break;}
        case 4:{
            if (z1_s1[21][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[21][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break;}
        case 5:
        case 6: {QMessageBox::critical(this, "Status", "У VIP присутні лише 4 місця.\nДаного місця у VIP не існує.");break;}
        }
        break;}
    case 5: {
        switch (b) {
        case 1:{
            if (z1_s1[22][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[22][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break;}
        case 2:{
            if (z1_s1[23][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[23][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break;}
        case 3:{
            if (z1_s1[24][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[24][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break;}
        case 4:{
            if (z1_s1[25][1]==1)
                QMessageBox::information(this, "Status", "Busy");
            else if (z1_s1[25][0]==1)
                QMessageBox::information(this, "Status", "Reservation");
            else  QMessageBox::information(this, "Status", "Free");
            break;}
        case 5:
        case 6: {QMessageBox::critical(this, "Status", "У VIP присутні лише 4 місця.\nДаного місця у VIP не існує.");break;}
        }
        break;}
    }
}




