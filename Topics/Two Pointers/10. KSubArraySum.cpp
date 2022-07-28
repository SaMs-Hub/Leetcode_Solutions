// App 1- BF O(n3)
vector<int> kSubarraySum(vector<int> arr, int k){
    int n = arr.size();
    vector<int> res;

    for (int i= 0;i < n; i++){
        for (int j = i; j < n; j++){
            if (j - i + 1 == k){
                int sum = 0;
                for (int l = i; l <= j; l++){
                    sum += arr[l];
                }
                res.push_back(sum);
            }
        }
    }
    return res;

}


// App 2 - Sliding Window O(n)
vector<int> kSubarraySum(vector<int> arr, int k){
    int n = arr.size();
    vector<int> res;
    int sum = 0;

    for (int i= 0;i < k; i++){
        sum += arr[i];
        
    }
    res.push_back(sum);

    for (int i = k; i < n; i++){
        sum -= arr[i - k];
        sum += arr[i];
        res.push_back(sum);
    }
    return res;
}
