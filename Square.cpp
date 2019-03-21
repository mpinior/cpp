#include "Square.h"

        Square::Square(){

        }
        Square::Square(Point p1, Point p2, Point p3, Point p4){
            this->p1 = p1;
            this->p2 = p2;
            this->p3 = p3;
            this->p4 = p4;
        }
        Square::~Square(){

        }

        void Square::SetP1(Point p){
            this->p1 = p;
        }
        void Square::SetP2(Point p){
            this->p2 = p;
        }
        void Square::SetP3(Point p){
            this->p3 = p;
        }
        void Square::SetP4(Point p){
            this->p4 = p;
        }

        Point Square::GetP1(){
            return this->p1;
        }
        Point Square::GetP2(){
            return this->p2;
        }
        Point Square::GetP3(){
            return this->p3;
        }
        Point Square::GetP4(){
            return this->p4;
        }


        double Square::Circumference() const {
            double c=0;
            c = p1.Distance(p2) + p2.Distance(p3) + p3.Distance(p4) + p4.Distance(p1);
            return c;
        }
        double Square::Area() const {
            double a =0;
            a = p1.Distance(p2) * p2.Distance(p3);
            return a;
        }

