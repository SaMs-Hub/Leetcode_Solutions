#include <bits/stdc++.h>
using namespace std;

int LargestSmallest(int arr[], int n){
  
    // using builtin sort function
    sort(arr, arr + n);

    int largest = arr[n - 1];
    int smallest = arr[0];

    cout << largest << "," << smallest; 
}




int main(){
    int n = 5;
    int arr[] = {1, 2, 3, 4, 5};

    LargestSmallest(arr, n);


    return 0;
}
