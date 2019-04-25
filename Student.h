#include <iostream>
#include <stdexcept>

class Student{
    std::string firstName;
    std::string surname;
    int age;
    std::string field;

    public:

        Student(std::string, std::string, int, std::string);
        ~Student();

        bool validateNameCharacters();
        bool validateNameSurname();
        bool validateAge();
        bool validateField();
};

class InvalidNameSurname: public ionvalid_argument{
    std::string text;

    public:
        InvalidNameSurname(std::string);

};

class InvalidNameCharacter: public ionvalid_argument{
    std::string text;

    public:
        InvalidNameCharacter(std::string);

};

class InvalidAge: public ionvalid_argument{
    std::string text;

    public:
        InvalidAge(int);

};

class InvalidProgram: public ionvalid_argument{
    std::string text;

    public:
        InvalidProgram(std::string);

};