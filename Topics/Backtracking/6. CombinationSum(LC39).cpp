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
