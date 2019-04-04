#include "Student.h"

int main(){

    StudyYear ala(1);
    std::cout<<ala.GetVal()<<std::endl;
    ala++;
    std::cout<<ala.GetVal()<<std::endl;
    std::cout<<ala;

    return 0;
}