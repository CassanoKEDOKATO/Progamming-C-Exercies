#include "Car.h"

// Default constructor
Car::Car() {
    make = "";
    yearModel = 0;
    speed = 0;
}

// Constructor with make, year, and speed parameters
Car::Car(string _make, int _year, int _speed) {
    make = _make;
    yearModel = _year;
    speed = _speed;
}

// Constructor with make and year parameters; speed is set to 0
Car::Car(string _make, int _year) {
    make = _make;
    yearModel = _year;
    speed = 0;
}

// Accessor functions
string Car::getMake() const {
    return make;
}

int Car::getYear() const {
    return yearModel;
}

int Car::getSpeed() const {
    return speed;
}

// Mutator functions
void Car::setMake(const string& make) {
    this->make = make;
}

void Car::setYear(int _year) {
    yearModel = _year;
}

void Car::setSpeed(int _speed) {
    speed = _speed;
}

// Function to increase speed by 5
int Car::Accessor() {
    return speed += 5;
}

// Function to decrease speed by 5
int Car::Brake() {
    return speed -= 5;
}
