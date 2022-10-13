// O(n * log m)
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
    int n = piles.size();

    int low = 1;
    int high = 0;
    for (int i = 0; i < n; i++) high = max(piles[i], high);

    int result = high;

    while (low <= high){
        int mid = low + (high-low)/2;

        long int hours = 0;
        for (int i = 0; i < n; i++) hours += ceil((double) piles[i]/mid);

        if (hours <= h){
            result = min(mid, result);
            high = mid - 1;
        }else low = mid + 1;

    }
    return result;
        
}
};
