#include <iostream>
#include "Square.h"
using namespace std;

int main(){
    Point p1(1,1);
    Point p2(1,2);
    Point p3(2,2);
    Point p4(2,1);
    Square kwadrat(p1,p2,p3,p4);
    cout<<p1.Distance(p2)<<endl;
    cout<<kwadrat.Circumference()<<endl;
    cout<<kwadrat.Area()<<endl;

    return 0;
}