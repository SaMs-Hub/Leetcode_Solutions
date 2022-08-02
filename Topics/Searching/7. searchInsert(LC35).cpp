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


// App 2 - Searching 
