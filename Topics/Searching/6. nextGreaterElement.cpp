// App 1 - BF O(n)
int getNextGreaterElement(vector<int> arr, int key){
    int n = arr.size();
    if (arr[n - 1] <= key) return key;

    for (int i = 0; i < n; i++){
        if (arr[i] > key) return arr[i];
    }
}

// App 2 - BinarySearch O(logN)
int getBig(vector<int> arr, int low, int high, int key){
    if (high > low){
        int mid = (low + mid)/2;

        if (arr[mid] == key) return arr[mid + 1];
        else if(arr[mid] <=  key) return getBig(arr, mid + 1, high, key);
        else return getBig(arr, low, mid - 1, key);
    }
    return key;
}

int getNextGreaterElement(vector<int> arr, int key){
    int n = arr.size();
    if (arr[n - 1] <= key) return key;
    return getBig(arr, 0, n - 1, key);
}
