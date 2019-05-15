#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <vector>

class Student{
    public: 
        std::string firstName;
        std::string lastName;
        std::string field;
        int year;
        Student(std::string firstName, std::string lastName, std::string field, int year);
        void show();
};

#endif