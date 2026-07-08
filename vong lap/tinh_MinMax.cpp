#include <iostream>
using namespace std;

void MinMax(int arr[], int n, int &min, int &max);

int main() {
    int arr[] = {1, 3, 7, 5, 10, 9};
    int min, max;
    MinMax(arr, 6, min, max);
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl;

    return 0;
}

void MinMax(int arr[], int n, int &min, int &max) {
    min = max = arr[0];
    for(int i = 1; i < n; i++) {
        if(min > arr[i]) min = arr[i];
        if(max < arr[i]) max = arr[i];

    }
}
