#include <iostream>
#include <cstring>
#include <unistd.h>
using namespace std;

int main() {
    int kich_thuoc_mh = 50;
    char message[30];
    
    cout << "Nhập dòng chữ: ";
    cin.getline(message, 30);
    int kich_thuoc_dong_chu = strlen(message);
   
    
    // Hiện dần từ lề phải
    for(int i = 0; i < kich_thuoc_dong_chu; i++) {
        cout << "\r";
        for(int j = 0; j < kich_thuoc_mh - i - 1; j++) {
            cout << " ";
        }
        for(int j = 0; j < i + 1; j++) {
            cout << message[j];
        }
        cout << flush;
        usleep(500000);
    }

    while (true) {
        // Dịch chuyển sang lề trái
        for(int i = 0; i < kich_thuoc_mh - kich_thuoc_dong_chu; i++) {
            cout << "\r";
            for(int j = 0; j < kich_thuoc_mh - kich_thuoc_dong_chu - i - 1; j++) {
                cout << " ";
            }
            cout << message;
            
            for(int j = 0; j < i + 1; j++) {
                cout << " ";
            }

            cout << flush;
            usleep(500000);
        }

        // Biến mất dòng chữ
        for(int i = 0; i < kich_thuoc_dong_chu; i++) {
            cout << "\r";
            for(int j = i + 1; j < kich_thuoc_dong_chu; j++) {
                cout << message [j];
            }
            for(int j = 0; j < kich_thuoc_mh - kich_thuoc_dong_chu; j++) {
                cout << " ";
            }
            for (int j = 0; j < i + 1; j++) {
                cout << message[j];
            }
            cout << flush;
            usleep(500000);
        }
    }


    return 0;
}