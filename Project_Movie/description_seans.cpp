#include "description_seans.h"
#include "ui_description_seans.h"
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

static int z1_s1[26][2];

seans::seans(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::seans)
{

    ui->setupUi(this);

    connect(this, &seans::signalFromButton, this, &seans::click);
    connect(ui->s1_1, SIGNAL(clicked()), this, SLOT(slotButton1()));
    connect(ui->s1_2, SIGNAL(clicked()), this, SLOT(slotButton2()));
    connect(ui->s1_3, SIGNAL(clicked()), this, SLOT(slotButton3()));
    connect(ui->s1_4, SIGNAL(clicked()), this, SLOT(slotButton4()));
    connect(ui->s1_5, SIGNAL(clicked()), this, SLOT(slotButton5()));
    connect(ui->s1_6, SIGNAL(clicked()), this, SLOT(slotButton6()));
    connect(ui->s2_1, SIGNAL(clicked()), this, SLOT(slotButton7()));
    connect(ui->s2_2, SIGNAL(clicked()), this, SLOT(slotButton8()));
    connect(ui->s2_3, SIGNAL(clicked()), this, SLOT(slotButton9()));
    connect(ui->s2_4, SIGNAL(clicked()), this, SLOT(slotButton10()));
    connect(ui->s2_5, SIGNAL(clicked()), this, SLOT(slotButton11()));
    connect(ui->s2_6, SIGNAL(clicked()), this, SLOT(slotButton12()));
    connect(ui->s3_1, SIGNAL(clicked()), this, SLOT(slotButton13()));
    connect(ui->s3_2, SIGNAL(clicked()), this, SLOT(slotButton14()));
    connect(ui->s3_3, SIGNAL(clicked()), this, SLOT(slotButton15()));
    connect(ui->s3_4, SIGNAL(clicked()), this, SLOT(slotButton16()));
    connect(ui->s3_5, SIGNAL(clicked()), this, SLOT(slotButton17()));
    connect(ui->s3_6, SIGNAL(clicked()), this, SLOT(slotButton18()));
    connect(ui->s4_1, SIGNAL(clicked()), this, SLOT(slotButton19()));
    connect(ui->s4_2, SIGNAL(clicked()), this, SLOT(slotButton20()));
    connect(ui->s4_3, SIGNAL(clicked()), this, SLOT(slotButton21()));
    connect(ui->s4_4, SIGNAL(clicked()), this, SLOT(slotButton22()));
    connect(ui->s5_1, SIGNAL(clicked()), this, SLOT(slotButton23()));
    connect(ui->s5_2, SIGNAL(clicked()), this, SLOT(slotButton24()));
    connect(ui->s5_3, SIGNAL(clicked()), this, SLOT(slotButton25()));
    connect(ui->s5_4, SIGNAL(clicked()), this, SLOT(slotButton26()));

}

seans::~seans()
{
    delete ui;
}

static int n_seans;

