#include <iostream>

class StudyYear{
    int value;

    public:
        //konstruktor
        StudyYear();
        StudyYear(int v);
        ~StudyYear();

        //get
        int GetVal();
        //Set
        void SetVal(int v);

        void operator++(int);
        void operator--(int);
        friend std::ostream & operator<<(std::ostream &screen, StudyYear &year);
};

class Student{
    std::string id;
    std::string firstName;
    std::string lastName;
    std::string field;
    StudyYear year;

    public:
        //konstruktor
        Student();
        Student(std::string i, std::string f, std::string l, std::string fie, StudyYear y);
        ~Student();      
};

class StudentRepository{
    Student students[50];

    public:
        StudentRepository();
        ~StudentRepository();
};