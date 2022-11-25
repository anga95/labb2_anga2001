//
// Created by AnGa on 2022-11-23.
//

#include "parallelepiped.h"

parallelepiped::parallelepiped(const std::string &color, double height, double length, double depth)
    :shape(color), rectangle(color, height, length), depth(depth) {}

double parallelepiped::getArea() const {
    rectangle upArea("null", length, depth);
    rectangle sideArea("null", height, depth);
    double frontAndBack = 2*rectangle::getArea();
    double upAndDown = 2*upArea.getArea();
    double leftAndRight = 2*sideArea.getArea();

    return frontAndBack + upAndDown + leftAndRight;
}