void seans::show_form(int i, int k){
    QFile file1_1, file1_2, file1_3, file1_4;
    file1_1.setFileName(":/movie_files/reservation_1.txt");
    file1_2.setFileName(":/movie_files/reservation_2.txt");
    file1_3.setFileName(":/movie_files/reservation_3.txt");
    file1_4.setFileName(":/movie_files/reservation_4.txt");

    for (int j = 1; j <=26; j++)
        color_sir(j);
    int lich=0;
    switch (i)
    {
    case 1: {ui->label_2->setText("Ghost Busters");
        n_seans = 1;
        file1_1.open (QIODevice :: ReadOnly| QIODevice :: Text);
        if(file1_1.isOpen()  )
        {
            qDebug() << "File is open";
            while ( !file1_1.atEnd ())
            {
                z1_s1[lich][0]  = file1_1.read(1).toInt();
                lich++;
            }
            file1_1.close ();
        } else qDebug()<< "File is not open";
        break;}
    case 2: {ui->label_2->setText("Дім Гуччі");  n_seans = 2;
        file1_2.open (QIODevice :: ReadOnly| QIODevice :: Text);
        if(file1_2.isOpen()  )
        {
            qDebug() << "File is open";
            while ( !file1_2.atEnd ())
            {
                z1_s1[lich][0]  = file1_2.read(1).toInt();
                lich++;
            }
            file1_2.close ();
        } else qDebug()<< "File is not open"; break;}
    case 3: {ui->label_2->setText("Ненаситний"); file1_3.open (QIODevice :: ReadOnly| QIODevice :: Text);
        n_seans = 3;
        if(file1_3.isOpen()  )
        {
            qDebug() << "File is open";
            while ( !file1_3.atEnd ())
            {
                z1_s1[lich][0]  = file1_3.read(1).toInt();
                lich++;
            }
            file1_3.close ();
        } else qDebug()<< "File is not open";  break;}
    case 4: {ui->label_2->setText("Вічні"); file1_4.open (QIODevice :: ReadOnly| QIODevice :: Text);
        n_seans = 4;
        if(file1_4.isOpen()  )
        {
            qDebug() << "File is open";
            while ( !file1_4.atEnd ())
            {
                z1_s1[lich][0]  = file1_4.read(1).toInt();
                lich++;
            }
            file1_4.close ();
        } else qDebug()<< "File is not open";  break;}
    }

    lich = 0;
    int j = 0;
    for (lich; lich <26; lich++)
        if (z1_s1[lich][0] == 1){
            j = lich+1;
            color_cher(j);}


    QFile file_k_1_1, file_k_1_2, file_k_1_3, file_k_1_4, file_k_2_1, file_k_2_2, file_k_2_3, file_k_2_4;
    file_k_1_1.setFileName(":/movie_files/sold_1.txt");
    file_k_1_2.setFileName(":/movie_files/sold_2.txt");
    file_k_1_3.setFileName(":/movie_files/sold_3.txt");
    file_k_1_4.setFileName(":/movie_files/sold_4.txt");
    lich =0;
    switch (i)
    {
    case 1: {ui->label_2->setText("Ghost Busters");
        file_k_1_1.open (QIODevice :: ReadOnly| QIODevice :: Text);
        if(file_k_1_1.isOpen()  )
        {
            qDebug() << "File is open";
            while ( !file_k_1_1.atEnd ())
            {
                z1_s1[lich][1]  = file_k_1_1.read(1).toInt();
                lich++;
            }
            file_k_1_1.close ();
        } else qDebug()<< "File is not open";
        break;}
    case 2: {ui->label_2->setText("Дім Гуччі");
        file_k_1_2.open (QIODevice :: ReadOnly| QIODevice :: Text);
        if(file_k_1_2.isOpen()  )
        {
            qDebug() << "File is open";
            while ( !file_k_1_2.atEnd ())
            {
                z1_s1[lich][1]  = file_k_1_2.read(1).toInt();
                lich++;
            }
            file_k_1_2.close ();
        } else qDebug()<< "File is not open"; break;}
    case 3: {ui->label_2->setText("Ненаситний"); file_k_1_3.open (QIODevice :: ReadOnly| QIODevice :: Text);
        if(file_k_1_3.isOpen()  )
        {
            qDebug() << "File is open";
            while ( !file_k_1_3.atEnd ())
            {
                z1_s1[lich][1]  = file_k_1_3.read(1).toInt();
                lich++;
            }
            file_k_1_3.close ();
        } else qDebug()<< "File is not open";  break;}
    case 4: {ui->label_2->setText("Вічні"); file_k_1_4.open (QIODevice :: ReadOnly| QIODevice :: Text);
        if(file_k_1_4.isOpen()  )
        {
            qDebug() << "File is open";
            while ( !file1_4.atEnd ())
            {
                z1_s1[lich][1]  = file_k_1_4.read(1).toInt();
                lich++;
            }
            file_k_1_4.close ();
        } else qDebug()<< "File is not open";  break;}
    }

    lich = 0;
    j = 0;
    for (lich; lich <26; lich++)
        if (z1_s1[lich][1] == 1){
            j = lich+1;
            color_chor(j);}

}

