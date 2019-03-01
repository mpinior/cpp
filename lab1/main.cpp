#include <iostream>

using namespace std;

int itfactorial(int a){
    int wynik=1;
    if (a==0) return wynik;
    for (int i=1; i<=a; i++){
        wynik = wynik * i;
    }
    return wynik;

}

int recfactorial(int a){
    if (a==0) return 1;
    return a * recfactorial(a-1);
}

int main()
{
    int liczba;
    cout<<"Podaj liczbe:";
    cin>>liczba;
    cout<<"Wynik to:"<<endl<<itfactorial(liczba)<<endl<<recfactorial(liczba)<<endl;
    return 0;
}
