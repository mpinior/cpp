#include "Pesel.h"

Pesel::Pesel(std::string pesel){
    this->pesel = pesel;
}
Pesel::~Pesel(){

}

bool Pesel::validatePesel(){
    std::string error = "Invalid PESEL";
    if (this->pesel.size() != 11){
        throw error;
    }
    else{
        int sum=0;
        for (int i=0; i<10; i++){
            if (i%4==0){
                sum += 9*(this->pesel[i] - 48);
            }
            else if(i%4==1){
                sum += 7*(this->pesel[i] - 48);
            }
            else if(i%4==2){
                sum += 3*(this->pesel[i] - 48);
            }
            else if(i%4==3){
                sum+= this->pesel[i] - 48;
            }
        }
        if ((sum%10)!=(this->pesel[10]-48)){
            throw error;
        }
        else{
            return true;
        }
    }
}