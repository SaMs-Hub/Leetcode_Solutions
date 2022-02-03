#include <bits/stdc++.h>
using namespace std;

# non recursive
int binarySearch(int arr[], int x, int n){
    int s = 0;
    int e = n - 1;

    while (s <= e){
        int mid = (s + e)/2;

        if (arr[mid] == x){
            return mid;
        }else if (arr[mid] < x){
            s = mid + 1;
        }else{
            e =  mid - 1;
        }
    }
    return -1;
}


int main(){
    int n, x;
    cin >> n >> x;

    int arr[] = {1, 2, 3, 4, 8};

    cout << binarySearch(arr, x, n);
}
