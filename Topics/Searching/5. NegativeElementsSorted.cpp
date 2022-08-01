// App 1 - BF O(n)
int getNegativeNumbersCount(vector<int> &arr) {
	int count = 0, n = arr.size();

    for (auto x:arr){
        if (x < 0) count += 1;
    }
    return count;
}


// App2 - BS O(logN)
int getNegative(vector<int> arr, int low, int high){
    if (high > low){
        int mid = (low + high)/2;
        if (arr[mid] < 0 && arr[mid + 1] >= 0) return mid;
        else if(arr[mid] >= 0 && arr[mid + 1] >= 0) return getNegative(arr, low, mid - 1);
        else return getNegative(arr, mid + 1, high);
    }
}

int getNegativeNumbersCount(vector<int> arr){
    int n = arr.size();
   if (arr[0] >= 0) return 0;

   if (arr[n - 1] < 0 ) return n;
   return getNegative(arr, 0, n - 1) + 1;
}
