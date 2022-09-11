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
