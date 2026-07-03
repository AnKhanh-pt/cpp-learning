#include <iostream>
using namespace std;

int tong_cac_chu_so(int n);

int main() {
    int n;
    cout << "Nhập n: ";
    cin >> n;
    cout << "Tổng các chữ số của " << n << " là: " << tong_cac_chu_so(n) << endl;

    return 0;
}

// n =1234
int tong_cac_chu_so(int n) {
    if (n / 10 == 0) return n;
    return n % 10 + tong_cac_chu_so(n / 10);
}
