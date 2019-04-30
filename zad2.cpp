#include <iostream>
#include "Student.h"

int main() {
    std::string name;
    std::string surname;
    int age;
    std::string program;
    std::cout<<"Name: ";
    std::cin>>name;
    std::cout<<"Surname: ";
    std::cin>>surname;
    std::cout<<"Age: ";
    std::cin>>age;
    std::cout<<"Field of study: ";
    std::cin>>program;
    try {
        Student newStudnet(age, name, surname, program);
    } catch(InvalidNameSurnameException error) {
        std::cout<< error.what() << ": " << error.GetContent() << std::endl;
    } catch(InvalidNameCharactersException error) {
        std::cout<< error.what() << ": " << error.GetContent() << std::endl;
    } catch(InvalidAgeException error) {
        std::cout<< error.what() << ": " << error.GetContent() << std::endl;
    } catch(InvalidProgramException error) {
        std::cout<< error.what() << ": " << error.GetContent() << std::endl;
    }
    return 0;
}