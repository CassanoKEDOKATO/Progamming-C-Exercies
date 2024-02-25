#ifndef CAR_H
#define CAR_H

#include <string> // Include the necessary header for string
using namespace std;

class Car {
private:
    string make;
    int yearModel;
    int speed;
public:
    Car();
    Car(string _make, int _yearModel);
    Car(string _make, int _yearModel, int _speed);
    string getMake() const; // Mark getter functions as const
    int getYear() const; // Mark getter functions as const
    int getSpeed() const; // Mark getter functions as const
    void setMake(const string& make); // Pass string by reference
    void setYear(int _yearModel);
    void setSpeed(int _speed);
    int Accessor();
    int Brake();
};

#endif // Car.h
