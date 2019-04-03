#include "ParentChild.h"


int main(){
    Child c1("agh");
    Parent p1(&c1);
    c1.show();
    p1.assignToOtherSchool("uw");
    c1.show();


    return 0;
}