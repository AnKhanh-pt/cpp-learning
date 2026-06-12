#include <iostream>
using namespace std;

int main() {

    int n;
    int sum = 0;

    cout << "Hãy nhập n: ";
    cin >> n;
    for (int i = 1; i<= n; i++) {
        sum = sum + i;
    }

    cout << "Tổng từ 1 đến n là: " << sum << endl;

    return 0;
}