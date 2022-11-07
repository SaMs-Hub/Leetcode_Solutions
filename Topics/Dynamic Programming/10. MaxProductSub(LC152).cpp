// App 1 O(n)
    
 int maxProduct(vector<int>& nums) {
    int currMax = nums[0];
    int currMin = nums[0];
    int result = nums[0];

    for (int i = 1; i < nums.size(); i++){
        int temp = currMax;
        currMax = max(max(currMax * nums[i], currMin * nums[i]), nums[i]);
        currMin = min(min(currMin * nums[i], temp * nums[i]), nums[i]);

        result = max(result, currMax);
    }

    return result;
 }
