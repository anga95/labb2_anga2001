#include <iostream>
#include "shape.h"
#include "circle.h"
#include "cylinder.h"
#include "rectangle.h"
#include "parallelepiped.h"
#include "rounded_rectangle.h"

int main() {

    circle circle("gulful", 10);
    std::cout << "circle "<<circle.getArea() << " " << circle.getColor()<< "\n";

    cylinder cylinder("green", 10, 10);
    std::cout << "cylinder " << cylinder.getArea() << " " << cylinder.getColor() << "\n";

    rectangle rekt("blue", 5, 5);
    std::cout <<"rekt "<< rekt.getArea()<< " " << rekt.getColor()<< "\n";

    parallelepiped par("grönsomfan", 5,5,5);
    std::cout << "parallellepiped " << par.getArea() << " " << par.getColor() << "\n";

    rounded_rectangle round("red",5,10,2);
    std::cout <<"round "<< round.getArea()<< " " << round.getColor() +"\n";
    return 0;
}
