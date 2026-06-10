#include <iostream>
using namespace std;

int main() {
        string name;
        int age;
        double toan, ly, hoa;

        cout <<" Nhập tên sinh viên: ";
        getline(cin, name);
        
        cout <<"Nhập tuổi sinh viên: ";
        cin >> age;

        cout <<"Nhập điểm toán: ";
        cin >> toan;

        cout <<"Nhập điểm lý: ";
        cin >> ly;

        cout <<"Nhập điểm hoá: ";
        cin >> hoa;

        double diemTB = (toan + ly + hoa) / 3;

        cout << "Thong tin sinh vien: " << endl;
        cout << "Ten: " << name << endl;
        cout << "Tuoi: " << age << endl;
        cout << "Điểm trung bình: " << diemTB<< endl;

        if (diemTB >= 8.0) {
            cout << name << " loại giỏi" << endl;
        } else if ((diemTB >= 6.5) || (diemTB >= 8.0) ) {
                cout << name << " loại khá" << endl;
        } else if ( diemTB >= 5.0) {
            cout << name << " loại trung bình khá" << endl;
        } else {
            cout << name << " loại trung bình" << endl;
        }

    return 0;
}