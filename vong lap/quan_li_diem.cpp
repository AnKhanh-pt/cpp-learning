#include <iostream>
#include <string>
#include <cctype>
#include <iomanip>

using namespace std;

int in_Menu () ;
string chuan_hoa_ten(string input);
bool diem_hop_le_khong(float diem);
void xep_loai (int vi_tri, float diem, string ds_xep_loai[]);
void in_border(int number);

int main() {
    float diem[12];
    string hoc_sinh[12];
    string ds_xep_loai [12];

    int so_hoc_sinh = 0;
    int action;

    int do_rong_bang = 65;
    
    int do_rong_cot_stt = 5;
    int do_rong_cot_ten = 25;
    int do_rong_cot_diem = 10;
    int do_rong_cot_xep_loai = 20;

    do {
        in_Menu();
        cin >> action;
        cin.ignore();

        switch (action) {
            case 1: {
                if(so_hoc_sinh == 12) {
                    cout << "Đã nhập đủ số học sinh" << endl;
                }else {
                    cout << "Nhập thiếu số học sinh" << endl;
                }
                // Nhập hoc sinh
                cout << "Học sinh thứ " << so_hoc_sinh + 1 << endl;
                cout << "Họ và tên: ";
                getline(cin, hoc_sinh[so_hoc_sinh]);
                hoc_sinh[so_hoc_sinh] = chuan_hoa_ten(hoc_sinh[so_hoc_sinh]);

                cout << "Điểm trung bình: ";
                cin >> diem[so_hoc_sinh];

                if (diem_hop_le_khong(diem[so_hoc_sinh])) {
                    xep_loai(so_hoc_sinh, diem[so_hoc_sinh], ds_xep_loai);
                    so_hoc_sinh += 1;
                } else {
                    cout << "Điểm trung bình phải từ 0 đến 10. Hãy nhập lai." << endl;
                }
                break;
            }
            case 2: {
                // Xuất danh sách
                
                // In hang tiêu đề bảng xếp loại
                in_border(do_rong_bang);
                cout << "| STT | Họ và tên               | Điểm     | Xếp loại          |" << endl;
                in_border(65);

                for(int i = 0; i < so_hoc_sinh; i++) {
                    
                    // in cot thu tu
                    cout << "| " << left << setw(do_rong_cot_stt - 1)<< i + 1; 
                    
                    // in cot ho ten
                    cout <<"| " << left << setw(do_rong_cot_ten - 1) << hoc_sinh[i];

                    // in cot diem
                    cout <<"| " << left << setw(do_rong_cot_diem - 1) << diem[i];

                    // in cot xep loại
                    cout <<"| " << left << setw(do_rong_cot_xep_loai - 1) << ds_xep_loai[i];

                    // xuong dong
                    cout << "|" << endl;
                    in_border(do_rong_bang);
                }
                
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

string chuan_hoa_ten(string input){
    string output = "";

    // bỏ các dấu cách thừa, chỉ để lại dấu cách sau mỗi từ
    for (char c : input) {
        if(isspace(c)) {
            if(output.length() != 0 && !isspace(output[output.length() - 1])) {
                output += c;
            }
        }else {
            output += c;
        }
    }

    //Bỏ dấu cách cuối câu nếu có
    if(isspace(output[output.length() - 1])) {
        output = output.substr(0, output.length() - 1);
    } 

    // viet hoa cac chu cai dau
    bool newWord = true;
    for (char &c : output) {
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

    return output;
}

bool diem_hop_le_khong(float diem) {
    if (diem >= 0 && diem <= 10) {
        return true;
    } else {
        return false;
    }
}

void xep_loai(int vi_tri, float diem, string ds_xep_loai[]) {
    if(diem >= 8.5) {
        ds_xep_loai[vi_tri] = "Xuất sắc";
    }else if(diem >= 7) {
        ds_xep_loai[vi_tri] = "Khá";
    }else if( diem >= 5) {
        ds_xep_loai[vi_tri] = "Trung Bình";
    }else {
        ds_xep_loai[vi_tri] = "Yếu";
    }
}

void in_border(int number) {
    for(int i = 0; i < number; i++) {
        cout << "-";
    }
    cout << endl;
}
