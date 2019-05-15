#ifndef REPOSITORY_H
#define REPOSITORY_H
#include <iostream>
#include <vector>
#include "Student.h"
#include "Query.h"

class Repository{
    std::vector<Student> students;
    public:
        void AddStudent(std::string firstName, std::string lastName, std::string field, int year);
        std::vector<Student> FindByQuery(const Query &query);
};

#endif