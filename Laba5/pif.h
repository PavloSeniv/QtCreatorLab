#ifndef PIF_H
#define PIF_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
class pif;
}

class pif : public QDialog
{
    Q_OBJECT

public:
    explicit pif(QWidget *parent = nullptr);
    ~pif();
    MainWindow *mainWin;

private slots:
    void on_clcBtn_clicked();

private:
    Ui::pif *ui;
};

#endif // PIF_H
