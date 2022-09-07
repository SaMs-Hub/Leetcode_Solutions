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



// App 2 - Two Pointers O(n)
class Solution {
public:
    int trap(vector<int>& heights) {
    int n = heights.size();
    int totalRainWater = 0;

    int left = 0;
    int right = n - 1;
    int maxLeft = 0, maxRight = 0;

    while (left <= right)
    {
        if (heights[left] <= heights[right])
        {
            if (heights[left] >= maxLeft)
                maxLeft = heights[left];
            else
                totalRainWater += maxLeft - heights[left];
            left += 1;
        }
        else
        {
            if (heights[right] >= maxRight)
                maxRight = heights[right];
            else
                totalRainWater += maxRight - heights[right];
            right -= 1;
        }
    }

    return totalRainWater;
    }
};
