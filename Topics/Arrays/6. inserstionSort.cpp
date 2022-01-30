#include <bits/stdc++.h>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i = 1; i <= n - 1; i++){
        int e = arr[i];
        int j = i - 1;
        while (j >= 0 and arr[j] > e){
            arr[j + 1] = arr[j];
            j -= 1;
        }
        arr[j + 1] = e;
    }
}


int main(){
    int n = 4;

    int arr[] = { -2, 3, -4, 8};

    insertionSort(arr, n);

    //displaying array;
    for (int i = 0; i < n; i++){
        cout << arr[i] << ",";
    }
}
