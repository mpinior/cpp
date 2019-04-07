#include <iostream>

class StudyYear{
    int value;

    public:

        StudyYear();
        StudyYear(int v);
        ~StudyYear();


        int GetVal();
        void SetVal(int v);

        void operator++(int);
        void operator--(int);
        bool operator==(StudyYear);
        friend std::ostream & operator<<(std::ostream &screen,const StudyYear &year);
        bool operator<(StudyYear);
        operator int();

};

class Student{
    std::string id;
    std::string firstName;
    std::string lastName;
    std::string field;
    StudyYear year;

    public:
        Student();
        Student(std::string i, std::string f, std::string l, std::string fie, StudyYear y);
        ~Student();    
        friend std::ostream & operator<<(std::ostream &screen,const Student &info);
};

class StudentRepository{
    Student students[50];

    public:
        StudentRepository();
        ~StudentRepository();

        void SetStudent(Student student, int);

    
        Student operator[](int index);

};