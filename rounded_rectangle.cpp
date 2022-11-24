//
// Created by AnGa on 2022-11-23.
//

#include <cmath>
#include "rounded_rectangle.h"

rounded_rectangle::rounded_rectangle(const std::string &color, double height, double length, double radius)
    : rectangle(color, height, length), radius(radius) { }

double rounded_rectangle::getArea() const {
    //Hela rektangeln - 4 hörn med radien*radien X + rundade hörnen med radien X
    const double amountOfCorners = 4;
    circle roundedCornerOfRectalnge("NIL", radius);
    rectangle squareCornerOfRectangle("NIL", radius,radius);
    double allSquareCorners = amountOfCorners*squareCornerOfRectangle.getArea();
    double allRoundedCorners = roundedCornerOfRectalnge.getArea();

    return rectangle::getArea() - allSquareCorners + allRoundedCorners;// (10*radius*M_PI);
}