void seans::click( int a )
{
    QFile file_k_1_1, file_k_1_2, file_k_1_3, file_k_1_4, file_k_2_1, file_k_2_2, file_k_2_3, file_k_2_4;
    file_k_1_1.setFileName(":/movie_files/sold_1.txt");
    file_k_1_2.setFileName(":/movie_files/sold_2.txt");
    file_k_1_3.setFileName(":/movie_files/sold_3.txt");
    file_k_1_4.setFileName(":/movie_files/sold_4.txt");

    QFile file1_1, file1_2, file1_3, file1_4;
    file1_1.setFileName(":/movie_files/reservation_1.txt");
    file1_2.setFileName(":/movie_files/reservation_2.txt");
    file1_3.setFileName(":/movie_files/reservation_3.txt");
    file1_4.setFileName(":/movie_files/reservation_4.txt");



    QMessageBox::StandardButton reply;
    if (ui -> radioButton->isChecked())
    {
        if(z1_s1[a-1][0] == 0)
        { color_cher(a); z1_s1[a-1][0]=1;}
        else {color_sir(a); z1_s1[a-1][0]=0;}

        switch (n_seans)
        {   case 1:{
            if (file1_1.open (QIODevice :: WriteOnly| QIODevice :: Text)){
                QTextStream write (& file1_1);
                for (int lich = 0; lich < 26; lich++)
                    write << z1_s1[lich][0];
                file1_1.close ();
            }  else qDebug()<< "File is not open";     break;}
        case 2:{ if (file1_2.open (QIODevice :: WriteOnly| QIODevice :: Text)){
                QTextStream write (& file1_2);
                for (int lich = 0; lich < 26; lich++)
                    write << z1_s1[lich][0];
                file1_2.close ();
            }  else qDebug()<< "File is not open";  break;}
        case 3:{ if (file1_3.open (QIODevice :: WriteOnly| QIODevice :: Text)){
                QTextStream write (& file1_3);
                for (int lich = 0; lich < 26; lich++)
                    write << z1_s1[lich][0];
                file1_3.close ();
            }  else qDebug()<< "File is not open"; break;}
        case 4:{ if (file1_4.open (QIODevice :: WriteOnly| QIODevice :: Text)){
                QTextStream write (& file1_4);
                for (int lich = 0; lich < 26; lich++)
                    write << z1_s1[lich][0];
                file1_4.close ();
            }  else qDebug()<< "File is not open"; break;}
        }
    } else { QMessageBox::StandardButton reply= QMessageBox::question(this, "Підтвердження", "Ви впевнені, що хочете купити це місце?",  QMessageBox::Yes | QMessageBox::No);
        if ( reply == QMessageBox::Yes) {
            color_chor(a);
            z1_s1[a-1][1]=1;
            switch (n_seans)
            {   case 1:{
                if (file_k_1_1.open (QIODevice :: WriteOnly| QIODevice :: Text)){
                    QTextStream write (& file_k_1_1);
                    for (int lich = 0; lich < 26; lich++)
                        write << z1_s1[lich][1];
                    file_k_1_1.close ();
                }  else qDebug()<< "File is not open";     break;}
            case 2:{ if (file_k_1_2.open (QIODevice :: WriteOnly| QIODevice :: Text)){
                    QTextStream write (& file_k_1_2);
                    for (int lich = 0; lich < 26; lich++)
                        write << z1_s1[lich][1];
                    file_k_1_2.close ();
                }  else qDebug()<< "File is not open";  break;}
            case 3:{ if (file_k_1_3.open (QIODevice :: WriteOnly| QIODevice :: Text)){
                    QTextStream write (& file_k_1_3);
                    for (int lich = 0; lich < 26; lich++)
                        write << z1_s1[lich][1];
                    file_k_1_3.close ();
                }  else qDebug()<< "File is not open"; break;}
            case 4:{ if (file1_4.open (QIODevice :: WriteOnly| QIODevice :: Text)){
                    QTextStream write (& file1_4);
                    for (int lich = 0; lich < 26; lich++)
                        write << z1_s1[lich][1];
                    file1_4.close ();
                }  else qDebug()<< "File is not open"; break;}
            }

        }
    }
}

