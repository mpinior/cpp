#include "Student.h"

int main(){

    StudyYear ala(1);
    Student Kasia("33022", "Kasia", "Kolwaczyk", "Informatyka", 1);
    StudyYear basia(2);
    std::cout<<ala.GetVal()<<std::endl;
    if (ala<basia){
        std::cout<<"Basia"<<std::endl;
    }
    ala++;
    if (ala==basia){
        std::cout<<"rowne"<<std::endl;
    }
    std::cout<<ala.GetVal()<<std::endl;
    std::cout<<ala<<std::endl;
    std::cout<<Kasia<<std::endl;
    StudentRepository myrep;
    myrep.SetStudent(Kasia,0);
    std::cout<<myrep[0]<<std::endl;
    int ala1 = static_cast<int>(ala);
    std::cout<<ala1<<std::endl;

    return 0;
}