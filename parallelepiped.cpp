//
// Created by AnGa on 2022-11-23.
//

#include "parallelepiped.h"

parallelepiped::parallelepiped(const std::string &color, double height, double length, double depth)
    : rectangle(color, height, length), depth(depth) {}

double parallelepiped::getArea() const {
    rectangle upAndDown("null", length, depth);
    rectangle side("null", height, depth);

    return 2*(rectangle::getArea() + upAndDown.getArea() + side.getArea());
}
