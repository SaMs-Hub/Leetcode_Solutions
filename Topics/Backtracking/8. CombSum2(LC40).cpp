// App 1 DFS O(2**n)
class Solution { 
public:
 void dfs(vector<int>& candidates, int target, int sum, int start, vector<int> &current, vector<vector<int>> &result){
    if (sum > target) return;
    if (sum == target){
        result.push_back(current);
        return;
    }


    for (int i = start; i < candidates.size(); i++){
        // handling duplicates
        if (i > start && candidates[i] == candidates[i - 1]) continue;
        current.push_back(candidates[i]);
        dfs(candidates, target, sum + candidates[i], i + 1, current, result);
        current.pop_back();
    }

  
}

 vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());

    vector<vector<int>> result;
    vector<int> current;

    dfs(candidates, target, 0, 0, current, result);
    return result;
        
    }
};
