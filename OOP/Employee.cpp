#include "Employee.h"
Employee::Employee();
Employee::Employee(string _name, int _idNumber)
{
    name = _name;
    idNumber = _idNumber;
    department = "";
    position = "";
}
Employee::Employee(string _name, int _idNumber, string _department, string _position)
{
    name = _name;
    idNumber = _idNumber;
    department = _department;
    position = _position;
}
string Employee::getName()
{
    return this->name;
}
int Employee::getId()
{
    return this->idNumber;
}
string Employee::getDepartment()
{
    return this->department;
}
string Employee::getPosition()
{
    return this->position;
}
void Employee::setName(string _name)
{
    this->name = _name;
}
void Employee::setId(int _id)
{
    this->idNumber = _id;
}
void Employee::setDepartment(string _department)
{
    this->department = _department;
}
void Employee::setPosition(string _position)
{
    this->position = _position;
}
