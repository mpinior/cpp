#include "Sphere.h"

int main(){

    Circle circle1(1,2,1);
    Sphere sphere1(1,2,3,1);
    std::cout<<"Area circle:"<<circle1.area()<<std::endl;
    std::cout<<"Area sphere:"<<sphere1.area()<<std::endl;


    return 0;
}