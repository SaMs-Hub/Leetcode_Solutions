// App 1- Naive O(n * logn)
class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n = arr.size();
        if (n == 0) return 0;
    sort(arr.begin(), arr.end());
    int currentMax = 1;
    int ans = 1;

    for (int i = 1; i < n; i++){
        if (arr[i] - arr[i - 1] > 1) currentMax = 1;
        else if(arr[i] - arr[i - 1] == 1) currentMax += 1;
        
        ans = max(ans, currentMax);
    }
    return ans;
    }
};


// App 2 - Hashing O(n)
class Solution {
public:
    int longestConsecutive(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int, int> res;
        for (int i = 0; i < n; i++){
            res[arr[i]] = 1;
        }

        int ans = 0, currentSequence = 0;
        for (int i = 0;i < n ; i++){

            if (res[arr[i] - 1] == 1) continue;

            currentSequence = 0;
            int value = arr[i];
            while (res[value] == 1)
            {
                currentSequence++;
                value++;
            }

            ans = max(ans, currentSequence);

        }
        return ans;
        }

};
