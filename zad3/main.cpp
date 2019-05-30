#include <iostream>
#include "TaxReturn.h"

int main(){
    //Zadanie 3
    Tax36 t1(1);
    Tax37 t2(1);
    t1.Calculate();
    t2.Calculate();
    std::cout<<t1.getVal<<std::endl;
    std::cout<<t2.getVal<<std::endl;

    return 0;
}