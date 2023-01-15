// App 1 - Brute Force
int maxSize(vector<int> arr, int k){
    int n = arr.size();
    int maxSum = 0;
    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            if (j - i + 1 == k){
                int sum = 0;
                for (int l = i; l <= j; l++){
                    
                    sum += arr[l];
                }
                
maxSum = max(sum, maxSum);

            }
            
        }
    }
    return maxSum;
}


// App 2 - Sliding Window O(n)
int maxKSubarraySum(vector<int> &arr, int k) {
	int n = arr.size();
    int maxSum = 0;
    int sum = 0;
    for (int i = 0; i < k; i++){
        sum += arr[i]; 
    }

    maxSum = max(sum, maxSum);
    for (int i = k; i < n; i++){
        sum -= arr[i - k];
        sum += arr[i];
        maxSum = max(sum, maxSum);
    }
    return maxSum;
}

Ex: max age of n monkeys
