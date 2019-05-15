#include "Student.h"

Student::Student(std::string firstName, std::string lastName, std::string field, int year){
    this->firstName=firstName;
    this->lastName=lastName;
    this->field=field;
    this->year=year;
}

void Student::show() {
    std::cout<<this->firstName<<" "<<this->lastName<<" "<<this->field<<", year:"<<this->year<<std::endl;
}