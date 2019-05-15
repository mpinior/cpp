#include "Query.h"
#include "Student.h"
#include "Repository.h"
#include <iostream>
#include <memory>

int main(){

    Repository rep1;
    rep1.AddStudent("Alan", "Nowak", "inf", 1);
    rep1.AddStudent("Adam", "Nowak", "inf", 1);
    rep1.AddStudent("Krzys", "Kowalski", "inf", 1);
    rep1.AddStudent("Zbigniew", "Kryst", "bio", 3);

    ByFirstName AskName("Krzys");
    std::vector<Student> myVec = rep1.FindByQuery(AskName);
    for (int i=0; i<myVec.size(); i++){
        myVec[i].show();
    }
    AndQuery Asking(std::make_unique<class ByLastName>("Nowak"), std::make_unique<class ByOneOfPrograms>("inf"));
    myVec = rep1.FindByQuery(Asking);
    for (int i=0; i<myVec.size(); i++){
        myVec[i].show();
    }


    return 0;
}