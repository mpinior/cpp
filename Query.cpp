#include "Query.h"



ByFirstName::ByFirstName(std::string firstName){
    this->firstName = firstName;
}

ByFirstName::~ByFirstName(){

}

bool ByFirstName::Accept(const Student &student) const override{
    return this->firstName == student.firstName

}


ByLastName::ByLastName(std::string lastName){
    this->lastName = lastName;
}
ByLastName::~ByLastName(){

}
 bool ByLastName::Accept(const Student &student) const overide{
    return this->lastName == student.lastName

}


ByOneOfPrograms::ByOneOfPrograms(std::string field){
    this->field = field;
}
ByOneOfPrograms::~ByOneOfPrograms(){

bool ByOneOfPrograms::Accept(const Student &student) const overide{
    return this->field == student.program;
}


ByYearLowerOrEqualTo(int value){
    this->value = value;
}
 ~ByYearLowerOrEqualTo(){

}
 bool Accept(const Student &student) const overide{
    return this->value == student.year;
}