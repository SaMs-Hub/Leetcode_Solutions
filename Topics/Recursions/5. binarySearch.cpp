#include <bits/stdc++.h>
using namespace std;


// not working
int binarySearch(int arr[], int n, int key, int si, int ei){
    if (si > ei){
        return -1;
    }
    int mid = (si + ei)/2;
    if (arr[mid] == key){
        return mid;
    }else if(arr[mid] < key){
        return binarySearch(arr, n, key, mid + 1, ei);
    }else{
        return binarySearch(arr, n, key, si, mid - 1);
    }
}


int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    int key = 4;

    cout << binarySearch(arr, n, key, 0, n);
   
}
