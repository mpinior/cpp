#include "Point.h"

class Square{
    public:
        Square();
        Square(Point p1, Point p2, Point p3, Point p4);
        ~Square();

        void SetP1(Point p);
        void SetP2(Point p);
        void SetP3(Point p);
        void SetP4(Point p);

        Point GetP1();
        Point GetP2();
        Point GetP3();
        Point GetP4();


        double Circumference() const;
        double Area() const;

    private:
        Point p1;
        Point p2;
        Point p3;
        Point p4;

};