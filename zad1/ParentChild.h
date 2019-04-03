#include <iostream>

class Child;

class Parent{
    std::string name;
    std::string surname;
    int year;
    Child *myChild;

    public:
    //Konstruktor
        Parent(Child *myKid);
        ~Parent();

        void assignToOtherSchool(std::string name);
};


class Child{
    std::string name;
    std::string surname;
    int year;
    std::string school;

    friend class Parent;

    public:
        Child(std::string school);
        ~Child();

        void show(); //Pokazanie szkoły
};