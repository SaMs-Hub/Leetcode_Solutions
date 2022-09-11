// App 1 - Recursive
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


