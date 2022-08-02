// App 1 - Maps
int singleNumber(vector<int> arr){
    unordered_map<int, int> res;

    for (auto x: arr){
        res[x]++;
    }

    for (auto x: res){
        if (x.second == 1) return x.first;
    }
    return -1;
}

// App 2 - XOR
int singleNumber(vector<int> arr){
   int n = arr.size();

   int xOr = 0;
   for (int i = 0; i < n; i++){
    xOr = xOr ^ arr[i];
   }
   return xOr;
}



// App 3 - Searching

int getSingle(vector<int> arr, int low, int high){
    if (high >= low){
        int mid = (low + high)/2;
        if (low == high) return arr[mid];

        if (mid % 2 == 0){
            if (arr[mid] == arr[mid + 1]) return getSingle(arr, mid + 1, high);
            else return getSingle(arr, low, mid);
        }else{
            if (arr[mid] == arr[mid - 1]) return getSingle(arr, mid + 1, high);
            else return getSingle(arr, low, mid);
        }
    }
}

int singleNumber(vector<int> arr){
   int n = arr.size();
    return getSingle(arr, 0, n - 1);
}
