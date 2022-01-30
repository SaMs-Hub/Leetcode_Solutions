#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int x, int n, int si , int ei){
    if (si > ei){
        return -1;
    }
    int mid = (si + ei)/2;
    
    if (arr[mid] == x){
        return mid;
    }
    else if (arr[mid] < x){
        return binarySearch(arr, x, n, mid + 1, ei);
    }else{
        return binarySearch(arr, x, n, si, mid - 1);
    }
}


int main(){
    int n, x;
    cin >> n >> x;

    int arr[] = {1, 2, 3, 4, 8};

    cout << binarySearch(arr, x, n, 0, n);
}
