// App 1 - Brute Force O(n)
int searchInsert(vector<int> &arr, int key){
    int n = arr.size();
    int index = -1;
    for (int i = 0; i < n; i++){
       if (arr[i] == key) return i;
       if (arr[i] < key) index = i;
    }

    return index + 1;
   
}


// App 2 - Searching O(logN)
 int findIndex(vector<int> arr, int low, int high, int key, int index){
    if (low <= high){
        int mid = (low + high)/2;

        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) {
            index = mid;
            return findIndex(arr, mid + 1, high, key, index);
        }else return findIndex(arr, low, mid - 1, key, index);

    }
    return index + 1;
}

int searchInsert(vector<int> &arr, int key){
    int n = arr.size();
    int index = -1;
    
    return findIndex(arr, 0, n - 1, key, index);
   
}
