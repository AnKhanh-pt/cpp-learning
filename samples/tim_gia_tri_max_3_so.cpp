#include <iostream>
using namespace std;

int main() {
    // Khai bao các biến
    int a, b, c, max;
    
    // //Nhập số a 
    // cout << "Hãy nhập số a: ";
    // cin >> a;

    // // Nhập số b
    // cout << "Hãy nhập số b: ";
    // cin >> b;

    // // Nhập số c
    // cout << "Hãy nhập số c: ";
    // cin >> c;
    
    //Nhập số a, b, c 
    cout << "Hãy nhập số a, b, c: ";
    cin >> a;
    cin >> b;
    cin >> c;

    // Tìm max
    max = a;
    if (max < b) {
        max = b;
        if (max < c) {
            max = c;
        }
    }  
   
    cout << "Số lớn nhất là: " << max;

    return 0;
}
 