#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <stdexcept>

class InvalidNameSurnameException:public std::invalid_argument {
    private:
        std::string content;
    public:
        InvalidNameSurnameException(std::string content);
        std::string GetContent();
};

class InvalidNameCharactersException:public std::invalid_argument {
    private:
        std::string content;
    public:
        InvalidNameCharactersException(std::string content);
        std::string GetContent();
};

class InvalidAgeException:public std::invalid_argument {
    private:
        int content;
    public:
        InvalidAgeException(int content);
        int GetContent();
};

class InvalidProgramException:public std::invalid_argument {
    private:
        std::string content;
    public:
        InvalidProgramException(std::string content);
        std::string GetContent();
};

class Student{
    private:
        int age;
        std::string name;
        std::string lastName;
        std::string fieldOfStudy;
    public:
        Student(int age, std::string name, std::string lastName, std::string fieldOfStudy);

        bool validateNameLastName();
        bool validateNameCharacters(std::string toValidate);
        bool validateAge();
        bool validateFieldOfStudy();
};

#endif