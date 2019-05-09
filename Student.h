#include <iostream>
#include <vector>
#include "Query.h"

class Student{
    public: 
        std::string firstName;
        std::string lastName;
        std::string field;
        int year;
        Student(std::string firstName; std::string lastName; std::string field; int year);
        ~Student();

};


class Repository{
    std::vector<Student> students;

    public:
        void AddStudent(std::string firstName; std::string lastName; std::string field; int year);
        std::vector<Student> FindByQuery(const Query &query);


};
