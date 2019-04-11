#include "Circle.h"

class Sphere:public Circle{
    double z;

    public:
    Sphere();
    Sphere(double, double, double, double);
    ~Sphere();

    double area();
};