// App 1 - Recursive approach 
class Solution {
public:
   void getSubsets(vector<int> &arr, int start, vector<int> &currSubsets, vector<vector<int>> &allSubsets){
    if (start == arr.size()){
        allSubsets.push_back(currSubsets);
        return;
    }

    getSubsets(arr, start + 1, currSubsets, allSubsets);
    currSubsets.push_back(arr[start]);
    getSubsets(arr, start + 1, currSubsets, allSubsets);
    currSubsets.pop_back();
}

vector<vector<int>> subsets(vector<int> &arr){
    vector<vector<int>> allSubsets;
    vector<int> currSubsets;
    getSubsets(arr, 0, currSubsets, allSubsets);
    return allSubsets;
}
};



// App 2 DFS O(n * 2**n)
class Solution {
public:
 void dfs(vector<int>& nums, int start, vector<int>& curr, vector<vector<int>>& result) {
    result.push_back(curr);

    for (int i = start; i < nums.size(); i++){
        curr.push_back(nums[i]);
        dfs(nums, i + 1, curr, result);
        curr.pop_back();
    }

}



vector<vector<int>> subsets(vector<int> & arr){
    vector<vector<int>> result;
    vector<int> nums;
    dfs(arr, 0, nums, result);
    return result;

}
};


