#include <iostream>
using namespace std;

double fibo(int n);

int main() {
    int n;
    cout << "Nhập n: ";
    cin >> n;

    for(int i = 0; i < n - 1; i++) {
        cout << fibo(i) << ", ";
    }
    cout << fibo(n-1)<< endl;
}
double fibo(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibo(n - 1) + fibo (n - 2); 
}
