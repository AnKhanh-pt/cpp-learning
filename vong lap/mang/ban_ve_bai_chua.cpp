#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string chuanHoaTen(string ten){
    // chuyen char chuan (tim ham chuyen string to char[])
    // thao tac truc tiep tren string
    string output = "";
    bool isUpper = true;

    for (int i = 0; i < ten.length(); i++){
        if(isspace(ten[i])){
            if(!output.empty() && output.back() != ' '){
                output += ' ';
                isUpper = true;
            }
        } else {
            if(isUpper){
                output += toupper(ten[i]);
                isUpper = false;
            }else{
                output += tolower(ten[i]);
            }
        }
    }

    if(!output.empty() && output.back() == ' '){
        output.pop_back();
    }

    return output;
}


int main(){
/*

Làm 1 hệ thống quản lý vé tự động.
- Xử lý bán vé cho nhiều khách hàng. Chỉ dừng lại khi nhập phím 'x' || 'X'
- TTQL mua vé: họ tên, năm sinh, đối tương (HS-SV, Già (>55), trẻ em (<8))
- chuẩn hoá tên
- tính tiền vé: thường 10000, HS-SV 5000, trẻ em-Già miến phí
In toàn bộ thong tin ra màn hình và quay lại vòng lặp nhập thông tin KH mới


    INPUT: char: process, string: ten, int: namSinh, loaiVe
    OUTPUT: string ten, int tuoi, gia ve 

    LOGIC: chuan hoa ten, tinh tuoi tu nam sinh (2026-namSinh), 
    tinh gia tien tu loai ve (1:HS-SV = 5000, 2: tren em = 0, 3: nguoi gia = 0, 4.binh thuong = 10000)
*/

    char process;
    while (true){
        cout << "he thong ban ve tu dong" << endl;

        string hoTen;
        int namSinh, loaiVe, tuoi;
        double giaTien;

        cout << "Nhap ten khach: ";
        getline(cin >> ws, hoTen);
        hoTen = chuanHoaTen(hoTen);

        cout << "Nhap nam sinh: ";
        cin >> namSinh;
        tuoi = 2026 - namSinh;

        cout << "Chon doi tuong: 1.(HS-SV), 2. Nguoi gia | Tre em, 3. ve thuong";
        cin >> loaiVe;
        if(loaiVe == 2 && (tuoi > 8 || tuoi < 55)){
            loaiVe = 3;
        }

        switch(loaiVe){
            case 1:
                giaTien = 5000;
                break;
            case 2:
                giaTien = 0;
                break;
            default:
                giaTien = 10000;
        }

        cout << endl;
        cout << "=====Thong tin ve=====" << endl;
        cout << "Khach Hang: " << hoTen << endl;
        cout << "Nam Sinh: " << namSinh << endl;
        cout << "Gia ve: "<< giaTien << endl;
        cout << endl;
        

        cout << "Nhap 'x' hoac 'X' de thoat chuong trinh";
        cin >> process;
        if(process == 'x' || process == 'X'){
            cout << "Thoat chuong trinh";
            break;
        }
    }

    return 0;
}