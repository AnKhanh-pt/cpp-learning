#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhập n: ";
    cin >> n;
    bool la_so_nguyen_to;
    int so_nguyen_to_dau_tien = n + 1;
    
    do {
        la_so_nguyen_to = true;
        for (int i = 2; i < so_nguyen_to_dau_tien; i++) {
            if (so_nguyen_to_dau_tien % i == 0) {
                la_so_nguyen_to = false;
                break;
            }
        }

        if (la_so_nguyen_to) {
            cout << so_nguyen_to_dau_tien << " là số nguyên tố đầu tiên lớn hơn " << n;
        } else {
            so_nguyen_to_dau_tien = so_nguyen_to_dau_tien + 1;
        }
    } while (!la_so_nguyen_to);
   
    return 0;
}