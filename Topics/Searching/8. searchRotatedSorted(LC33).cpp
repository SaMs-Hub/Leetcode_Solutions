// App 1 - Brute Force O(n)

int search(vector<int> &arr, int target){
    int n = arr.size();

    for (int i = 0; i < n; i++){
        if (arr[i] == target) return i;
    }
    return -1;

}

// App 2 - Searching O(logN)
int rotate(vector<int> &arr, int low, int high){
    if (high >= low){
        int mid = (low + high)/2;

        if (mid != 0 && arr[mid - 1] > arr[mid]) return mid - 1;
        else if(arr[0] >= arr[mid]) return rotate(arr, low, mid - 1);
        else return rotate(arr, mid + 1, high);
    }
    return -1;
}

int getValue(vector<int> arr, int low, int high, int target){
    if (high >= low){
        int mid = (low + high)/2;

        if (arr[mid] == target) return mid;
        else if(arr[mid] < target) return getValue(arr, mid + 1, high, target);
        else return getValue(arr, low, mid - 1, target);
    }
    return -1;
}


int search(vector<int> &arr, int target){
    int n = arr.size();
    int rotatePoint = rotate(arr, 0, n - 1);
    cout << rotatePoint << ' ';
    if (rotatePoint == -1) return getValue(arr, 0, n - 1, target);
    
    if(arr[0] <= target ) return getValue(arr, 0, rotatePoint - 1, target);
    else return getValue(arr, rotatePoint + 1, n - 1, target);

}
