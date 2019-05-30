#include "TaxReturn.h"

TaxReturn::TaxReturn(int val){
    this->val1=val;
}
TaxReturn::~TaxReturn(){

}
void TaxReturn::getVal(){
    std::cout<<this->val1<<std::endl;
}


Tax36::Tax36(int val):TaxReturn(val){

}
int Tax36::Calculate(){
    this->val1 +=36;
    return this->val1;
}
void Tax36::getVal(){
    TaxReturn::getVal();
}


Tax37::Tax37(int val):TaxReturn(val){

}
int Tax37::Calculate(){
    this->val1 +=37;
    return this->val1;
}
void Tax37::getVal(){
    TaxReturn::getVal();
}