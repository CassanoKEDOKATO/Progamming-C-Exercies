
#define employeemanagement_employee_h
#include <iostream>
#include <string>
class Employee{
private:
    string name;
    int idNumber;
    string department;
    string position;
 public:
    Employee();
    Employee(string _name, int _idNumber);
    Employee(string _name, int _idNumber, string _department, string _position);
    string getName();
    int getId();
    string getDepartment();
    string getPosition();
    void setName(string _name);
    void setId(int _id);
    void setDepartment(string _department);
    void setPosition(string _position);
    
};
#endif