class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        k = nums.size() - k;
        
        sort(nums.begin(), nums.end());
        return nums[k];
        
    }
};
