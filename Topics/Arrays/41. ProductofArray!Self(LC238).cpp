class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
      int n = arr.size();
    vector<int> result(n, 1);

    int prefix = 1;
    for (int i = 0; i < n; i++){
        result[i] = prefix;
        prefix *= arr[i];
    }

    int postfix = 1;
    for (int i = n - 1; i >= 0; i--){
        result[i] *= postfix;
        postfix *= arr[i];
    }
    return result;
    }
};
