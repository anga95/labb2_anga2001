//
// Created by AnGa on 2022-11-22.
//

#include "cylinder.h"

cylinder::cylinder(const std::string &color, double height, double radius)
:circle(color, radius), height(height)  { }

double cylinder::getVolume() const { return getArea() * height ; }
