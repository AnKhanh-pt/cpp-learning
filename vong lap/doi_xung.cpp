// nhap 1 chuoi tu ban phim sau day dao nguoc chuoi bang 2 cach
// 1. dung ham co san cua string
// 2. duyet string va thao tac voi cac chi muc de dao nguoc chuoi

// toan hoc -> coh naot
#include <iostream>
#include<string>
using namespace std;

void daoChuoi(string &s){
    int n = s.length();
    for (int i = 0; i < n/2 ; i++){
        swap(s[i], s[n-i-1]);
    }
}

// kiem tra chuoi doi xung
// rar, trart
bool checkDoiXung(string s){
    int n = s.length();
    for (int i = 0; i < n/2 ; i++){
        if(s[i] != s[n-i-1]){
            return false;
        }
    }
    return true;
}

bool isPalindrone(string s){
    int left = 0;
    int right = s.length() - 1;

    while (left < right){
        if(s[left] != s[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}

// tim chuoi doi xung trong chuoi dang co

// tranvanan => ana | nan

int main(){
    string input;
    cout << "Nhap chuoi 2: ";
    getline(cin >> ws, input);

    cout << "chuoi ban dau: " << input << endl;
    //reverse(input.begin(), input.end());
    daoChuoi(input);
    cout << "chuoi sau khi dao: " << input;

    return 0;
}