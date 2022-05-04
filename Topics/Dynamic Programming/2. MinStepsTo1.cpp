// Top Down
#include <bits/stdc++.h>
using namespace std;

int minSteps(int n, int arr[]){
    // base case
    if (n == 1){
        return 0;
    }

    // rec case
    // look up for ans in arr
    if (arr[n]  != 0){
        return arr[n];
    }
    int opt1, opt2, opt3;
    opt1 = opt2 = opt3 = INT_MAX;

    if (n % 3 == 0){
        opt1 = minSteps(n/3, arr) + 1;
    }

    if (n%2 == 0){
        opt2 = minSteps(n/2, arr) + 1;
    }

    opt3 = minSteps(n - 1, arr) + 1;

    int minStep = min(opt1, min(opt2, opt3));

    // rturn 
    return arr[n] = minStep;
}

int main()
{
    int dp[100] = {0};
   cout << minSteps(10, dp);
}


// App2 - BottomUp
int minSteps(int n){
      int dp[100] = {0};
      for (int i = 2; i <= n; i++){
          int op1, op2, op3;
          op1 = op2 = op3 = INT_MAX;

          if (n % 3 == 0){
              op3 = dp[i/3];
          }

          if (n % 2 == 0){
              op2 = dp[i/2];
          }
          op1 = dp[i - 1];

          dp[i] = min(op1,min(op2, op3)) + 1;
      }

      return dp[n];
}
