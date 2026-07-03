#include <iostream>
using namespace std;

double giai_thua(int n);

int main() {
    int n;
    cout << "Nhập n: ";
    cin >> n;
    cout <<  n << "! = " << giai_thua(n);


    return 0;

}

double giai_thua(int n) {
    if (n <= 1) return 1;
    return n * giai_thua(n - 1);
}