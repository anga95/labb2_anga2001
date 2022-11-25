//
// Created by AnGa on 2022-11-23.
//

#ifndef LABB2_ANGA2001_RECTANGLE_H
#define LABB2_ANGA2001_RECTANGLE_H

#include "shape.h"

class rectangle: virtual public shape {
public:
    rectangle(const std::string &color, double height, double length);
    double getArea() const;

protected:
    double height;
    double length;
};


#endif //LABB2_ANGA2001_RECTANGLE_H
