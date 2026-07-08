#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

string chuan_hoa_ten(string input){
    string output = "";

    // bỏ các dấu cách thừa, chỉ để lại dấu cách sau mỗi từ
    for (char c : input) {
        if(isspace(c)) {
            if(output.length() != 0 && !isspace(output[output.length() - 1])) {
                output += c;
            }
        }else {
            output += c;
        }
    }

    //Bỏ dấu cách cuối câu nếu có
    if(isspace(output[output.length() - 1])) {
        output = output.substr(0, output.length() - 1);
    } 

    // viet hoa cac chu cai dau
    bool newWord = true;
    for (char &c : output) {
        if (isspace(c)) {
            newWord = true;
        } else {
            if (newWord) {
                c = toupper(c);
                newWord = false;
            } else {
                c = tolower(c);
            }
        }
    }

    return output;
}

int main () {
    string ho_ten = "   phan  tran    an khanh   ";
    //getline(cin, ho_ten);
    
    cout << chuan_hoa_ten(ho_ten);

    return 0;
}

