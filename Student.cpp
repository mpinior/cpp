#include <iostream>
#include "Student.h"

std::ostream & operator<<(std::ostream &screen, StudyYear &year){
    screen << "year ";
    screen << year.value;
    return screen;
}


StudyYear::StudyYear(){

}
StudyYear::StudyYear(int v){
    this->value = v;

}
StudyYear::~StudyYear(){

}


int StudyYear::GetVal(){
    return this->value;
}

void StudyYear::SetVal(int v){
    this->value = v;
}

void StudyYear::operator++(int){
    this->value +=1;
}
void StudyYear::operator--(int ){
    this->value -=1;
}


Student::Student(){

}
Student::Student(std::string i, std::string f, std::string l, std::string fie, StudyYear y){
    this->id = i;
    this->firstName = f;
    this->lastName = l;
    this->field = fie;
    this->year = y;
}
Student::~Student(){

}      


StudentRepository::StudentRepository(){

}

StudentRepository::~StudentRepository(){

}
