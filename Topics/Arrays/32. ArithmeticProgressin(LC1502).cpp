class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();

    if (n == 1) return true;

    sort(arr.begin(), arr.end());
    int commonDifference = arr[1] - arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] - arr[i - 1] != commonDifference) return false;
    }
    return true;
    }
};
