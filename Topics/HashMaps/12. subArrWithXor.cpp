// App 1 - Naive O(n2)
int numSubarrayWithXOR(vector<int> &arr, int target){
    int n = arr.size();
    int ans = 0;

    for (int i = 0; i < n; i++){
        int subArrXor = 0;
        for (int j = i; j < n; j++){
            subArrXor ^= arr[j];
            if (subArrXor == target){
                ans += 1;
            }
        }
    }
    return ans;
}


// App 2 - Hashing O(n)
int numSubarrayWithXOR(vector<int> &arr, int target){
    int n = arr.size();
    int ans = 0;
    int prefixXor = 0;
    unordered_map<int, int> count;

    for (int i = 0; i < n; i++){
        prefixXor ^= arr[i];
        if (prefixXor == target) ans += 1;
        if (count[prefixXor ^ target] != 0) ans += count[prefixXor ^ target];
        count[prefixXor] += 1;

    }

    return ans;
}
