#ifndef SQUARE_H
#define SQUARE_H

#include <QDialog>
#include "mainwindow.h"

namespace Ui {
class square;
}

class square : public QDialog
{
    Q_OBJECT

public:
    explicit square(QWidget *parent = nullptr);
    ~square();
    MainWindow *mainWin;

private slots:
    void on_calcBtn_clicked();

private:
    Ui::square *ui;
};

#endif // SQUARE_H
