#include <iostream>
using namespace std;

int main() {
    int n=10; 
    double so[n] = {5, 9, 1, 4, 17, 3, 77 , 10, 6, 74};
    int min;
    int vi_tri;

    for(int k = 0; k < n; k++) {
        cout << so[k] << ", ";
    }
    cout << endl;
    
    for(int i = 0; i < n - 1; i++) {
        min = so[i];
        vi_tri = i;
        for(int j = i + 1; j < n - 1; j++){
            if(min > so[j]) {
                min = so[j];
                vi_tri = j;
            }
        }
        so[vi_tri] = so[i];
        so[i] = min;

        cout << "Vòng " << i+1 << ": ";
        for(int k = 0; k < n; k++) {
            cout << so[k] << ", ";
        }
        cout << endl;
    }
    return 0;
}