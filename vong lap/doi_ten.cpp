#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char ten[50];
    cout << "Tên của bạn là: ";
    cin.getline(ten, 50);
    for(int i = 0; i < strlen(ten); i++) {
        ten[i] = toupper(ten[i]);
        cout << ten[i];
    }

    return 0;
}