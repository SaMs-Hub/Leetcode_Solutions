// App1 Greedy O(n)
 int maxSubArray(vector<int>& nums) {
    int currentSum = nums[0];
    int maxSum = nums[0];

    for (int i = 1; i < nums.size(); i++){
        currentSum = max(nums[i], nums[i] + currentSum);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
        
    }





/// Other approaches
https://github.com/SaMs-Hub/Problem_Solving/blob/main/Topics/Arrays/23.%20MaxSubarray(LC53).cpp
