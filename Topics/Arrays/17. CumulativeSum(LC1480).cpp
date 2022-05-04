// Approach 1 - Using another vector

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


// Approach 2 - Using same vetor
vector<int> runningSum(vector<int> &nums){
    
    
   int i = 1;
    while (i < nums.size()){
        nums[i] += nums[i - 1];
        i+=1;
    }

    return nums;
}