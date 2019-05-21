#include "Employee.h"

Employee::Employee(std::string firstName, std::string lastName, double salary) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->salary = salary;
}

void Employee::Show() {
    std::cout<<this->firstName<<" "<<this->lastName<<" "<<" "<<this->salary<<std::endl;
}