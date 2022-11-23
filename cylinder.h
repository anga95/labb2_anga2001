//
// Created by AnGa on 2022-11-22.
//

#ifndef LABB2_ANGA2001_CYLINDER_H
#define LABB2_ANGA2001_CYLINDER_H


#include "circle.h"
#include "shape.h"

class cylinder: public circle, public shape{
public:
    cylinder(const std::string &color, double height, double radius);
    double getArea() const;

private:
    double height;
    double radius;
};


#endif //LABB2_ANGA2001_CYLINDER_H
