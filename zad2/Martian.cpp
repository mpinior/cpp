#include "Martian.h"

int Martian::martianCount = 0;

Martian::Martian(){
    Martian::martianCount += 1;
}

Martian::~Martian(){
    Martian::martianCount -= 1;
}


int Martian::GetNumber(){
    return Martian::martianCount;
}

bool Martian::Attack(){
    if (rand()%2 == 0){
        return true;
    }
    else{
        return false;
    }
}

