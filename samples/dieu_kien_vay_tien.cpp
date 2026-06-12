#include <iostream>
using namespace std;

int main() {
    int age;
    string name;
    string soCCCD;

    cout << "Nhập tên bạn: ";
    getline(cin, name);

    cout << "Nhập tuổi: ";
    cin >> age;

    cout << "Nhập CCCD: ";
    cin >> soCCCD;


    if (age < 18) {
        cout << "Bạn chưa đủ tuổi" << endl;
    } else {
        cout << "Vui lòng nhập căn cước công dân" << endl;
    }   if (soCCCD.length () !=12 ) {
        cout << "Số căn cước công dân của bạn không tồn tại" << endl;

    } else {
        cout << "Mong muốn vay của bạn là bao nhiêu?";
    }
    
    
   
    return 0;
}