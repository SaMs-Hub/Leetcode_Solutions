#include <bits/stdc++.h>
using namespace std;

int arrSum(int arr[], int n, int si){
    // base case to return 0 if array has no elements
    if (n == si){
        return 0;
    }

    // recCase splitting into smaller, and returning the answer with sum
    return arr[si] + arrSum(arr, n, si + 1);
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);

    cout << arrSum(arr, n, 0);
}
