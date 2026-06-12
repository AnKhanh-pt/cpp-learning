#include <iostream>
using namespace std;

int main() {
    int tong = 0;
    for (int i = 1; i <= 100; i++) {
        tong += i;
    } 
    cout << "Tổng từ 1 đến 100 là: " << tong << endl;

    return 0;
}