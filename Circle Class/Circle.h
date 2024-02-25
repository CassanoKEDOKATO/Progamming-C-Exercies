#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream> // Include the necessary header for string

class Circle {
private:
    double radius;
    const double pi = 3.14159;

public:
    Circle();
    Circle(double _radius);
    void setRadius(double _radius);
    double getRadius();
    double getArea();
    double getDiameter();
    double getCircumference();
};
#endif