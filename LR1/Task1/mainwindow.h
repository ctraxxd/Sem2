#pragma once

#include <QtWidgets>
#include "figurewindow.h"
#include "carwindow.h"

class MainWindow : public QWidget {
    Q_OBJECT
public:
    explicit MainWindow(QWidget *pobj = nullptr);

private:
    figureWindow *figure = new figureWindow;
    carWindow *car = new carWindow;

private slots:
    void on_closeButton_clicked();

    void on_figureButton_clicked();

    void on_carButton_clicked();

protected:
};
