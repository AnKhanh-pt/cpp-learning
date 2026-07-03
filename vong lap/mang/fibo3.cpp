#include <iostream>

using namespace std;


//Ham de quy: ham ma ben trong logic goi lai chinh ham do
int fibinacci(int n);
int tinhTong(int arr[], int n);

int main(){

    int n;
    cout << "nhap do dai mang: ";

    cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int  tong = 0;
    // nap chong toan tu trong lap trinh
    tong = tinhTong (arr, n);
    cout << "tong cac phan tu trong mang = " << tong;

    cin >> n;

    return 0;
}
int fibinacci(int n) {
    // suy bien: f(n-2) + f(n-1)
    if (n <= 1) return 0;
    if (n == 2) return 1;
    return fibinacci(n-2) + fibinacci(n-1);
}

// nhap vao 1 mang n phan tu sau do tinh tong tat ca cac phan tu trong mang bang ham
// int tong = 0;
// ham tong = sum(arr[])
int tinhTong(int arr[], int n) {
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}