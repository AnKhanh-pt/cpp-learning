#include <iostream>
using namespace std;

double tinh_dien_tich(double CD, double CR) {
    return CD * CR;
}

int main() {
    double d;
    double r;
    cout << "Nhập chiều dài: ";
    cin >> d;
    cout << "Nhập chiều rộng: ";
    cin >> r;
     
    if(d <= 0 || r <= 0) {
        cout << "Độ dài phải dương";
        return 1;
    }

    cout << "Chiều dài: " << d << endl;
    cout << "Chiều rộng: " << r << endl;
    cout << "Diện tích của hình chữ nhật là: " << tinh_dien_tich(d, r);
    return 0;
}