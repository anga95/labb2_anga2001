//
// Created by AnGa on 2022-11-23.
//

#ifndef LABB2_ANGA2001_PARALLELEPIPED_H
#define LABB2_ANGA2001_PARALLELEPIPED_H


#include "rectangle.h"

class parallelepiped: public rectangle{
public:
    parallelepiped(const std::string &color, double height, double length, double depth);
    double getVolume() const;
private:
    double depth;
};


#endif //LABB2_ANGA2001_PARALLELEPIPED_H
