#ifndef STAR_8_H
#define STAR_8_H

#include <QtWidgets>
#include "star.h"


class star_8 : public star {
public:
    star_8() = default;

    void setPoints(QMouseEvent *) override;
};

#endif // STAR_8_H
