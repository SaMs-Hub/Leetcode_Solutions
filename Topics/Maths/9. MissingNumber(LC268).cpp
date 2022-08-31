// App 1 - O(nlogN)
class Solution {
public:
   int missingNumber(vector<int> &arr){
    
    sort(arr.begin(), arr.end());
    int n = arr.size();
    int currentElement = n;
    for (int i = 0; i < n; i++){
        if (i != arr[i]){
            currentElement = i;
            break;
        }
    }
    return currentElement;
}
};

