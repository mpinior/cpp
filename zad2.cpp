#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

string PolybiusCrypt(string message) {
    string answer;
    int j=0;
    for (int i=0; i<message.length(); i++){
        char letter = message[i];
        if (letter >= 106){
            letter -=1;
        }
        letter -= 96;
        char first = letter/6 + 49;
        char second = (letter-1)%5 +49;
        answer[j] = first;
        answer[j+1] = second;
        answer[j+2] = ' ';
        j+=3;
    }
    answer[j]='\n';
    return answer;
}

string PolybiusDecrypt(string crypted) {
    string answer;
    int j=0;
    for(int i=0;i<crypted.length();i+=3) {
        if (crypted[i] == ' ') continue;
        char tmp;
        int first = (crypted[i] - 49)*5;
        int second = crypted[i+1] - 48;
        tmp = first + second + 96;
        if (tmp > 105) {
            tmp++;
        }
        answer[j]=tmp;
        j++;
    }
    answer[j]='\n';
    return answer;
}

int main(int argc, char *argv[]){
    ifstream file_read;
    file_read.open(argv[1]);
    ofstream file_write;
    file_write.open(argv[2]);
    if (file_read.good()==false)    cout<<"error"<<endl;
    else{
        if (!strcmp(argv[3], "1")){
            string line;
            while (getline(file_read, line)) {
                string tmp = PolybiusCrypt(line);
                int i=0;
                while(tmp[i] != '\n') {
                    file_write << tmp[i];
                    i++;
                }
                file_write << '\n';
            }
        }
        else {
            string line;
            while (getline(file_read, line)) {
                string tmp = PolybiusDecrypt(line);
                int i=0;
                while(tmp[i] != '\n') {
                    file_write << tmp[i];
                    i++;
                }
                file_write << '\n';
            }
        }
    }

    file_read.close();
    file_write.close();

    return 0;
}
