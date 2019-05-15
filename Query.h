#ifndef QUERY_H
#define QUERY_H
#include <iostream>
#include <memory>
#include "Student.h"

class Query{
    public:
        virtual ~Query();
        virtual bool Accept(const Student &student) const = 0;
};

class ByFirstName :public Query{
    std::string firstName;

    public:
        ByFirstName(std::string firstName);
        virtual ~ByFirstName();
        virtual bool Accept(const Student &student) const override;
};

class ByLastName :public Query{
    std::string lastName;

    public:
        ByLastName(std::string lastName);
        virtual ~ByLastName();
        virtual bool Accept(const Student &student) const override;
};

class ByOneOfPrograms:public Query{
    std::string field;

    public:
        ByOneOfPrograms(std::string field);
        virtual ~ByOneOfPrograms();
        virtual bool Accept(const Student &student) const override;
};


class ByYearLowerOrEqualTo:public Query{
    int value;

    public:
        ByYearLowerOrEqualTo(int value);
        virtual ~ByYearLowerOrEqualTo();
        virtual bool Accept(const Student &student) const override;
};

class AndQuery:public Query{
    std::unique_ptr<Query> Query1;
    std::unique_ptr<Query> Query2;
    public:
        AndQuery(std::unique_ptr<Query> Query1, std::unique_ptr<Query> Query2);
        virtual ~AndQuery();
        virtual bool Accept(const Student &student) const override;
};

class OrQuery:public Query{
    std::unique_ptr<Query> Query1;
    std::unique_ptr<Query> Query2;
    public:
        OrQuery(std::unique_ptr<Query> Query1, std::unique_ptr<Query> Query2);
        virtual ~OrQuery();
        virtual bool Accept(const Student &student) const override;
};

#endif