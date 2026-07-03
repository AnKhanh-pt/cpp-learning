#include <iostream>
using namespace std;
#include <cstring>

bool isPalindrome(string s);

int main() {
    string s;
    cout << "Nhập chuỗi cần kiểm tra: ";
    getline(cin, s);

    if(isPalindrome(s)) {
        cout<< "Chuỗi " << s << " là dãy Palindrome";
    }else {
        cout <<"Chuỗi " << s << " không là dãy Palindrome";
    }

    return 0;

}

bool isPalindrome(string s) {
    // Neu ky tu dau cua s và ký tự cuối của s bằng nhau
    if(s[0] == s[s.length() - 1]) {
        if(s.length() == 2 || s.length() == 3) {
            return true;
        }else {
            // Tao chuoi moi không gồm ký tự đầu và ký tự cuối
            // Gọi de quy
            return isPalindrome (s.substr(1, s.length() - 2)); 
        }
    }else {
        return false;
    }
}