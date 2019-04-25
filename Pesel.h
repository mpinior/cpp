#include <iostream>

class Pesel{
    std::string pesel;

    public:
        Pesel(std::string pesel);
        ~Pesel();

        bool validatePesel();
};