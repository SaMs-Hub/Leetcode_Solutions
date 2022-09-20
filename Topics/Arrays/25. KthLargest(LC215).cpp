// App 1 Using sort O(nlogn)

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        k = nums.size() - k;
        
        sort(nums.begin(), nums.end());
        return nums[k];
        
    }
};

// App 2 Maxheap priorityQue
class Solution {
public:
    int findKthLargest(vector<int>& arr, int k) {
       priority_queue<int> pr(arr.begin(), arr.end());
	for (int i = 1;i < k; i++) pr.pop();
	return pr.top();
        
    }
};
