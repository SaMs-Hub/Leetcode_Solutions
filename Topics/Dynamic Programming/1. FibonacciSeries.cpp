#include <bits/stdc++.h>
using namespace std;

int fib(int n, int arr[]){
    // base case 
    if (n == 0 or n == 1){
        return n;
    }

    // rec case - check if value present in arr
    if (arr[n] != 0){
        return arr[n];
    }

    int ans = fib(n - 1, arr) + fib(n - 2, arr);

    return arr[n] = ans;
}


int main()
{
    int dp[100] ={0};
    cout << fib(6, dp);
    return 0;
}
