#include <iostream>
using namespace std;

bool la_so_nguyen_to(int n){
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Nhập số: ";
    cin >> n;

    for (int i = 2; i <= n; i++ ) {       
        if (la_so_nguyen_to(i)) {
            cout << i << " là số nguyên tố" << endl;
        }

    }
    
    return 0;
}