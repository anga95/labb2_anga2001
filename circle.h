//
// Created by AnGa on 2022-11-22.
//

#ifndef LABB2_ANGA2001_CIRCLE_H
#define LABB2_ANGA2001_CIRCLE_H
#include "shape.h"

class circle: virtual public shape {
public:
    circle(const std::string &color, double radius);
    double getArea() const ;
protected:
    double radius;
};


#endif //LABB2_ANGA2001_CIRCLE_H
