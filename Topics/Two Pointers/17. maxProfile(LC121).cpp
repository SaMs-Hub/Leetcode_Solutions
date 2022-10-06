// App 1 - Naive
 int maxProfit(vector<int>& arr) {
    int minValue = arr[0];
    int maxDiff = 0;

    for (int i = 0; i < arr.size(); i++){
        minValue = min(arr[i], minValue);
        maxDiff = max(arr[i] - minValue, maxDiff);
    }
    return maxDiff;

        
}
// App 2 - Using while Two pointers
class Solution {
public:
    int maxProfit(vector<int>& arr) {
       int i = 0, j = 1;
    int maxProfit = 0;

    while (j < arr.size()){
        if (arr[i] < arr[j]){
            maxProfit = max(arr[j] - arr[i], maxProfit);

        }else{
            i = j;
        }
        j  += 1;
    }
    return maxProfit;
    }
};

    


