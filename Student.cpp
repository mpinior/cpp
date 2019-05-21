#include "Student.h"

Student::Student(std::string firstName, std::string lastName, std::string program, int year) {
    this->firstName = firstName;
    this->lastName = lastName;
    this->program = program;
    this->year = year;
}

void Student::Show(){
    std::cout<<this->firstName<<" "<<this->lastName<<" "<<this->program<<" "<<this->year<<std::endl;
}