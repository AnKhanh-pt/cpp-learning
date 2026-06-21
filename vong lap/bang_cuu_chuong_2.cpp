#include <iostream>
using namespace std;

int main() {
    int bang[9][9];
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            bang[i][j] = (i + 1) * (j + 1);
        }
    }
    cout << "---BẢNG CỬU CHƯƠNG---" << endl;
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << (i + 1) << " x " << (j + 1) << " = " << bang[i][j] << endl;
        }
        cout << endl;
    }
    return 0;
}