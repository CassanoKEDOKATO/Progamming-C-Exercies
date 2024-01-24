#include <iostream>
#include <cmath>

void quadraticEquation(double a, double b, double c) {
    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        double root1 = (-b + sqrt(delta)) / (2 * a);
        double root2 = (-b - sqrt(delta)) / (2 * a);
        std::cout << "Two distinct real roots: " << root1 << " and " << root2 << std::endl;
    } else if (delta == 0) {
        double root = -b / (2 * a);
        std::cout << "One real root: " << root << std::endl;
    } else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-delta) / (2 * a);
        std::cout << "Two complex roots: " << realPart << " + " << imaginaryPart << "i and "
                  << realPart << " - " << imaginaryPart << "i" << std::endl;
    }
}

int main() {
    double a, b, c;

    std::cout << "Enter the coefficients of the quadratic equation (a, b, c): ";
    std::cin >> a >> b >> c;

    quadraticEquation(a, b, c);

    return 0;
}