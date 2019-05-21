#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>

class Student{
    public:
        std::string firstName;
        std::string lastName;
        std::string program;
        int year;
        Student(std::string firstName, std::string lastName, std::string program, int year);
        void Show();
};

#endif