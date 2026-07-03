#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int main () {
    string s;
    getline(cin, s);

    // Loai bo cac ky tu trang o dau
    string s1;
    bool firstWord = false;
    for (int i = 0 ; i < s.length() ; i++){
        if (!isspace(s[i])){
            firstWord = true;
        }
        if (firstWord) {
            s1 = s1 + s[i];
        }
    }
    s = s1;
    s1 = "";

    // Loai bo cac ký tu trang o sau
    bool lastWord = false;
    for (int i = s.length() - 1 ; i >= 0 ; i--){
        if (!isspace(s[i])){
            lastWord = true;
        }
        if (lastWord) {
            s1 = s[i] + s1;
        }
    }

    s = s1;
    s1 = "";
   
    // Bo ky tu trang thua o giua moi tu
    bool firstSpace = false;
    for (int i = 0 ; i < s.length() ; i++){
        if (isspace(s[i])){
            if (!firstSpace){
                firstSpace = true;
                s1 += s[i];
            }
        }else{
            s1 += s[i];
            firstSpace = false;
        }
    }

    s = s1;

    // Viet hoa cac chu cai dau
    bool newWord = true;
    for (char &c : s) {
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

    cout << s;
}