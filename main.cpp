#include <iostream>
#include <vector>
#include "shape.h"
#include "circle.h"
#include "cylinder.h"
#include "rectangle.h"
#include "parallelepiped.h"
#include "rounded_rectangle.h"
void f(std::vector<shape*> &vec){
    for (auto &item  : vec) {
        std::cout << item->getColor() << "\t" << item->getArea() << "\n";
    }

}
int main() {
    //f();
    circle circle("gulful", 10);
    cylinder cylinder("green", 10, 10);
    rectangle rekt("blue", 10, 10);
    parallelepiped par("grönsomfan", 10,10,10);
    rounded_rectangle round("red",10,10,10);
    std::vector<shape*> vec(5,nullptr);
    vec[0] = &circle;
    vec[1] = &cylinder;
    vec[2] = &rekt;
    vec[3] = &par;
    vec[4] = &round;







    return 0;
}


/*
 * circle circle("gulful", 10);
    std::cout << "circle \t\t\t\t"<<circle.getArea() << "\t\t" << circle.getColor()<< "\n";

    cylinder cylinder("green", 10, 10);
    std::cout << "cylinder \t\t\t" << cylinder.getArea() << "\t\t" << cylinder.getColor() << "\n";

    rectangle rekt("blue", 5, 5);
    std::cout <<"rectangle \t\t\t"<< rekt.getArea()<< "\t\t\t" << rekt.getColor()<< "\n";

    parallelepiped par("grönsomfan", 5,5,5);
    std::cout << "parallellepiped \t" << par.getArea() << "\t\t\t" << par.getColor() << "\n";

    rounded_rectangle round("red",5,10,2);
    std::cout <<"roundrectangle \t\t"<< round.getArea()<< "\t\t" << round.getColor() +"\n";
 */