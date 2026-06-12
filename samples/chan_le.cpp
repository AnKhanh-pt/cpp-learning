#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhập số nguyên: ";
    cin >> n;
    if ( n % 2 == 0) {
        cout << n << " là số chẵn " << endl;
    } else {
        cout << n << " là số lẻ " << endl; 
    }
    return 0;
}