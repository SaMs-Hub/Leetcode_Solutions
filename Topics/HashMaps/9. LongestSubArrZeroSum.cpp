// App 1 - Naive
int longestSubarrayWithZeroSum(vector<int> &arr){
    int n = arr.size();
    int maxSub = 0;

    for (int i = 0; i < n; i++){
        int sum = 0;
        for (int j = i; j < n; j++){
            sum += arr[j];
            if (sum == 0) {
                maxSub = max(maxSub, j - i + 1);
            }
            
        }
    }

    
    return maxSub;
}

// App 2 - Hashing O(n)
int longestSubarrayWithZeroSum(vector<int> &arr){
    int n = arr.size();
    int maxSub = 0;
    int sum = 0;
    unordered_map<int, int> res;
    res[0] = -1;
    for (int i = 0; i < n; i++){
        sum += arr[i];
        if (res[sum] == 0 && sum == arr[0]) maxSub = max(maxSub, i);
        else if(res[sum] != 0) maxSub = max(maxSub, i - res[sum]);
        else res[sum] = i;
    }

    
    return maxSub;

}

