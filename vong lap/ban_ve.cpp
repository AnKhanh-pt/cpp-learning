#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int menu() {
    cout << "---Trang bán vé concert---" << endl;
    cout << "Nhấn 1 để nhập thông tin: " << endl;
    cout << "Nhấn x hoặc X để thoát" << endl;

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

int main () {
    char action;

    string ho_ten;
    int nam_sinh;
    char la_hssv;
    int tuoi;

    do {
        menu();
        cin >> action;
        action = toupper (action);
        cin.ignore();

        switch (action) {
            case '1': {
                cout << "Họ và tên: ";
                getline(cin, ho_ten);

                cout << "Năm sinh: ";
                cin >> nam_sinh;
                
                cout << "Bạn có phải là học sinh, sinh viên không? (Y/N): ";
                cin >> la_hssv;
                
                tuoi = 2026 - nam_sinh;
                if (tuoi > 55 || tuoi < 8) {
                    cout << "Chào bạn  " << chuan_hoa_ten(ho_ten) << "!" << " Giá vé của bạn là miễn phí." << endl;
                } else if (toupper (la_hssv) == 'Y') {
                    cout << "Chào bạn  " << chuan_hoa_ten(ho_ten) << "!" << " Giá vé của bạn là 5.000" << endl;
                } else {
                    cout << "Chào bạn  " << chuan_hoa_ten(ho_ten) << "!" << " Giá vé của bạn là 10.000" << endl;
                }
                break;
            }      
            case 'X': {
                    // Thoát
                    break;
            }
            default: {
                cout << "Lựa chọn không phù hợp";
            }
        }

    } while (action != 'X');
    
    return 0;
}