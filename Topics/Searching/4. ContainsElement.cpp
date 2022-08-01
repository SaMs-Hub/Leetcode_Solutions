// App 1 - BF - O(n)
bool containsElement(vector<int> arr, int k){
  int n = arr.size();

  for (int i = 0; i < n; i++){
    if (arr[i] == k) return true;
  }
  return false;
}


// App 2 - Binary Search
bool binarySearch(vector<int> arr, int low, int high, int k){
  if (low <= high){
    int mid = (low + high)/2;
    if (arr[mid] == k) return true;
    else if (arr[mid] < k) return binarySearch(arr, mid + 1, high, k);
    else return binarySearch(arr, low, mid - 1, k);

  }
  return false;
}
bool containsElement(vector<int> arr, int k){
  int n = arr.size();
  return binarySearch(arr, 0, n - 1, k);
  
}

