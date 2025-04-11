#ifndef STAR_7_H
#define STAR_7_H

#include <QtWidgets>
#include "star.h"

class star_7 : public star {
public:
    star_7() = default;

    void setPoints(QMouseEvent *) override;
};


#endif // STAR_7_H
