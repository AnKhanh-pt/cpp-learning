#include <iostream>
using namespace std;

int main() {
    double so[10] = {5, 9, 1, 4, 1, 3, 77 , 10, 6, 74};
    int n;
    cout << "Nhập số cần tìm: ";
    cin >> n;
    bool tim_thay = false;
    for(int i = 0; i < 10; i++) {
        if( n == so[i] ) {
            tim_thay = true;
            cout << "Vị trí cần tìm là: " << i << endl;
        }
    }
    if(!tim_thay) {
        cout << "Không tìm thấy";
    }
    return 0;
}