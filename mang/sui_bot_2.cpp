#include <iostream>
using namespace std;

void sui_bot_giam_dan(int so[], int so_phan_tu);
void print(int so[], int so_phan_tu);
int    tong(int a, int b)                { return a + b; }
double tong(double a, double b)          { return a + b; }
int    tong(int a, int b, int c)          { return a + b + c; }
double tong(double a, double b, double c) { return a + b + c; }

int main() {
    int so_phan_tu = 10;
    int so[so_phan_tu] = {5, 9, 1, 4, 17, 3, 77 , 10, 6, 74};

    cout << "Mảng ban đầu: ";
    print(so, so_phan_tu);
    
    sui_bot_giam_dan(so, so_phan_tu);
    cout << "Mảng được sắp xếp: ";
    print(so, so_phan_tu);

    cout << tong(3, 5);

    return 0;
}

void sui_bot_giam_dan(int so[], int so_phan_tu) {
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
        if(!hoan_doi) {
            break;
        }
    }
}

void print(int so[], int so_phan_tu) {
    for(int j = 0; j < so_phan_tu; j++) {
        cout << so[j] << ", ";
    }
    cout << endl;
}