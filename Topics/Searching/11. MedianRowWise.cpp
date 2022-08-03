// App 1 - Naive 
int calculateMedianOfMatrix(vector<vector<int>> &arr){
    int n = arr.size(), m = arr[0].size();
    vector<int> res;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            res.push_back(arr[i][j]);
        }
    }

    sort(res.begin(), res.end());
    int medianIndex = (res.size()/2);
    return res[medianIndex];
}



// App 2 - Searching
