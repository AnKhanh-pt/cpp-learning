#include <iostream>
using namespace std;

int main() {
    int luaChon;
    do { 
        cout << "\n=== MENU ===\n"; 
        cout << "1. Choi game\n"; 
        cout << "2. Xem diem cao\n"; 
        cout << "0. Thoat\n"; 
        cout << "Chon: "; 
        cin >> luaChon; 
        if (luaChon == 1) {
            cout << "Dang choi game...\n";
        } else if (luaChon == 2){
            cout << "Diem cao nhat: 9999\n";
        }
          
    } while (luaChon != 0); 
    
    cout << "Da thoat. Tam biet!\n";

    return 0;
}