//
// Created by Валерий Ефременко on 12.04.25.
//

#ifndef TASK5_MAINWINDOW_H
#define TASK5_MAINWINDOW_H


#include <QWidget>
#include <QMainWindow>

#include <QDir>
#include <QFileDialog>

#include "Calculate.h"


QT_BEGIN_NAMESPACE
namespace Ui { class mainwindow; }
QT_END_NAMESPACE

class mainwindow : public QMainWindow {
Q_OBJECT

public:
    mainwindow();

protected:
    Ui::mainwindow *ui;

private slots:
    void open_dir_clicked();
};


#endif //TASK5_MAINWINDOW_H
