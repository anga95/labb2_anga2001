//
// Created by AnGa on 2022-11-23.
//

#ifndef LABB2_ANGA2001_ROUNDED_RECTANGLE_H
#define LABB2_ANGA2001_ROUNDED_RECTANGLE_H


#include "rectangle.h"
#include "circle.h"

class rounded_rectangle: public rectangle{
public:
    rounded_rectangle(const std::string &color, double height, double length, double radius);
    double getArea() const;
private:
    double radius;
};


#endif //LABB2_ANGA2001_ROUNDED_RECTANGLE_H
