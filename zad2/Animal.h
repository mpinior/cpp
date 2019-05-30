#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>

class Animal{
    std::string species;
    std::string name;
    int age;

public:
    Animal();
    Animal(std::string, std::string, int);
    ~Animal();

public:
    friend std::istream & operator>>(std::istream &screen,const Animal &info);
    friend std::ostream & operator<<(std::ostream &screen,const Animal &info);
    friend bool operator==(Animal ex1, Animal ex2);
    void operator++(int);

};


#endif