#ifndef FIGURESQUARE_H
#define FIGURESQUARE_H

#include <QtWidgets>
#include "figures.h"


class figureSquare : public figures {
public:
    figureSquare() = default;

    void setPoints(QMouseEvent *me) override;

};


#endif // FIGURESQUARE_H
