#include <iostream>
#include "Student.h"

std::ostream & operator<<(std::ostream &screen,const StudyYear &year){
    screen << "year: ";
    screen << year.value;
    return screen;
}

std::ostream & operator<<(std::ostream &screen,const Student &info){
    screen <<"{id: '"<<info.id<<"', firstName: '"<<info.firstName<<"', lastName: '"<<info.lastName<<"', field: '"<<info.field<<"', "<<info.year<<"}";
    return screen;  
}


bool StudyYear::operator==(StudyYear year){
    return this->value == year.value;
}
bool StudyYear::operator<(StudyYear year){
    return this->value < year.value;
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
StudyYear::operator int(){
    return this->value;
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


void StudentRepository::SetStudent(Student student, int index){
    this->students[index] = student;
}


Student StudentRepository::operator[](int index){
    return this->students[index];
}
