#include <iostream>
using namespace std;

int main() {
    int bi_mat = 7, n;
    int max_guess = 3;
    int guess_count = 1;
    
    // Doan lan 1
    cout << "Nhập số dự đoán. Bạn có " << max_guess << " lần đoán: ";
    cin >> n;
    
    while (n != bi_mat) {
        if (guess_count > max_guess) {
            cout << "Game over";
            break;
        }
        cout << "Bạn đoán sai, hãy đoán lại, bạn còn " << max_guess - guess_count << " lần đoán: ";
        cin >> n;
        guess_count += 1;
    }
    if (n == bi_mat) {
        cout << "Bạn đoán trúng";
    }
    return 0;
}