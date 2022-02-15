#include <bits/stdc++.h>
using namespace std;

int isSorted(int *arr, int n){
    // base case
    if (n == 0 or n == 1){
        return true;
    }

    // rec case
    if (arr[0] < arr[1] and isSorted(arr + 1, n - 1)){
        return true;
    }
    return false;


}


int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    

    cout << isSorted(arr, n);
   
}
