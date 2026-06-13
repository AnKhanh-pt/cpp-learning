#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 100; i++) {
        if ( i % 2 == 0) {
            cout << "Số chẵn thứ " << i / 2 << " là: " << i << endl;
        }
    } 

    return 0;
}