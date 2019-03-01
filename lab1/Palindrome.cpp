#include <iostream>

using namespace std;

bool is_palindrome(string str){
    for (int i=0; i<str.size(); i++){
        if (int(str[i])>= 65 && int(str[i])<= 90){
            str[i] = str[i] + 32;
        }
    }
    for (int i=0; i<(str.size())/2; i++){
        if (str[i] != str[str.size()-1-i]) return 0;
    }
    return 1;
}


int main()
{
    int wybor = 0;
    while (wybor != 1 && wybor != 2) {
        cout<<"1.Sprawdz palindrom"<<endl<<"2.Wyjdz"<<endl;
        cin>>wybor;
    }
    if (wybor ==1){
        string wyraz;
        cout<<"Podaj wyraz: ";
        cin>>wyraz;
        if(is_palindrome(wyraz)) {
            cout<<"Wyraz jest palindromem"<<endl;
        }
        else{
            cout<<"Wyraz nie jest palindromem"<<endl;
        }
    }
    return 0;
}
