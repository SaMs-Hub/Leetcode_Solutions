#include <bits/stdc++.h>
using namespace std;

int arrSum(int arr[], int n){
    // make a var to store sum
    int sum = 0;

    // traverse through the array and store
    for (int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);

    cout << arrSum(arr, n);
}
