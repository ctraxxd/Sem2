#pragma once

#include <QtWidgets>
#include "moverect.h"

class figureWindow : public QWidget, private moveRect {
public:
    explicit figureWindow(QWidget *pobj = nullptr);
protected:
    void paintEvent(QPaintEvent* pe);

private:
    QPointF *f = new QPointF;
};
