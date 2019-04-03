#include "ParentChild.h"

Parent::Parent(Child *myKid){
    this->myChild = myKid;
}

Parent::~Parent(){

}

void Parent::assignToOtherSchool(std::string name){
    this->myChild->school = name;
}


Child::Child(std::string school){
    this->school = school;
}

Child::~Child(){

}

void Child::show(){
    std::cout<<this->school<<std::endl;
}
