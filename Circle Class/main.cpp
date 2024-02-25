#include "Circle.h"
#include <iostream>
int main() {
    double radius;
    std::cout << "Enter the radius of the circle: ";
    std::cin >> radius;

    Circle circle(radius);

    std::cout << "Circle's area: " << circle.getArea() << std::endl;
    std::cout << "Circle's diameter: " << circle.getDiameter() << std::endl;
    std::cout << "Circle's circumference: " << circle.getCircumference() << std::endl;

    return 0;
}