#include <iostream>
using namespace std;
#include <cstring>

int main() {
    string s;
    cout << "Nhập chuỗi cần kiểm tra: ";
    getline(cin, s);
    bool isPalindrome = true;
    for (int i = 0; i <= s.length()/2 - 1; i++){
        cout << "So sánh " << s[i] << " với " << s[s.length() - 1 - i] << endl;
        if (s[i] != s[s.length() - 1 - i]) {
            cout <<"Chuỗi " << s << " không là dãy Palindrome";
            isPalindrome = false;
            break;
        }
    }
    if(isPalindrome) {
        cout << "Chuỗi " << s << " là dãy Palindrome";

    }
    return 0;
}