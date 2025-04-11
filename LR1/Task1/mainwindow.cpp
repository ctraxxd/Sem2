#include "mainwindow.h"

MainWindow::MainWindow(QWidget *pobj) {
    auto *VLayout = new QVBoxLayout;
    auto *HLayout = new QHBoxLayout;

    //auto *buttonFigure = new QPushButton("Figure");
    //connect(buttonFigure, SIGNAL(clicked(bool)), SLOT(on_figureButton_clicked()));

    auto *buttonCar = new QPushButton("Car");
    connect(buttonCar, SIGNAL(clicked(bool)), SLOT(on_carButton_clicked()));

    auto *buttonClose = new QPushButton("Close");
    connect(buttonClose, SIGNAL(clicked(bool)), SLOT(on_closeButton_clicked()));

    VLayout->setAlignment(Qt::AlignCenter);

    //HLayout->addWidget(buttonFigure);
    HLayout->addWidget(buttonCar);

    VLayout->addLayout(HLayout);
    VLayout->addWidget(buttonClose);
    setWindowTitle("Task 1");
    setLayout(VLayout);
}

void MainWindow::on_closeButton_clicked() {
    close();
}

void MainWindow::on_figureButton_clicked() {
    figure->setWindowFlags(Qt::Popup);
    figure->resize(300, 300);
    figure->move(400, 400);
    figure->show();
}

void MainWindow::on_carButton_clicked() {
    car->setWindowFlags(Qt::Popup);
    car->resize(300, 300);
    car->move(400, 400);
    car->show();
}
