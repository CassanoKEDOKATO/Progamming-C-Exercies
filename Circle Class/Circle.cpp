#include "Circle.h"

Circle::Circle(){
    radius = 0.0;
}
Circle::Circle(double _radius){
    radius = _radius;
}
void Circle::setRadius(double _radius){
    radius = _radius;
}
double Circle::getRadius(){
    return radius;
}
double Circle::getArea(){
    return pi * radius * radius;
}
double Circle::getDiameter() {
    return 2 * radius;
}
double Circle::getCircumference() {
    return 2 * pi * radius;
}