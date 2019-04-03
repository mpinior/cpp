#include "Martian.h"
#include <windows.h>

//Martian **newTable(int size){
//    return new Martian*[size];
//}
//
//Martian **reSize(int size){
//    return newTable(size);
//}
//
//Martian **add(Martian **MarTab, Martian *myMar){
//    int size = Martian::GetNumber();
//    Martian **tmp = reSize(size+1);
//    for (int i=0; i<=size+1; i++){
//        tmp[i] = MarTab[i];
//    }
//    tmp[size-1] = myMar;
//    delete [] MarTab;
//    return tmp;
//}
//
//Martian **remove(Martian **MarTab, int index){
//    int size = Martian::GetNumber();
//    Martian **tmp = reSize(size-1);
//    for (int i=0; i<=size+1; i++){
//        if (i<index){
//            tmp[i] = MarTab[i];
//        }
//        else if (i==index){
//            delete MarTab[i];
//            continue;
//        }
//        else{
//            tmp[i-1] = MarTab[i];
//        }
//    }
//    delete [] MarTab;
//    return tmp;
//}

int main(){
    srand(time(NULL));
    Martian **Mtab = new Martian*[50];
    int size = 50;
    for (int i=0; i<size; i++) {
        Mtab[i] = NULL;
    }
    while (true){
        if (Martian::GetNumber() >5){
            for (int i=0; i<size; i++){
                if (Mtab[i] != NULL) {
                    if (Mtab[i]->Attack()){
                        std::cout<<"Alive"<<std::endl;
                    }
                    else {
                        std::cout<<"Dead"<<std::endl;
                        delete Mtab[i];
                        Mtab[i] = NULL;
                    }
                }
            }
        }
        int i = 0;
        while(Mtab[i] != NULL) {
            i++;
        }
        Mtab[i] = new Martian();
        std::cout<<"Now living: "<<Martian::GetNumber()<<std::endl;
        if (Martian::GetNumber() >= 50) {
            std::cout<<"Martians have won"<<std::endl;
            return 0;
        }
        Sleep(1000);
    }
    return 0;
}