void seans::slotButton1()
{ emit signalFromButton(1); }
void seans::slotButton2()
{ emit signalFromButton(2); }
void seans::slotButton3()
{ emit signalFromButton(3); }
void seans::slotButton4()
{ emit signalFromButton(4); }
void seans::slotButton5()
{ emit signalFromButton(5); }
void seans::slotButton6()
{ emit signalFromButton(6); }
void seans::slotButton7()
{ emit signalFromButton(7); }
void seans::slotButton8()
{ emit signalFromButton(8); }
void seans::slotButton9()
{ emit signalFromButton(9); }
void seans::slotButton10()
{ emit signalFromButton(10); }
void seans::slotButton11()
{ emit signalFromButton(11); }
void seans::slotButton12()
{ emit signalFromButton(12); }
void seans::slotButton13()
{ emit signalFromButton(13); }
void seans::slotButton14()
{ emit signalFromButton(14); }
void seans::slotButton15()
{ emit signalFromButton(15); }
void seans::slotButton16()
{ emit signalFromButton(16); }
void seans::slotButton17()
{ emit signalFromButton(17); }
void seans::slotButton18()
{ emit signalFromButton(18); }
void seans::slotButton19()
{ emit signalFromButton(19); }
void seans::slotButton20()
{ emit signalFromButton(20); }
void seans::slotButton21()
{ emit signalFromButton(21); }
void seans::slotButton22()
{ emit signalFromButton(22); }
void seans::slotButton23()
{ emit signalFromButton(23); }
void seans::slotButton24()
{ emit signalFromButton(24); }
void seans::slotButton25()
{ emit signalFromButton(25); }
void seans::slotButton26()
{ emit signalFromButton(26); }

