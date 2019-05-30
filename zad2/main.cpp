#include "Animal.h"

int main(){
    Animal a1("Lew", "Bogdan", 5);
    Animal a2("Koza", "Ala", 2);
    a1++;
    a2++;
    std::cout<<a1<<std::endl;
    std::cout<<a2<<std::endl;
    std::cout<<(a1==a2)<<std::endl;
   

    return 0;
}