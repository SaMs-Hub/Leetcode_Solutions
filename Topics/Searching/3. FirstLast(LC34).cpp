// App 1 - Naive - O(n)

vector<int> searchRange(vector<int>& arr, int target) {
         int first =-1;
        int last = -1;
        
        for (int i = 0; i < arr.size(); i++){
            if (first == -1 && arr[i] == target){
                first = i;
            }
            
            if (arr[i] == target){
                last = i;
            }
        }
        return {first, last};
    }

// App 2 - BinarySearch O(logN)
int findStart(vector<int> arr, int low, int high, int key){
  int n = arr.size();

 if (high >= low) {
       int mid = (high + low) / 2;
       if ((mid == 0 || key > arr[mid - 1]) && arr[mid] == key) {
           return mid;
       } else if (key > arr[mid]) {
           return findStart (arr, mid + 1, high, key);
       } else {
           return findStart (arr, low, mid - 1, key);
       }
   }
   return -1;
}

int findEnd(vector<int> arr, int low, int high, int key, int n){


  if (high >= low) {
       int mid = (high + low) / 2;
       if ((mid == n - 1 || key < arr[mid + 1]) && arr[mid] == key) {
           return mid;
       } else if (key < arr[mid]) {
           return findEnd (arr, low, mid - 1, key, n);
       } else {
           return findEnd (arr, mid + 1, high, key, n);
       }
   }
  return -1;
}

vector<int> searchRange(vector<int> arr, int key){
  int n = arr.size();
  return {findStart(arr, 0, n - 1, key), findEnd(arr, 0, n - 1, key, n)};
}
