#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhập n: ";
    cin >> n;

    for (int i = n; i >= 1; i--) {
        // in hang i
        for (int j = 1; j <= i; j++){
             cout << "*"; 
        }
        // chuan bị dong mới
        cout << endl;
    } 

    return 0;
}