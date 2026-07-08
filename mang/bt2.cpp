#include <iostream>
#include <string>

using namespace std;

int main(){
    // 000001
    // 001001000001
    string s = "10001";
    int count = 0, max = 0;
    bool so1 = false;
    bool isCount = false;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == '1'){
            if(isCount){
                max = count > max ? count : max;
                count = 0;
            }
            isCount = true;
            so1 = true;
        }else if (s[i]=='0'){
            if(isCount){
                count++;
            }
        }
    }

    return 0;
}