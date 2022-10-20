// App 1 - Recursive
class Solution {
public:
void getSubsets(vector<int> &A, int start, vector<int> currSubset, vector<vector<int>> &allSubsets) {
	if (start == A.size()) {
		allSubsets.push_back(currSubset);
		return;
	}
	int indx = 1;
	while (start + indx < A.size() && A[start] == A[start + indx]) {
		indx++;
	}
	getSubsets(A, start + indx, currSubset, allSubsets);
	currSubset.push_back(A[start]);
	getSubsets(A, start + 1, currSubset, allSubsets);
}


vector<vector<int>> subsetsWithDup(vector<int> &arr){
    sort(arr.begin(), arr.end());
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
        int n = nums.size();

        result.push_back(curr);
        for (int i = start; i < n; i++){
            if (i > start && nums[i] == nums[i - 1]) continue;
            curr.push_back(nums[i]);
            dfs(nums, i + 1, curr, result);
            curr.pop_back();

        }
        
    }

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        vector<vector<int>> result;
        vector<int> curr;
        dfs(nums, 0, curr, result);
        return result;
    }

   

};
