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



// Approach 2 - Using same vector
vector<int> runningSum(vector<int> &nums){
    
    
   int i = 1;
    while (i < nums.size()){
        nums[i] += nums[i - 1];
        i+=1;
    }

    return nums;
}


// Approach 3 - Using STL
vector<int> runningSum(vector<int> arr){
    partial_sum(begin(arr), end(arr), begin(arr));
    return arr;
}


// Approach 4 - O(n)
vector<int> getCumulativeSum(vector<int> &arr){
    vector<int> res(arr.size());
    int n = arr.size();
    res[0] = arr[0];
    for (int i = 1; i < n; i++){
        res[i] = res[i - 1] + arr[i];
    }
    return res;
}
