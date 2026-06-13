#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhập n của bạn: ";
    cin >> n;
    int giai_thua = 1;
    for (int i = 1; i <= n; i++) {
        giai_thua = giai_thua * i;
    } 
    cout << "Giai thừa của " << n << " là: " << giai_thua;

    return 0;
}