#include <bits/stdc++.h>
using namespace std;

int LargestSmallest(int arr[], int n){
    int largest = INT_MIN;
    int smallest = INT_MAX;

    for (int i = 0; i < n; i++){
        largest = max(largest, arr[i]);
        smallest = min(smallest, arr[i]);
    }

    cout << largest << "," << smallest; 
}




int main(){
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};

    LargestSmallest(arr, n);


    return 0;
}
