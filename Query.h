#include <iostream>
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
        virtual bool Accept(const Student &student) const overide;
};

class ByOneOfPrograms:public Query{
    std::string field;

    public:
        ByOneOfPrograms(std::string field);
        virtual ~ByOneOfPrograms();
        virtual bool Accept(const Student &student) const overide;
};


class ByYearLowerOrEqualTo:public Query{
    int value;

    public:
        ByYearLowerOrEqualTo(int value);
        virtual ~ByYearLowerOrEqualTo();
        virtual bool Accept(const Student &student) const overide;
};

