#include <iostream>
using namespace std;

int main() {
    int diem;

    cout << "Hãy nhập điểm của bạn: ";
    cin >> diem;
    if( diem < 5){
        cout << "Bạn đã trượt";
    } else if (diem >=5 && diem <= 7){
        cout << "Bạn đủ điểm";
    } else {
        cout << "Bạn xuất sắc";
        
    }

    return 0;
}