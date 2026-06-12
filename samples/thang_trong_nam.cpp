#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhập tháng: ";
    cin >> n;
    if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12)  {
        cout << n << " là tháng có 31 ngày" << endl;
    } else if ( n == 4 || n == 6 || n == 9 || n == 11) {
        cout << n << " là tháng có 30 ngày" << endl;
    } else if ( n == 2) {
        cout << n << " là tháng có 28 ngày" << endl;
    } else {
        cout << "Không tồn tại tháng này";
    }
    return 0;
}