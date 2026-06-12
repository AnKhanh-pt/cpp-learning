#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Hãy nhập số tự nhiên bất kì:";
    cin >> n; 
    if (n%2 == 0){
        cout <<"n là số chẵn";
    } else {
        cout << "n là số lẻ";
    }
    
    return 0;
}