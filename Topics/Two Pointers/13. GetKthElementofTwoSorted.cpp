// App 1 - Naive
int getKthElement(vector<int> &arr1, vector<int> &arr2, int k) {
    vector<int> res;
    for (auto x: arr1) res.push_back(x);
    for (auto x: arr2) res.push_back(x);

    sort(res.begin(), res.end());
    return res[k - 1];
}


// App 2- 
