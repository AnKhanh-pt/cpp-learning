#include <iostream>
using namespace std;

int main() {
    double so[10] = {5, 9, 1, 4, 17, 3, 77 , 10, 6, 74};
    int so_vong = 9;
    double tg;

    for(int i = 0; i < 10; i++) {
        cout << so[i] << ", ";
    }
    cout << endl; 
    bool co_hoan_doi;

    while (so_vong > 0) {
        co_hoan_doi = false;
        for(int i = 0; i < so_vong; i++) {
            if(so[i] > so[i + 1]) {
                tg = so[i];
                so[i] = so[i + 1];
                so[i + 1] = tg;
                co_hoan_doi = true;
            }
        }
        so_vong -= 1;
        for(int i = 0; i < 10; i++) {
            cout << so[i] << ", ";
        }
        cout << endl;
        if (!co_hoan_doi){
            break;
        }
    }
    return 0;
}