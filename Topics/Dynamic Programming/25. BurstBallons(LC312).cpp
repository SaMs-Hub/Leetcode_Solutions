// App 1 O(n^2)
    
int maxCoins(vector<int>& nums) {
    nums.insert(nums.begin(), 1);
    nums.insert(nums.end(), 1);

    int n = nums.size();

    vector<vector<int>> stored(n, vector<int>(n, 0));

    return dp(nums, stored, 1, n - 2);
        
    }


int dp(vector<int> &nums, vector<vector<int>> &stored, int left, int right){
    if (right - left < 0) return 0;

    if (stored[left][right] > 0) return stored[left][right];

    int result = 0;
    for (int i = left; i <= right; i++){
        int curr = nums[left - 1] * nums[i] * nums[right + 1];
        int remaining = dp(nums, stored, left, i - 1) + dp(nums, stored, i + 1, right);
        result = max(result, curr  +remaining);
    }

    stored[left][right] = result;
    return result;
}
