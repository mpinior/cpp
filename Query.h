#ifndef QUERY_H
#define QUERY_H

#include <iostream>
//Deklaracje
template <class ObjectType>
class Query{
    public:
        virtual ~Query() =  0;
        virtual bool Accept(const ObjectType &object) const = 0;
};

template <class ObjectType>
class ByFirstName: public Query<ObjectType> {
    private:
        std::string firstName;
    public:
        ByFirstName(std::string firstName);
        virtual ~ByFirstName();
        virtual bool Accept(const ObjectType &object) const override;
};

template <class ObjectType>
class ByLastName: public Query<ObjectType> {
    private:
        std::string lastName;
    public:
        ByLastName(std::string lastName);
        virtual ~ByLastName();
        virtual bool Accept(const ObjectType &object) const override;
};

//Nie zadziała dla klasy Employee bo nie ma ona pola program
template <class ObjectType>
class ByOneOfPrograms: public Query<ObjectType> {
    private:
        std::string program;
    public:
        ByOneOfPrograms(std::string program);
        virtual ~ByOneOfPrograms();
        virtual bool Accept(const ObjectType &object) const override;
};

//Nie zadziała dla klasy Employee bo nie ma ona pola year
template <class ObjectType>
class ByYearLowerOrEqualTo: public Query<ObjectType> {
    private:
        int value;
    public:
        ByYearLowerOrEqualTo(int value);
        virtual ~ByYearLowerOrEqualTo();
        virtual bool Accept(const ObjectType &object) const override;
};

template <class ObjectType>
class OrQuery: public Query<ObjectType> {
    private:
        Query<ObjectType>* query1;
        Query<ObjectType>* query2;
    public:
        OrQuery(Query<ObjectType> *query1, Query<ObjectType> *query2);
        virtual ~OrQuery();
        virtual bool Accept(const ObjectType &object) const override;
};

template <class ObjectType>
class AndQuery: public Query<ObjectType> {
    private:
        Query<ObjectType>* query1;
        Query<ObjectType>* query2;
    public:
        AndQuery(Query<ObjectType> *query1, Query<ObjectType> *query2);
        virtual ~AndQuery();
        virtual bool Accept(const ObjectType &object) const override;
};

//Definicje
template <class ObjectType>
Query<ObjectType>::~Query() {

}

template <class ObjectType>
ByFirstName<ObjectType>::ByFirstName(std::string firstName) {
    this->firstName = firstName;
}
template <class ObjectType>
ByFirstName<ObjectType>::~ByFirstName() {

}
template <class ObjectType>
bool ByFirstName<ObjectType>::Accept(const ObjectType &object) const{
    return this->firstName == object.firstName;
}

template <class ObjectType>
ByLastName<ObjectType>::ByLastName(std::string lastName) {
    this->lastName = lastName;
}
template <class ObjectType>
ByLastName<ObjectType>::~ByLastName() {

}
template <class ObjectType>
bool ByLastName<ObjectType>::Accept(const ObjectType &object) const{
    return this->lastName == object.lastName;
}

template <class ObjectType>
ByOneOfPrograms<ObjectType>::ByOneOfPrograms(std::string program) {
    this->program = program;
}
template <class ObjectType>
ByOneOfPrograms<ObjectType>::~ByOneOfPrograms() {

}
template <class ObjectType>
bool ByOneOfPrograms<ObjectType>::Accept(const ObjectType &object) const{
    return this->program == object.program;
}

template <class ObjectType>
ByYearLowerOrEqualTo<ObjectType>::ByYearLowerOrEqualTo(int value) {
    this->value = value;
}
template <class ObjectType>
ByYearLowerOrEqualTo<ObjectType>::~ByYearLowerOrEqualTo() {

}
template <class ObjectType>
bool ByYearLowerOrEqualTo<ObjectType>::Accept(const ObjectType &object) const{
    return this->value <= object.year;
}
template <class ObjectType>
OrQuery<ObjectType>::OrQuery(Query<ObjectType> *query1, Query<ObjectType> *query2) {
    this->query1 = query1;
    this->query2 = query2;
}
template <class ObjectType>
OrQuery<ObjectType>::~OrQuery() {

}
template <class ObjectType>
bool OrQuery<ObjectType>::Accept(const ObjectType &object) const{
    return this->query1->Accept(object) || this->query2->Accept(object);
}

template <class ObjectType>
AndQuery<ObjectType>::AndQuery(Query<ObjectType> *query1, Query<ObjectType> *query2) {
    this->query1 = query1;
    this->query2 = query2;
}
template <class ObjectType>
AndQuery<ObjectType>::~AndQuery() {

}
template <class ObjectType>
bool AndQuery<ObjectType>::Accept(const ObjectType &object) const{
    return this->query1->Accept(object) && this->query2->Accept(object);
}
#endif