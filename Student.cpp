#include "Student.h"

InvalidNameSurnameException::InvalidNameSurnameException(std::string content):invalid_argument("Invalid Surname/Name") {
    this->content = content;
}
std::string InvalidNameSurnameException::GetContent() {
    return this->content;
}

InvalidNameCharactersException::InvalidNameCharactersException(std::string content):invalid_argument("Invalid Characters") {
    this->content = content;
}
std::string InvalidNameCharactersException::GetContent() {
    return this->content;
}

InvalidAgeException::InvalidAgeException(int content):invalid_argument("Invalid Age") {
    this->content = content;
}
int InvalidAgeException::GetContent() {
    return this->content;
}

InvalidProgramException::InvalidProgramException(std::string content):invalid_argument("Invalid Program") {
    this->content = content;
}
std::string InvalidProgramException::GetContent() {
    return this->content;
}

Student::Student(int age, std::string name, std::string lastName, std::string fieldOfStudy) {
    this->lastName = lastName;
    this->name = name;
    this->age = age;
    this->fieldOfStudy = fieldOfStudy;
    if (!this->validateNameLastName()) {
        throw InvalidNameSurnameException(this->name + " " + this->lastName);
    }
    if (!this->validateAge()) {
        throw InvalidAgeException(this->age);
    }
    if (!this->validateFieldOfStudy()) {
        throw InvalidProgramException(this->fieldOfStudy);
    }
}

bool Student::validateNameLastName() {
    try{
        this->validateNameCharacters(this->name);
    } catch(InvalidNameCharactersException error) {
        return false;
    }
    try{
        this->validateNameCharacters(this->lastName);
    } catch(InvalidNameCharactersException error) {
        return false;
    }
    return true;
    
}
bool Student::validateNameCharacters(std::string toValidate) {
    if(toValidate.size() <= 0) {
        throw InvalidNameCharactersException(toValidate);
    }
    if(toValidate[0] < 65 || toValidate[0] > 90) {
        throw InvalidNameCharactersException(toValidate);
    }
    for(int i=1;i<toValidate.size();i++) {
        if(toValidate[i] < 97 || toValidate[i] > 122) {
            throw InvalidNameCharactersException(toValidate);
        }
    }
    return true;
}
bool Student::validateAge() {
    if(this->age < 10 || this->age > 100) {
        throw InvalidAgeException(this->age);
    }
    return true;
}
bool Student::validateFieldOfStudy() {
    if(this->fieldOfStudy != "informatyka" && this->fieldOfStudy != "ekonomia" && this->fieldOfStudy != "matematyka" && this->fieldOfStudy != "fizyka" && this->fieldOfStudy != "filozofia") {
        throw InvalidProgramException(this->fieldOfStudy);
    }
    return true;
}