#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;
int main () {
    string s;
    getline(cin, s);

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