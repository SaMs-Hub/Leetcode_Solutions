// App 1 O(nlogn)
class Solution {
public:
   
vector<vector<int>> merge(vector<vector<int>> &intervals)
{
   int currentCount = 0;
    int totalCount = intervals.size();

    // sorting based on first value
    sort(intervals.begin(), intervals.end(), [](const auto&a, const auto&b){
        return a[0] < b[0];
    });

    if (totalCount == 1) return intervals;

    vector<vector<int>> result;

    while (currentCount < totalCount - 1){
        if (intervals[currentCount][1] >= intervals[currentCount + 1][0]){
            intervals[currentCount + 1][0] = intervals[currentCount][0];
            intervals[currentCount + 1][1] = max( intervals[currentCount + 1][1], intervals[currentCount][1]);

        }else{
            result.push_back(intervals[currentCount]);
        }
        currentCount++;
    }

   result.push_back(intervals[currentCount]);
    return result;

}
};
