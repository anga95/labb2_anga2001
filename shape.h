//
// Created by AnGa on 2022-11-22.
//

#ifndef LABB2_ANGA2001_SHAPE_H
#define LABB2_ANGA2001_SHAPE_H


#include <string>

class shape {
public:
    shape(const std::string &color);

    const std::string &getColor() const;

    virtual double getArea() const = 0;

private:
    std::string color;
};


#endif //LABB2_ANGA2001_SHAPE_H
