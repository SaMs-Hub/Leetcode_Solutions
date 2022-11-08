// App 1 Cache + Memoization

map<pair<int,int>, int> dp;

int backtrack(vector<int> &nums, int target, int index, int total){
    if (index == nums.size()) return total == target ? 1 : 0;
    if (dp.find({index, total}) != dp.end()) return dp[{index, total}];
    dp[{index, total}] = backtrack(nums, target, index + 1, total + nums[index]) + backtrack(nums, target, index + 1,  total - nums[index]);
    return dp[{index, total}];
}

 int findTargetSumWays(vector<int>& nums, int target) {
     return backtrack(nums, target, 0, 0);
        
    }
