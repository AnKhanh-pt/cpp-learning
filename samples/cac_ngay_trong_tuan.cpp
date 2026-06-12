#include <iostream>
using namespace std;

int main() {
    int ngày;
    cout << "Nhập số từ 1 đến 7" << endl;
    cin >> ngày;

    switch (ngày) {
        case 1:
            cout << "Thứ hai" << endl; break;
        case 2:
            cout << "Thứ ba" << endl; break;
        case 3:
            cout << "Thứ tư" << endl; break;
        case 4:
            cout << "Thứ năm" << endl; break;
        case 5:
            cout << "Thứ sáu" << endl;break;
        case 6: 
            cout << "Thứ bảy" << endl; break;
        case 7:
            cout << "Chủ nhật" << endl; break;
            default:
                cout << "Không tồn tại ngày đó" << endl;

    }
    return 0;
}