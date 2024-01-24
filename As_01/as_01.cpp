#include <iostream>
using namespace std;
int main() {
    double speed;
    int hours;

    cout << "What is the speed of the vehicle in mph?: ";
    cin >> speed;

    cout << "How many hours has it traveled?: ";
    cin >> hours;

    cout << "Hour\tDistance Traveled\n";
    cout << "------------------------\n";
    for (int i = 1; i <= hours; i++) {
        double distance = speed * i;
        cout << i << "\t" << distance << " \n";
    }

    return 0;
}