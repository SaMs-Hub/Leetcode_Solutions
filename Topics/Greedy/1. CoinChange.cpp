#include <bits/stdc++.h>
using namespace std;

int coinChange(int *arr, int n, int money){
    // make var to store no of coins
    int coins = 0;

    // while money > 0, get upperbound index and keep takiing it out of money
    while (money > 0){
        int i = upper_bound(arr, arr + n, money) - 1 - arr;
        cout << arr[i] << ',';
        money -= arr[i];
        coins += 1;
    }

    return coins;
}

int main(){
    int arr[] = {1, 2, 5, 10, 20, 50, 100};
    int n = sizeof(arr)/sizeof(int);

    cout << coinChange(arr, n, 39);
}
