//
// Created by AnGa on 2022-11-23.
//

#include "rectangle.h"

rectangle::rectangle(const std::string &color, double height, double length)
: shape(color), height(height), length(length) {}

double rectangle::getArea() const {
    return height*length;
}
