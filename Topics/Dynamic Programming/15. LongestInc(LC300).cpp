// App 1 O(n)

int lengthOfLIS(vector<int>& nums) {
    int n = nums.size();

    vector<int> dp(n, 1);
    int result = 1;

    for (int i = 1; i < n; i++){
        for (int j = 0; j < i;j++){
            if (nums[j] < nums[i]) dp[i] = max(dp[i], 1 + dp[j]);

            result = max(result, dp[i]);
        }
    }

    return result;
        
    }
