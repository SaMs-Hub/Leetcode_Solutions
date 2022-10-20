// App 1 - Backtracking
class Solution {
public:
   void findAll(vector<int> &arr, int target, int index, vector<vector<int>> &total, vector<int> &current){
    if (target == 0){
        total.push_back(current);
        return;
    }

    if (index == arr.size() or target < 0) return;

    current.push_back(arr[index]);
    findAll(arr, target - arr[index], index, total, current);
    current.pop_back();
    findAll(arr, target, index + 1, total, current);

}

vector<vector<int> > combinationSum(vector<int> &arr, int val) {
    vector<vector<int>> total;
    vector<int> current;
    findAll(arr, val, 0, total, current);
    return total;
}
};


// App 2 DFS O(n**target)
class Solution {
public:
   
void dfs(vector<int>& nums, int target, int sum,  int start, vector<int>& curr, vector<vector<int>>& result) {
    if (sum > target) return;

    if (sum == target){
        result.push_back(curr);
        return;
    }

    for (int i = start; i < nums.size(); i++){
        curr.push_back(nums[i]);
        dfs(nums, target, sum + nums[i], i, curr, result);
        curr.pop_back();
    }
   

}

vector<vector<int>> combinationSum(vector<int> & arr, int target){
     sort(arr.begin(), arr.end());
    vector<vector<int>> result;
    vector<int> nums;
    dfs(arr, target,  0, 0, nums, result);
    return result;

}
};
