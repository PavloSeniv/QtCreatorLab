#ifndef TABLE_H
#define TABLE_H

#include <QMainWindow>

namespace Ui {
    class table;
}

class table : public QMainWindow
{
    Q_OBJECT

public:
    explicit table(QWidget *parent = nullptr);
    ~table();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::table *ui;
};

#endif // TABLE_H
