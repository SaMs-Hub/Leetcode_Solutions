// App 1 DFS O(n * n!)
class Solution {
public:
    void dfs(vector<int>& nums, int start, vector<vector<int>>& result) {

    if (start == nums.size()){
        result.push_back(nums);
        return;
    }

    for (int i = start; i < nums.size(); i++){
        swap(nums[i], nums[start]);
        dfs(nums, start + 1, result);
        swap(nums[i], nums[start]);
    }
    

}


vector<vector<int>> permute(vector<int> & arr){
    
    vector<vector<int>> result;
    dfs(arr,   0, result);
    return result;

}
};
