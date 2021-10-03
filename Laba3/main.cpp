#include "mainwindow.h"
#include <QApplication>
#include <QtWidgets>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QWidget wgt;
    wgt.setMinimumSize(800,600);
    int rowCount = 8;
    int columnCount = 13;
    QBoxLayout *boxLayoutMain = new QBoxLayout(QBoxLayout::TopToBottom);
    QBoxLayout *boxLayoutUp = new QBoxLayout(QBoxLayout::TopToBottom);
    QBoxLayout *boxLayoutDown = new QBoxLayout(QBoxLayout::LeftToRight);

    // initialize screen
    QLabel *lblScreen = new QLabel("Screen");
    lblScreen->setMaximumSize(800,30);
    lblScreen->setStyleSheet("background-color: magenta; border-radius: 3px;");
    lblScreen->setAlignment(Qt::Alignment(Qt::AlignmentFlag::AlignCenter));
    boxLayoutUp->addWidget(lblScreen);

    // initialize left row labels
    QVBoxLayout *leftVLayout = new QVBoxLayout();
    for (int i = 0; i < rowCount; i++) {
        QLabel *lbl = new QLabel(QString::fromStdString("Row " + std::to_string(i)));
        lbl->setMaximumSize(60,30);
        lbl->setStyleSheet("background-color: red; border-radius: 10px;");
        lbl->setAlignment(Qt::Alignment(Qt::AlignmentFlag::AlignCenter));
        leftVLayout->addWidget(lbl);
    }

    // initialize sits
    QVBoxLayout *centerVLayout = new QVBoxLayout();
    for (int i = 0; i < rowCount; i++) {
        QHBoxLayout *hLayout = new QHBoxLayout();
        hLayout->setContentsMargins(1,1,1,1);
        hLayout->setSpacing(10);
        for (int j = 0; j < columnCount; j++) {
            QPushButton *btn = new QPushButton(QString::number(j + 1));
            btn->setMaximumSize(30,30);

            btn->setStyleSheet("background-color: yellow; border-radius: 5px; ");
            if(i > 1 && j > 1 && j < columnCount - 1){
                btn->setStyleSheet("background-color: white; border-radius: 5px;");
                if(i > 1 && i < 6 && j > 2 && j < columnCount - 2){
                    btn->setStyleSheet("background-color: green; border-radius: 5px;");
                }
            }
            hLayout->addWidget(btn);
        }
        centerVLayout->addLayout(hLayout);
    }

    // initialize right row labels
    QVBoxLayout *rightVLayout = new QVBoxLayout();
    for (int i = 0; i < rowCount; i++) {
        QLabel *lbl = new QLabel(QString::fromStdString("Row " + std::to_string(i)));
        lbl->setMaximumSize(60,30);
        lbl->setStyleSheet("background-color: blue; border-radius: 5px;");
        lbl->setAlignment(Qt::Alignment(Qt::AlignmentFlag::AlignCenter));
        rightVLayout->addWidget(lbl);
    }
    boxLayoutDown->addLayout(leftVLayout);
    boxLayoutDown->addLayout(centerVLayout);
    boxLayoutDown->addLayout(rightVLayout);

    boxLayoutMain->addLayout(boxLayoutUp);
    boxLayoutMain->addLayout(boxLayoutDown);

    wgt.setLayout(boxLayoutMain);
    wgt.show();
    return a.exec();
}
