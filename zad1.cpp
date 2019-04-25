#include "Pesel.h"

int main(){

    Pesel mypes("44051401358");
    try{
        mypes.validatePesel();
    }
    catch(std::string exception){
        std::cout<<exception<<std::endl;
        return 0;
    }
    std::cout<<"No Error"<<std::endl;
    return 0;
}