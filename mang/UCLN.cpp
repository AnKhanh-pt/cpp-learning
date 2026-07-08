#include <iostream>
using namespace std;

int UCLN(int a, int b);

int main() {
    int a;
    int b;
    cout << "Nhập số a: " ;
    cin >> a;
    cout << "Nhập số b: ";
    cin >> b;
    cout << "Ước chung lớn nhất của" << a << " và " << b << " là: " << UCLN(a, b);

    return 0;
}

int UCLN(int a, int b) {
    if(b == 0) return a;
    return UCLN(b, a % b);
}
