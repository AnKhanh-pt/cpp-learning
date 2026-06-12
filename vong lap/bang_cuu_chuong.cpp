#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhập số nguyên của bạn (1-9): ";
    cin >> n;
    // 5 * 1 = 5
    // 5 * 2 = 10
    for (int i = 1; i <= 9; i ++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }

    return 0;
}