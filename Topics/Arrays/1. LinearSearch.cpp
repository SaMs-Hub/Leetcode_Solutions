#include <bits/stdc++.h>
using namespace std;

int linearSearch(int arr[], int n, int x){
    for (int i = 0; i < n; i++){
        if (arr[i] == x){
            return i;
        }
    }
    return -1;
}


int main(){
    int n, x;
    cin >> n >> x;

    int arr[] = {1, 2, 3, 4, 5};

    cout << linearSearch(arr, n, x);

    return 0;
}
