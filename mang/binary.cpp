#include <iostream>
using namespace std;

int main() {
    double so[10] = {1, 4, 6, 7, 9, 13, 17, 23, 31, 55};
    int trai = 0;
    int phai = 9;
    int n;
    int giua;

    cout << "Nhập số cần tìm: ";
    cin >> n;
    
    while ( trai <= phai) {
        giua = (trai + phai) / 2;
        if(so[giua] == n) {
            cout << "Số " << n << " nằm ở " << giua << endl;
            break;
        }else if(so[giua] < n) {
            trai = giua + 1;
        }else {
            phai = giua - 1;
        }
    }
    if( trai > phai) {
        cout << "Không tìm thấy" << endl;
    }
    return 0;
}