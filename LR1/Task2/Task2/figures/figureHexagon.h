#ifndef FIGUREHEXAGON_H
#define FIGUREHEXAGON_H

#include <QtWidgets>
#include "figures.h"

class figureHexagon : public figures {
public:
    figureHexagon() = default;

    void setPoints(QMouseEvent *) override;
};


#endif // FIGUREHEXAGON_H
