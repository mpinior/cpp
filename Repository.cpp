#include "Repository.h"

void Repository::AddStudent(std::string firstName, std::string lastName, std::string field, int year){
    students.push_back(Student(firstName, lastName, field, year));
}
std::vector<Student> Repository::FindByQuery(const Query &query){
    std::vector<Student> answer;
    for (int i=0; i<this->students.size(); i++){
        if (query.Accept(this->students[i])){
            answer.push_back(this->students[i]);
        }
    }
    return answer;
}