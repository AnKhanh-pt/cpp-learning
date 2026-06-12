#include <iostream>
using namespace std;

int main() {
    double income, tax;
    cout << "Nhập thuế thu nhập cá nhân" << endl;
    cin >> income;

    if ( income == 30000000) {
        tax = income * 0.05;
    } else if ( (income > 30000000 ) && ( income <= 60000000) ) {
        tax = income *  0.2;
    }
    cout << "Thue bi tru la" << income;
    
    return 0;
}