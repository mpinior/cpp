#include <iostream>

class Circle{
    protected:
        double x;
        double y;
        double r;

    public:
        Circle();
        Circle(double, double, double);
        ~Circle();

        double area();
};