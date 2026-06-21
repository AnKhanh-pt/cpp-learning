#include <iostream>
#include <string>
using namespace std;

int main() {
    int so_hoc_sinh;
    cout << "Nhập số học sinh: ";
    cin >> so_hoc_sinh;
    string ten[so_hoc_sinh];
    double diem[so_hoc_sinh];
    double max = 0;
    int vi_tri_max;

    for (int i = 0; i <  so_hoc_sinh; i++) {
        cout << "Tên học sinh thứ " << i + 1 << ": ";
        cin >> ten[i];
        cout << "Điểm của học sinh thứ " << i + 1 << " là: ";
        cin >> diem[i];
        if (diem[i] > max) {
            max = diem[i];
            vi_tri_max = i;
        }
    }
    cout << "Bạn " << ten[vi_tri_max] << " đạt điểm cao nhất: " << max;


    return 0;
}