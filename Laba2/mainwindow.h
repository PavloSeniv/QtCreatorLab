#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    int scoreCountButton1 = 0;
    int scoreCountButton2 = 0;
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void on_pushButton_clicked();

private slots:
    void on_btn1_clicked();
    void on_btn2_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
