#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhập số: ";
    cin >> n;
    int a = 0;
    int b = 1;
    int c;
    cout << a << ", " << b;
    for (int j = 3; j<=n; j++ ){
        cout << ", " << a + b;
        c = a + b;
        a = b;
        b = c;
    }
    return 0;
}