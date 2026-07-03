#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int in_Menu () ;
string chuan_hoa_ten(string s);
bool diem_hop_le_khong(float diem);

int main() {
    float diem[12];
    string hoc_sinh[12];
    int so_hoc_sinh = 0;
    int action;

    do {
        in_Menu();
        cin >> action;
        cin.ignore();
        
        switch (action) {
            case 1: {
                // Nhập hoc sinh
                cout << "Học sinh thứ " << so_hoc_sinh + 1 << endl;
                cout << "Họ và tên: ";
                getline(cin, hoc_sinh[so_hoc_sinh]);
                hoc_sinh[so_hoc_sinh] = chuan_hoa_ten(hoc_sinh[so_hoc_sinh]);

                cout << "Điểm trung bình: ";
                cin >> diem[so_hoc_sinh];

                if (diem_hop_le_khong(diem[so_hoc_sinh])) {
                    so_hoc_sinh += 1;
                } else {
                    cout << "Điểm trung bình phải từ 0 đến 10. Hãy nhập lai." << endl;
                }
                break;
            }
            case 2: {
                    // Tính điểm trung bình cả lớp
                    
                    break;
            }
            case 0: {
                    // Thoát
                    break;
            }
            default: {
                cout << "Lựa chọn không phù hợp";
            }
        }
    } while (action != 0);
    
    return 0;
}

int in_Menu () {
    cout << "--- Hệ thống quản lí điểm ---" << endl;
    cout << "1. Nhập học viên" << endl;
    cout << "2. Xuất danh sách" << endl;
    cout << "0. Thoát" << endl;
    cout << "Action: ";
    return 0;

}

string chuan_hoa_ten(string s){

    bool newWord = true;
    for (char &c : s) {
        if (isspace(c)) {
            newWord = true;
        } else {
            if (newWord) {
                c = toupper(c);
                newWord = false;
            } else {
                c = tolower(c);
            }
        }
    }
    return s;
}

bool diem_hop_le_khong(float diem) {
    if (diem >= 0 && diem <= 10) {
        return true;
    } else {
        return false;
    }
}