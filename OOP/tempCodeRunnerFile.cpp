#include "Employee.h"
using namespace std;

int main()
{

    Employee emp2("Jane Smith", 654321, "HR", "Assistant"); // Creating an object using the constructor with parameters

    cout << "Employee :" << endl;
    cout << "Name: " << emp2.getName() << endl;
    cout << "ID Number: " << emp2.getId() << endl;
    cout << "Department: " << emp2.getDepartment() << endl;
    cout << "Position: " << emp2.getPosition() << endl;
}