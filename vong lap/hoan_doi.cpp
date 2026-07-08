#include <iostream>
using namespace std;
void hoan_doi_sai(int a, int b);
void hoan_doi_dung(int &c, int &d);

int main() {
    int x = 4;
    int y = 5;
    hoan_doi_sai(x, y);
    cout << x << ", " << y << endl;
    hoan_doi_dung(x, y);
    cout << x << ", " << y;
    return 0;
}

void hoan_doi_sai(int a, int b) {
    int hd;
    hd = a;
    a = b;
    b = hd;
}

void hoan_doi_dung(int &c, int &d) {
    int td;
    td = c;
    c = d;
    d = td;
}