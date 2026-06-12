#include <iostream>
using namespace std;

int main() {
    int m;
    int w;

     cout << "Nhập chiều cao của bạn: ";
     cin >> m;
     cout << "Nhập cân nặng của bạn: " << endl;
     cin >> w;

     double BMI = w / (m * m);
     cout << "BMI của bạn là: " << BMI << endl;
    
     if ( BMI < 18.5) {
        cout << " Bạn thiếu cân" << endl;
     } else if ( BMI >= 30.0) {
        cout << " Bạn thừa cân" << endl;
     } else {
        cout << " Bạn bình thường" << endl;
     }
     
    return 0;
}