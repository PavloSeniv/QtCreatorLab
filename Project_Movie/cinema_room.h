#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "description_seans.h"

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_small_hall_clicked();

    void on_seans_1_clicked();

    void on_seans_2_clicked();

    void on_seans_3_clicked();

    void on_seans_4_clicked();

    void on_pushButton_clicked();

    void on_info_1_clicked();

    void on_pushButton_2_clicked();

    void on_info_2_clicked();

    void on_info_3_clicked();

    void on_info_4_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
    seans * f2 ;
};
#endif // MAINWINDOW_H
