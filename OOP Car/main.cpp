#include "Car.h"
#include <iostream>

int main() {
    // Create a Car object
    Car car("Ferrari", 2022);

    // Accelerate the car five times
    std::cout << "Accelerating the car:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        car.Accessor(); // Call the accelerate function
        std::cout << "Current speed after acceleration " << i + 1 << ": " << car.getSpeed() << " mph" << std::endl;
    }

    // Brake the car five times
    std::cout << "\nBraking the car:" << std::endl;
    for (int i = 0; i < 5; ++i) {
        car.Brake(); // Call the brake function
        std::cout << "Current speed after braking " << i + 1 << ": " << car.getSpeed() << " mph" << std::endl;
    }

    return 0;
}
