#include <iostream>
using namespace std;

int main() {

    int n;
    int sum = 0;

    cout << "Hãy nhập n: ";
    cin >> n;
    for (int i = 1; i<= n; i++) {
        if (i % 2 == 0){
             sum = sum + i;
        }
    }

    cout << "Tổng các số chẵn từ 1 đến n là: " << sum << endl;
    
    return 0;
}