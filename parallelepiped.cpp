//
// Created by AnGa on 2022-11-23.
//

#include "parallelepiped.h"

parallelepiped::parallelepiped(const std::string &color, double height, double length, double depth)
    : rectangle(color, height, length), depth(depth) {}

double parallelepiped::getVolume() const {
    return getArea()*depth;
}
