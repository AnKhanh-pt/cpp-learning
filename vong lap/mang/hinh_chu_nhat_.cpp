#include <iostream>
using namespace std;

void in_HCN(int CD, int CR);

int main() {
    int d;
    int r;
    cout << "Chiều dài: ";
    cin >> d;
    cout << "Chiều rộng: ";
    cin >> r;

    in_HCN(d, r);

return 0;

}

void in_HCN(int CD, int CR) {
    for(int i = 0; i < CR; i++) {
        for(int j = 0; j < CD; j++) {
            cout << "-";
        }
        cout << endl;
    }
}