void seans::on_pushButton_clicked()
{
    this->close();
}
void seans::color_cher(int j){
    switch (j){
    case 1: { ui->s1_1->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 2: { ui->s1_2->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 3: { ui->s1_3->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 4: { ui->s1_4->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 5: { ui->s1_5->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 6: { ui->s1_6->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 7: { ui->s2_1->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 8: { ui->s2_2->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 9: { ui->s2_3->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 10: { ui->s2_4->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 11: {  ui->s2_5->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 12: {  ui->s2_6->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 13: {  ui->s3_1->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 14: {  ui->s3_2->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 15: {  ui->s3_3->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 16: {  ui->s3_4->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 17: {  ui->s3_5->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 18: {  ui->s3_6->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 19: {  ui->s4_1->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 20: {  ui->s4_2->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 21: {  ui->s4_3->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 22: {  ui->s4_4->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 23: {  ui->s5_1->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 24: {  ui->s5_2->setStyleSheet( "background-color: rgb(255, 37, 37)"); break;}
    case 25: {  ui->s5_3->setStyleSheet( "background-color: rgb(255, 37, 37)");  break;}
    case 26: {  ui->s5_4->setStyleSheet( "background-color: rgb(255, 37, 37)"); break;} }
}
void seans::color_chor(int j){
    switch (j){
    case 1: { ui->s1_1->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s1_1->setEnabled(0); break;}
    case 2: { ui->s1_2->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s1_2->setEnabled(0); break;}
    case 3: { ui->s1_3->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s1_3->setEnabled(0); break;}
    case 4: { ui->s1_4->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s1_4->setEnabled(0); break;}
    case 5: { ui->s1_5->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s1_5->setEnabled(0); break;}
    case 6: { ui->s1_6->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s1_6->setEnabled(0); break;}
    case 7: { ui->s2_1->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s2_1->setEnabled(0); break;}
    case 8: { ui->s2_2->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s2_2->setEnabled(0); break;}
    case 9: { ui->s2_3->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s2_3->setEnabled(0); break;}
    case 10: { ui->s2_4->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s2_4->setEnabled(0); break;}
    case 11: {  ui->s2_5->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s3_2->setEnabled(0); break;}
    case 12: {  ui->s2_6->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s2_6->setEnabled(0); break;}
    case 13: {  ui->s3_1->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s3_1->setEnabled(0); break;}
    case 14: {  ui->s3_2->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s3_2->setEnabled(0); break;}
    case 15: {  ui->s3_3->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s3_3->setEnabled(0); break;}
    case 16: {  ui->s3_4->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s3_4->setEnabled(0); break;}
    case 17: {  ui->s3_5->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s3_5->setEnabled(0); break;}
    case 18: {  ui->s3_6->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s3_6->setEnabled(0); break;}
    case 19: {  ui->s4_1->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s4_1->setEnabled(0); break;}
    case 20: {  ui->s4_2->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s4_2->setEnabled(0); break;}
    case 21: {  ui->s4_3->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s4_3->setEnabled(0); break;}
    case 22: {  ui->s4_4->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s4_4->setEnabled(0); break;}
    case 23: {  ui->s5_1->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s5_1->setEnabled(0); break;}
    case 24: {  ui->s5_2->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s5_2->setEnabled(0); break;}
    case 25: {  ui->s5_3->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s5_3->setEnabled(0); break;}
    case 26: {  ui->s5_4->setStyleSheet( "background-color: rgb(0, 0, 0)"); ui->s5_4->setEnabled(0); break;} }
}
void seans::color_sir(int j){
    switch (j){
    case 1: { ui->s1_1->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s1_1->setEnabled(1); break;}
    case 2: { ui->s1_2->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s1_2->setEnabled(1); break;}
    case 3: { ui->s1_3->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s1_3->setEnabled(1); break;}
    case 4: { ui->s1_4->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s1_4->setEnabled(1); break;}
    case 5: { ui->s1_5->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s1_5->setEnabled(1); break;}
    case 6: { ui->s1_6->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s1_6->setEnabled(1); break;}
    case 7: { ui->s2_1->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s2_1->setEnabled(1); break;}
    case 8: { ui->s2_2->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s2_2->setEnabled(1); break;}
    case 9: { ui->s2_3->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s2_3->setEnabled(1); break;}
    case 10: { ui->s2_4->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s2_4->setEnabled(1); break;}
    case 11: {  ui->s2_5->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s3_2->setEnabled(1); break;}
    case 12: {  ui->s2_6->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s2_6->setEnabled(1); break;}
    case 13: {  ui->s3_1->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s3_1->setEnabled(1); break;}
    case 14: {  ui->s3_2->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s3_2->setEnabled(1); break;}
    case 15: {  ui->s3_3->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s3_3->setEnabled(1); break;}
    case 16: {  ui->s3_4->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s3_4->setEnabled(1); break;}
    case 17: {  ui->s3_5->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s3_5->setEnabled(1); break;}
    case 18: {  ui->s3_6->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s3_6->setEnabled(1); break;}
    case 19: {  ui->s4_1->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s4_1->setEnabled(1); break;}
    case 20: {  ui->s4_2->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s4_2->setEnabled(1); break;}
    case 21: {  ui->s4_3->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s4_3->setEnabled(1); break;}
    case 22: {  ui->s4_4->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s4_4->setEnabled(1); break;}
    case 23: {  ui->s5_1->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s5_1->setEnabled(1); break;}
    case 24: {  ui->s5_2->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s5_2->setEnabled(1); break;}
    case 25: {  ui->s5_3->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s5_3->setEnabled(1); break;}
    case 26: {  ui->s5_4->setStyleSheet( "background-color: rgb(231, 231, 231)"); ui->s5_4->setEnabled(1); break;} }
}
