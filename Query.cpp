#include "Query.h"

Query::~Query() {
    
}

ByFirstName::ByFirstName(std::string firstName){
    this->firstName = firstName;
}

ByFirstName::~ByFirstName(){

}

bool ByFirstName::Accept(const Student &student) const{
    return this->firstName == student.firstName;
}

ByLastName::ByLastName(std::string lastName){
    this->lastName = lastName;
}
ByLastName::~ByLastName(){

}
bool ByLastName::Accept(const Student &student) const{
    return this->lastName == student.lastName;
}

ByOneOfPrograms::ByOneOfPrograms(std::string field){
    this->field = field;
}
ByOneOfPrograms::~ByOneOfPrograms(){

}
bool ByOneOfPrograms::Accept(const Student &student) const{
    return this->field == student.field;
}


ByYearLowerOrEqualTo::ByYearLowerOrEqualTo(int value){
    this->value = value;
}
ByYearLowerOrEqualTo::~ByYearLowerOrEqualTo(){

}
bool ByYearLowerOrEqualTo::Accept(const Student &student) const{
    return this->value <= student.year;
}

AndQuery::AndQuery(std::unique_ptr<Query> Query1, std::unique_ptr<Query> Query2){
    this->Query1 = move(Query1);
    this->Query2 = move(Query2);
}
AndQuery::~AndQuery() {

}
bool AndQuery::Accept(const Student &student) const{
    return this->Query1->Accept(student) && this->Query2->Accept(student);
}

OrQuery::OrQuery(std::unique_ptr<Query> Query1, std::unique_ptr<Query> Query2){
    this->Query1 = move(Query1);
    this->Query2 = move(Query2);
}
OrQuery::~OrQuery() {

}
bool OrQuery::Accept(const Student &student) const{
    return this->Query1->Accept(student) || this->Query2->Accept(student);
}