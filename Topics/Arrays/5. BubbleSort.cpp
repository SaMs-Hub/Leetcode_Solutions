#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n){
    for (int i = 1; i <= n - 1; i++){
        for (int j = 0; j <= (n - i - 1); j++){
            if (arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}



int main(){
    int n = 4;

    int arr[] = { -2, 3, -4, 8};

    bubbleSort(arr, n);

    //displaying array;
    for (int i = 0; i < n; i++){
        cout << arr[i] << ",";
    }
}
