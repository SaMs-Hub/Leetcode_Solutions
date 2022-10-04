// App 1 - Naive TLE
 int maxArea(vector<int>& arr) {
    int n = arr.size();
    int res = 0;

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n;j++){
            int area = (j - i) * (min(arr[i], arr[j]));
            res = max(res, area);

        }
    }
    return res;

        
}

// App 2 - Two Pointers O(n)
int maxArea(vector<int>& arr) {  
    int left = 0;
    int right = arr.size() - 1;

    int res = 0;
    int currArea = 0;

    while (left < right){
        currArea = (right - left) * min(arr[left], arr[right]);
        res = max(res, currArea);

        if (arr[left] <= arr[right]) left++; 
        else right--;
    } 
    return res;
}
