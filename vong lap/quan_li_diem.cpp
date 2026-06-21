#include <iostream>
using namespace std;

int in_Menu () {
    cout << "--- Hệ thống quản lí điểm ---" << endl;
    cout << "1. Nhập điểm học sinh (tối đa 10 học sinh)" << endl;
    cout << "2. Tính điểm trung bình cả lớp" << endl;
    cout << "3. Tìm điểm cao nhất và thấp nhất" << endl;
    cout << "4. Đếm số học sinh đậu (>= 5)" << endl;
    cout << "5. In danh sách xếp loại (A/B/C/D/F)" << endl;
    cout << "0. Thoát" << endl;

    return 0;

}

int main() {
    double diem[10];
    int so_hoc_sinh = 0;
    int action;
    do {
        in_Menu();
        cin >> action;
        switch (action) {
            case 1: {
                    // Nhập điểm học sinh (tối đa 10 học sinh)
                    cout << "Hãy nhập điểm học sinh thứ " << so_hoc_sinh + 1 << ": ";
                    cin >> diem[so_hoc_sinh];
                    if (diem[so_hoc_sinh] >= 0 && diem[so_hoc_sinh] <= 10) {
                        cout << "Điểm học sinh thứ " << so_hoc_sinh + 1 << " :" << diem[so_hoc_sinh] << endl;
                        so_hoc_sinh += 1;
                    } else {
                        cout << "Điểm từ 0 đến 10" << endl;
                    }
                    break;
            }
            case 2: {
                    // Tính điểm trung bình cả lớp
                    if (so_hoc_sinh == 0) {
                        cout << "Cần nhập điểm cho ít nhất 1 học sinh" << endl;;
                        break;
                    }
                    int sum = 0;
                    for (int i = 0; i < so_hoc_sinh; i++) {
                        sum += diem[i];
                    }
                    cout << "Điểm trung bình là: " << (double) sum / so_hoc_sinh << endl;

                    break;
            }
            case 3: {
                    // Tìm điểm cao nhất và thấp nhất" 
                    if (so_hoc_sinh == 0) {
                        cout << "Cần nhập điểm cho ít nhất 1 học sinh" << endl;
                        break;
                    }
                    int max = diem[0];
                    int min = diem[0];
                    for (int i = 1; i < so_hoc_sinh; i++) {
                        if (max < diem[i]) {
                            max = diem[i];
                        }
                        if (min > diem[i]) {
                            min = diem[i];
                        }
                    }
                    cout << "Điểm cao nhất là: " << max << endl;
                    cout << "Điểm thấp nhất là: " << min << endl;
                    break;
            }
            case 4: {
                    //  Đếm số học sinh đậu (>= 5)
                    if (so_hoc_sinh == 0) {
                        cout << "Cần nhập điểm cho ít nhất 1 học sinh" << endl;
                        break;
                    }
                    int so_hoc_sinh_dat = 0;
                    for (int i = 0; i< so_hoc_sinh; i++){
                        if (diem[i] >= 5) {
                            so_hoc_sinh_dat += 1;
                        }
                    }
                    cout << "Số học sinh đạt là: " << so_hoc_sinh_dat << endl;
                    break;
            }
            case 5: {
                    // In danh sách xếp loại (A/B/C/D/F)
                    if (so_hoc_sinh == 0) {
                        cout << "Cần nhập điểm cho ít nhất 1 học sinh" << endl;
                        break;
                    }
                    for (int i = 0; i < so_hoc_sinh; i++) {
                        char xep_loai;
                        if (diem[i] <= 2) {
                            xep_loai = 'E';
                        } else if (diem[i] <= 4) {
                            xep_loai = 'D';
                        } else if (diem[i] <= 6) {
                            xep_loai = 'C';
                        } else if (diem[i] <= 8) {
                            xep_loai = 'B'; 
                        } else {
                            xep_loai = 'A';
                        }
                     cout << "Học sinh thứ " << i << " xếp loại " << xep_loai << endl; 

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