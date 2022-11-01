// App 1 O(n)
class Solution {
public:
 int rob(vector<int>& nums) {
    int prev, current, next;
    prev = current = next = 0;

    for (int i = 0; i < nums.size(); i++){
        next = max(current, prev + nums[i]);
        prev = current;
        current = next;
    }
    return current;
    }
};
