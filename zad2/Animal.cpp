#include "Animal.h"


std::ostream & operator<<(std::ostream &screen,const Animal &info){
    screen << "Species: "<<screen<<info.species<<", Name: "<<info.name<<", age: "<<info.age;
    return screen;
}
std::istream & operator>>(std::istream &screen,const Animal &info){
    screen>>info.species>>info.name>>info.age;
    return screen;
}


Animal::Animal(){

}
Animal::Animal(std::string s, std::string n, int a){
    this->species=s;
    this->name=n;
    this->age=a;
}
Animal::~Animal(){

}
bool operator==(Animal ex1, Animal ex2){
    if (ex1.species== ex2.species){
        if (ex1.name == ex2.name){
            if(ex1.age == ex2.age){
                return true;
            }
        }
    }
    else{
        return false;
    }        
}
void Animal::operator++(int){
    this->age +=1;
}
