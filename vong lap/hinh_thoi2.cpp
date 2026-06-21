#include <iostream>
using namespace std;

int main() {
    int n = 7;

// Nửa trên (bao gồm dòng giữa)
for (int i = 1; i <= n; i += 2) {
    // In khoảng trắng
    for (int j = 0; j < (n - i) / 2; j++)
        cout << " ";
    // In sao
    for (int j = 0; j < i; j++)
        cout << "*";
    cout << endl;
}

// Nửa dưới
for (int i = n - 2; i >= 1; i -= 2) {
    for (int j = 0; j < (n - i) / 2; j++)
        cout << " ";
    for (int j = 0; j < i; j++)
        cout << "*";
    cout << endl;
}

    return 0;
}