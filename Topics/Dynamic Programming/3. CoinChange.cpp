#include <bits/stdc++.h>
using namespace std;

int minCoins(int n, int coins[], int t, int dp[]){
    // base case if n is 0, return 0
    // rec case if (dp[n] is not zeor, return it)
    // make var ans which stores infinity
    // traverse over coins arr, break it into smaller prob by
    // taking out coinst[i] from n
    // restore min of coins[i], ans
    // return dp[n] as ans

    if (n == 0){
        return 0;
    }

    if (dp[n] != 0){
        return dp[n];
    }

    int ans = INT_MAX;
    for (int i = 0; i < t; i++){
        if (n - coins[i] >= 0){
            int subProb = minCoins(n - coins[i], coins, t, dp);
            ans = min(ans, subProb + 1);
        }
    }

    dp[n] = ans;
    return dp[n];
}


int main()
{
    int n = 20;
    int coins[] = {1, 10, 5};
    int size = sizeof(coins)/sizeof(int);

    int dp[100] = {0};

    cout << minCoins(n, coins, size, dp);
    return 0;
}
