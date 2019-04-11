#include "Circle.h"


Circle::Circle(){

}
Circle::Circle(double x, double y, double r){
    this->x = x;
    this->y = y;
    this->r = r;
}
Circle::~Circle(){
    
}

double Circle::area(){
    return 3.14*r*r;
}