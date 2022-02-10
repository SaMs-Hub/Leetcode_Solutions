#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int n, int key){
    int s = 0;
    int e = n - 1;
    while (s <= e){
        int mid = (s + e)/2;
        if (arr[mid] == key){
            return mid;
        }else if( arr[s] <= arr[mid]){
            if (key >= arr[s] and key <= arr[mid]){
                e = mid - 1;
            }else{
                s = mid + 1;
            }
        }else{
            if (key >= arr[mid] and key <= arr[e]){
                s = mid + 1;
            }else{
                e = mid - 1;
            }
        }
    }
}

int main(){
    int arr[] = {4, 5, 1, 2, 3};
    int n = sizeof(arr)/sizeof(int);
    int key = 3;

    cout << search(arr, n, key) << endl;
}
