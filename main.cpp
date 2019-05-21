#include <iostream>
#include <vector>
#include "Repository.h"
#include "Query.h"
#include "Student.h"
#include "Employee.h"

int main() {
    Repository<Student> studentRepository;
    Repository<Employee> employeeRepository;
    studentRepository.Add(Student("Malgorzata", "Pinior", "Informatyka", 1));
    studentRepository.Add(Student("Gabriela", "Stolar", "Informatyka Stosowana", 2));
    employeeRepository.Add(Employee("Kazimierz", "Wojcik", 542));
    std::cout<<"Size: "<<studentRepository.Size()<<std::endl;
    ByFirstName<Student> q1("Malgorzata");
    ByOneOfPrograms<Student> q2("Informatyka Stosowana");
    OrQuery<Student> orQ(&q1, &q2);
    std::vector<Student> answer1;
    answer1 = studentRepository.FindBy(orQ);
    for(int i=0;i<answer1.size();i++) {
        answer1[i].Show();
    }
    studentRepository[0].Show();
    std::cout<<std::endl;
    std::cout<<"Size: "<<employeeRepository.Size()<<std::endl;
    ByFirstName<Employee> q3("Kazimierz");
    ByLastName<Employee> q4("Wojcik");
    OrQuery<Employee> andQ(&q3, &q4);
    std::vector<Employee> answer2;
    answer2 = employeeRepository.FindBy(andQ);
    for(int i=0;i<answer2.size();i++) {
        answer2[i].Show();
    }
    employeeRepository[0].Show();
    std::cout<<std::endl;
    return 0;
}