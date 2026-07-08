#include <iostream>
using namespace std;

int main() {
    int n1 = 10;
    int n2 = 5;
    double mang_1[n1] = {1, 3, 4, 5, 6, 9, 10, 17, 74, 77};
    double mang_2[n2] = {2, 3, 7, 9, 12};
    double mang_kq[n1+n2];

    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n1 && j < n2) {
        if(mang_1[i] < mang_2[j]) {
            mang_kq[k++] = mang_1[i++];
        }else {
            mang_kq[k++] = mang_2[j++];
        }
    }

    while(i < n1) {
        mang_kq[k++] = mang_1[i++];
        }
    
    while(j < n2) {
        mang_kq[k++] = mang_2[j++];
    }
    
    for(int m = 0; m < n1 + n2; m ++) {
        cout << mang_kq[m] << ", ";
    }
    

    return 0;
}