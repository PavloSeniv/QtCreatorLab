#ifndef SEANS_H
#define SEANS_H

#include <QDialog>

namespace Ui {
class seans;
}

class seans : public QDialog
{
    Q_OBJECT

signals:
    void signalFromButton(int a);

public:
    explicit seans(QWidget *parent = nullptr);
    ~seans();
private slots:
    void click(int a);
    void slotButton1();
    void slotButton2();
    void slotButton3();
    void slotButton4();
    void slotButton5();
    void slotButton6();
    void slotButton7();
    void slotButton8();
    void slotButton9();
    void slotButton10();
    void slotButton11();
    void slotButton12();
    void slotButton13();
    void slotButton14();
    void slotButton15();
    void slotButton16();
    void slotButton17();
    void slotButton18();
    void slotButton19();
    void slotButton20();
    void slotButton21();
    void slotButton22();
    void slotButton23();
    void slotButton24();
    void slotButton25();
    void slotButton26();

    void color_cher(int j);
    void color_chor(int j);
    void color_sir(int j);
    void on_pushButton_clicked();

public slots:
    void show_form(int i, int j);
private:
    Ui::seans *ui;
};

#endif // SEANS_H
