#include <iostream>
#include "shape.h"
#include "circle.h"
#include "cylinder.h"
int main() {

    circle c("gulful", 5);
    std::cout << c.getArea()  << " " << c.getColor();
    std::cout << std::endl;
    cylinder cyl("green", 10, 5);

    return 0;
}
