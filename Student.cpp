#include "Student.h"


Student::Student(std::string firstName; std::string lastName; std::string field; int year){
    this->firstName=firstName;
    this->lastName=lastName;
    this->field=field;
    this->year=year;
}
Student::~Student(){

}

void Repository::AddStudent(std::string firstName; std::string lastName; std::string field; int year){
    students.insert(student.end(), Student(firstName, lastName, field, year));
}
std::vector<Student> Repository::FindByQuery(const Query &query){
    std::vector<Student> answer;
    for (int i=0; i<this->students.size(); i++){
        if (query.Accept(this->students[i])){
            answer.insert(answer.end(), this->students[i])
        }
    }
    return answer;
}