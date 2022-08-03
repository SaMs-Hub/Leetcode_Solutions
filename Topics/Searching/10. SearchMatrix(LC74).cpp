// App 1 - Naive O(m * n)
bool searchMatrix(vector<vector<int>> arr, int target){
    int n = arr.size();
    int m = arr[0].size();

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j] == target) return true;
        }
    }
    return false;
}



// App 2 - Searching

bool findKey(vector<int> arr, int low, int high, int key){
    if (high >= low){
        int mid = (low + high)/2;

        if (arr[mid] == key) return true;
        else if(arr[mid] < key) return findKey(arr, mid + 1, high, key);
        else return findKey(arr, low, mid - 1, high);
    }
    return false;
}

bool searchMatrix(vector<vector<int>> arr, int key){
    int n = arr.size();
    int m = arr[0].size();

    int low = 0, high = n - 1;

    while (high >= low){
        int mid = (low + high)/2;

        if (arr[mid][0] <= key and arr[mid][m - 1] >= key) return findKey(arr[mid], 0, m - 1, key);
        else if (arr[mid][0] > key) high = mid - 1;
        else low = mid + 1;
    }

    return false;
}
