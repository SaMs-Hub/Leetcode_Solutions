#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n){
    for (int i = 0; i < n - 1; i++){
        int minIndex = i;
        for (int j = i; j <= n - 1; j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}



int main(){
    int n;
    cin >> n;

    int arr[] = { -2, 3, -4, 8};

    selectionSort(arr, n);

    //displaying array;
    for (int i = 0; i < n; i++){
        cout << arr[i] << ",";
    }
}
