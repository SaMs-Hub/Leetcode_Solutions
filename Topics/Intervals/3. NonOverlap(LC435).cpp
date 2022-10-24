// App 1 BF O(nlogn)
class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    int n = intervals.size();

    int result = 0;
    if (n == 1) return result;

    int currentCount = 0;

    // sort the intervals based on 1st value Adds TC logn
    sort(intervals.begin(), intervals.end(), [] (const auto&A, const auto&B){return A[0] < B[0];} );

    while (currentCount < n - 1){
        if (intervals[currentCount][1] > intervals[currentCount + 1][0]){
            if(intervals[currentCount][1] < intervals[currentCount + 1][1]) intervals[currentCount +1] = intervals[currentCount];
             result++;
        }
       

        currentCount++;
    }

    return result;


        
    }
};
