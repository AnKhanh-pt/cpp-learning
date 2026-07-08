#include <iostream>
using namespace std;


void hoanDoi(int &a, int &b) {
    int temp = a; a = b; b = temp;
}

int partition(int a[], int trai, int phai) {
    int pivot = a[phai];  // Chọn phần tử cuối làm pivot
    int i = trai - 1;    // Ranh giới vùng "nhỏ hơn pivot"

    for (int j = trai; j < phai; j++) {
        if (a[j] <= pivot) {
            i++;
            hoanDoi(a[i], a[j]);  // Đưa vào vùng nhỏ hơn
        }
    }
    
    hoanDoi(a[i + 1], a[phai]);  // Đặt pivot vào vị trí đúng
    
    return i + 1;
}

int main() {
    int n=10; 
    int so[n] = {5, 9, 1, 4, 17, 3, 77 , 10, 6, 74};
    int vitriPivot;
    
    vitriPivot = partition(so,0,9);
    
    for(int k = 0; k < n; k++) {
        cout << so[k] << ", ";
    }
    
    return 0;
}