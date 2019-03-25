#include "Name.h"
#include <string>

Name::Name(){
    
}

Name::Name(std::string name_surname){
    int spaces=0;
    std::string tmp;
    for (int i=0; i<name_surname.length(); i++){
        if (name_surname[i] != ' '){
            tmp += name_surname[i];
        }
        else{
            spaces++;
            if (spaces == 1){
                this->First = tmp;
            }
            if (spaces == 2){
                this->Second = tmp;
            }
            if (spaces == 3){
                this->Third = tmp;
            }
            tmp = "";
        }
    }
    this->Surname = tmp;
}

Name::~Name(){

}


std::string Name::GetFirst(){
    return this->First;
}
std::string Name::GetSecond(){
    return this->Second;
}
std::string Name::GetThird(){
    return this->Third;
}
std::string Name::GetSurname(){
    return this->Surname;
}


void Name::SetFirst(std::string First){
    this->First = First;
}
void Name::SetSecond(std::string Second){
    this->Second = Second;
}
void Name::SetThird(std::string Third){
    this->Third = Third;
}
void Name::SetSurname(std::string Surname){
    this->Surname = Surname;
}

  
std::string Name::ToFullInitials(){
    std::string FullInitials;
    if (this->First.size() != 0){
        FullInitials +=this->First[0];    
        FullInitials +=".";
    }
    if (this->Second.size() != 0){
        FullInitials +=this->Second[0];
        FullInitials +=".";
    }
    if (this->Third.size() != 0){
        FullInitials +=this->Third[0];
        FullInitials +=".";
    }
    if (this->Surname.size() != 0){
        FullInitials +=this->Surname[0];
        FullInitials +=".";
    }
    return FullInitials;
}   

std::string Name::ToFirstNamesInitials(){
    std::string NamesInitials;
    if (this->First.size() != 0){
        NamesInitials +=this->First[0];    
        NamesInitials +=".";
    }
    if (this->Second.size() != 0){
        NamesInitials +=this->Second[0];
        NamesInitials +=".";
    }
    if (this->Third.size() != 0){
        NamesInitials +=this->Third[0];
        NamesInitials +=".";
    }
    NamesInitials += this->Surname;
    return NamesInitials;
}

std::string Name::ToSurnameNames(){
    std::string SnToName;
    SnToName += this->Surname;
    SnToName +=" ";
    if (this->First.size() != 0){
        SnToName +=this->First;
        SnToName +=" ";    
    }
    if (this->Second.size() != 0){
        SnToName +=this->Second;
        SnToName +=" "; 
    }
    if (this->Third.size() != 0){
        SnToName +=this->Third;
        SnToName +=" "; 
    }
    return SnToName; 
}       

std::string Name::ToNamesSurname(){
    std::string NameToSn;
    if (this->First.size() != 0){
        NameToSn +=this->First;
        NameToSn +=" ";     
    }
    if (this->Second.size() != 0){
        NameToSn +=this->Second;
        NameToSn +=" ";
    }
    if (this->Third.size() != 0){
        NameToSn +=this->Third;
        NameToSn +=" ";
    }
    NameToSn += this->Surname;
    return NameToSn; 
}      
void Name::IsBeforeBySurname(std::string key){
    std::string Sn;
    for (int i=0; i<this->Surname.length(); i++){
        if (int(this->Surname[i]) >= 65 and int(this->Surname[i]) <=90){
            Sn += this->Surname[i] + 32;
        }
        else{
            Sn += this->Surname[i];
        }
    }
    for (int i=0; i<key.length(); i++){
        if( int(key[i]) >= 65 and int(key[i]) <= 90){
            key[i] = key[i] + 32;
        }
    }

    int index=0;
    while (true){
        if (key[index] == Sn[index]){
            index++;
            continue;
        }
        else if (key[index] < Sn[index]){
            if (key.length() < Sn.length()){
                std::cout<<"Nazwisko jest dalej w alfabecie"<<std::endl;
                break;
            }
        }
        else if(key[index] > Sn[index]){
            if (key.length() < Sn.length()){
                std::cout<<"Nazwisko jest blizej w alfabecie"<<std::endl;
                break;
            }
        }
        if (key.length() == Sn.length()){
            std::cout<<"Sa takie same"<<std::endl;
            break;
        }
        else if (key.length() > Sn.length()){
            std::cout<<"Nazwisko jest blizej w alfabecie"<<std::endl;
            break;
        }
        else if (key.length() < Sn.length()){
            std::cout<<"Nazwisko jest dalej w alfabecie"<<std::endl;
            break;
        }
    }
}

void Name::IsBeforeByFirstName(std::string key){
    std::string name;
    for (int i=0; i<this->First.length(); i++){
        if (int(this->First[i]) >= 65 and int(this->First[i]) <=90){
            name += this->First[i] + 32;
        }
        else{
            name += this->First[i];
        }
    }
    for (int i=0; i<key.length(); i++){
        if( int(key[i]) >= 65 and int(key[i]) <= 90){
            key[i] = key[i] + 32;
        }
    }

    int index=0;
    while (true){
        if (key[index] == name[index]){
            index++;
            continue;
        }
        else if (key[index] < name[index]){
            if (key.length() < name.length()){
                std::cout<<"Imie jest dalej w alfabecie"<<std::endl;
                break;
            }
        }
        else if(key[index] > name[index]){
            if (key.length() < name.length()){
                std::cout<<"Imie jest blizej w alfabecie"<<std::endl;
                break;
            }
        }
        if (key.length() == name.length()){
            std::cout<<"Sa takie same"<<std::endl;
            break;
        }
        else if (key.length() > name.length()){
            std::cout<<"Imie jest blizej w alfabecie"<<std::endl;
            break;
        }
        else if (key.length() < name.length()){
            std::cout<<"imie jest dalej w alfabecie"<<std::endl;
            break;
        }
    }

}
