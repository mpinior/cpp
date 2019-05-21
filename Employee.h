#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <iostream>

class Employee {
    public:
        std::string firstName;
        std::string lastName;
        double salary;
        Employee(std::string firstName, std::string lastName, double salary);
        void Show();
};

#endif