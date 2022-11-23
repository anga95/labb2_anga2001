//
// Created by AnGa on 2022-11-22.
//

#include "shape.h"

const std::string &shape::getColor() const { return color; }

//double shape::getArea() const { return 0; }

shape::shape(const std::string &color) : color(color) {}
