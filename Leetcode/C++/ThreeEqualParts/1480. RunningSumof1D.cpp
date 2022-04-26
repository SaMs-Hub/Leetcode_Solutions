class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> cumSum;
    int sum = 0;
    for (int i = 0; i < nums.size(); i++){
        sum += nums[i];
        cumSum.push_back(sum);
    }

    return cumSum;
    }
};
