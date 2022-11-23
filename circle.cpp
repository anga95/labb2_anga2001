//
// Created by AnGa on 2022-11-22.
//

#include <cmath>
#include "circle.h"

circle::circle(const std::string &color, double radius)
    : shape(color), radius(radius){ }

double circle::getArea() const {
    return (radius*radius) * M_PI ;
}
