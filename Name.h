#include <iostream>


class Name{
    private:
        std::string First;
        std::string Second;
        std::string Third;
        std::string Surname;

    public:
        //konstruktory + destruktor
        Name();
        Name(std::string name_surname);
        ~Name();

        // Gettery z imionami i nazwiskami
        std::string GetFirst();
        std::string GetSecond();
        std::string GetThird();
        std::string GetSurname();

        // Settery (jeśli się pomylę i chcę zmienić)
        void SetFirst(std::string First);
        void SetSecond(std::string Second);
        void SetThird(std::string Third);
        void SetSurname(std::string Surname);

        // metody
        std::string ToFullInitials();   // Same inicjały
        std::string ToFirstNamesInitials(); // Inicjały + całe nazwisko
        std::string ToSurnameNames();       // Nazwisko i imiona
        std::string ToNamesSurname();       // imiona i nazwisko
        void IsBeforeBySurname(std::string key);    // podany klucz, alfabetycznie po nazwisku
        void IsBeforeByFirstName(std::string key); // podany klucz, alfabetycznie po imieniu
};