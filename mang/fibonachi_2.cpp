#include <iostream>
#include<vector>
#include<cmath>


using namespace std;


// O(N)2   = O(1) + O(N) + O(N)2 
int main(){

    int n;
    cout << "nhap vao do dai mang: ";
    cin >> n;

    if(n <= 0) return 0;
    
    vector<int> arr(n);
    int arr2[100];

    // O(N)
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // O(1)
    cout << arr[0];
    // fibonaci la 1 chuoi so : f(1)=0 , f(2)=1, f(3)=f(1)+f(2),   f(n) = f(n-2)+f(n-1) 

    // [1,2,6,33,4] => n=5
    //i[0,1,2,3,4]
    //int fib1=0, fib2=1;
    for (int i = 0; i < n; i++){
        if(arr[i] < 0){
            cout << arr[i] << "khong phai so fibonaci" << endl;
            continue;;
        }
        //O(N)
        // 5n2 + 4 || 5n2 + 4 
        int num1 = 5 * arr[i] * arr[i] + 4;
        int num2 = 5 * arr[i] * arr[i] - 4;

        int sqNum1 = sqrt(num1);
        int sqNum2 = sqrt(num2);

        if (sqNum1 * sqNum1 == num1 || sqNum2 * sqNum2 == num2){
            cout << arr[i] << "la so fibonaci" << endl;
        }
        /*
        while (fib1 <= arr[i]){
            int next = fib1 + fib2;
            if (next == arr[i]){
                cout << arr[i] << "la so fibonaci" << endl;
            } else {
                fib1 = fib2;
                fib2 = next;
            }
        }
        */
    }

    return 0;
}