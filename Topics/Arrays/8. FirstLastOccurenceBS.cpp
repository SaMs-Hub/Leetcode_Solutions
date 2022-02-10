#include <bits/stdc++.h>
using namespace std;

int firstOccurence(int arr[], int n, int key){
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e){
        int mid = (s + e)/2;
        if (arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }else if (arr[mid] < key){
            s = mid  + 1;
        }else{
            e = mid - 1;
        }
    }
    return ans;
}

int lastOccurence(int arr[], int n, int key){
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e){
        int mid = (s + e)/2;
        if (arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }else if (arr[mid] < key){
            s = mid  + 1;
        }else{
            e = mid - 1;
        }
    }
    return ans;
}

int main(){
    int arr[] = {1, 2, 3, 3, 3, 3, 5};
    int n = sizeof(arr)/sizeof(int);

    int key = 3;

    cout << "First occurence is " << firstOccurence(arr, n, key) << endl;
    cout << "Second occurence is " << lastOccurence(arr, n, key) << endl;
}
