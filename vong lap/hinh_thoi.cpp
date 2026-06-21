#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhập số n lẻ: ";
    cin >> n;
    // Ve nưa tren hinh thoi
    for (int i = 1; i < n; i += 2) {
        // Ve khoang trang phia truoc
        for (int j = 1; j <= (n - i) / 2; j++) {
            cout << " "; 
        }
        // Ve cac diem *
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        cout << endl;   
    }

    // Ve dong giua
    for (int i = 1; i <= n; i++) {
        cout << "*";
    }
    cout << endl;

    //Ve nua duoi hinh thoi
    for (int i = 1; i <= (n - 1) / 2; i ++) {
        // Ve khoang trong phia truoc
        for (int j = 1; j <= i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= n - 2*i; j++) {
            cout << "*";
        }
        
        cout << endl;
    }


    return 0;
}