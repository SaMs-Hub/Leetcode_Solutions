// Approach 1 - TopDown

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


// App2 - BottomUp

int fib(int n){
    int arr[100]= {0};

    arr[1] = 1;
    for (int i = 2; i <= n; i++){
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    return arr[n];
}


// App 3 - BottomUp Better Space
int fib(int n){
    if ((n == 0) or (n == 1)){
        return n;
    }

    int a = 0;
    int b = 1;
    int c;
    for (int i = 2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }

    return c;
}
