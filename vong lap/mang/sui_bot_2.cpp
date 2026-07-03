#include <iostream>
using namespace std;

int main() {
    int so_phan_tu = 10;
    double so[so_phan_tu] = {5, 9, 1, 4, 17, 3, 77 , 10, 6, 74};
    double tg;
    bool hoan_doi = false;

    for(int i = 0; i < so_phan_tu - 1; i++) {
        hoan_doi = false;
        for(int j = 0; j < so_phan_tu - 1 - i; j++){
            if(so[j] < so[j + 1]) {
                tg = so[j];
                so[j] = so[j + 1];
                so[j + 1] = tg;
                hoan_doi = true;
            }
        }
        for(int j = 0; j < so_phan_tu; j++) {
            cout << so[j] << ", ";
        }
        cout << endl;
        if(!hoan_doi) {
            break;
        }
    }

    
    return 0;
}