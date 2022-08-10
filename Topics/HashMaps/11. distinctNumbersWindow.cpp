// App 1 - Naive O(n * k2)
vector<int> distintNumbersInWindow(vector<int> &arr, int k){
    int n = arr.size();
    vector<int> res;

    for (int i = 0; i <= n - k; i++){
        int distinctElements = 0;
        for (int j = i; j < i + k; j++){
            int flag = 1;
            for (int index = i; index < j; index++){
                if(arr[index] == arr[j]){
                    flag = 0;
                    break;
                }


            }
            if (flag == 1) distinctElements += 1;
        }
        res.push_back(distinctElements);
    }
    return res;
    
}

// App 2 - Hashing
vector<int> distintNumbersInWindow(vector<int> &arr, int k){
    int n = arr.size();
    vector<int> res;

    unordered_map<int, int> count;
    int distinctElements = 0;

    for (int i = 0; i < n; i++){
        if (i < k){
            if (count[arr[i]] == 0) distinctElements += 1;
            count[arr[i]] += 1;
            if (i == k - 1) res.push_back(distinctElements);

        }else{
            if (count[arr[i - k]] == 1) distinctElements -= 1;
            count[arr[i - k]] -= 1;

            if(count[arr[i]] == 0) distinctElements += 1;
            count[arr[i]] += 1;
            res.push_back(distinctElements);
        }
    }
    return res;
    
}

