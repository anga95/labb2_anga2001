//
// Created by AnGa on 2022-11-22.
//

#include <cmath>
#include "cylinder.h"

cylinder::cylinder(const std::string &color, double height, double radius)
:circle(color, radius), height(height)  { }

double cylinder::getArea() const {
    double curvedSurface = (2*M_PI*M_PI*height);
    double baseAndTop = 2*circle::getArea();
    return baseAndTop + curvedSurface;
}
