#ifndef FIGURETRIANGLE_H
#define FIGURETRIANGLE_H

#include <QtWidgets>
#include "figures.h"

class figureTriangle : public figures {
public:
    figureTriangle() = default;

    void setPoints(QMouseEvent *) override;

};

#endif // FIGURETRIANGLE_H
