// App 1 - Naive O(n2)
class Solution {
public:
    int trap(vector<int>& arr) {
        int n = arr.size();
    int totalWater = 0;

    for (int i = 0; i < n; i++){
        int maxLeft = 0, maxRight = 0;
        for (int j = 0; j <= i; j++){
            maxLeft = max(maxLeft, arr[j]);
        }

        for (int j = i; j < n; j++){
            maxRight = max(maxRight, arr[j]);
        }

        totalWater += min(maxRight, maxLeft) - arr[i];
    }

    return totalWater;
        
    }
};

