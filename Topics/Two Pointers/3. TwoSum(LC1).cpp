Note: Refer this(https://github.com/SaMs-Hub/Problem_Solving/blob/main/Topics/HashMaps/5.%20TwoSum(LC1).cpp) for other approaches
// App 1 - Naive O(n2)
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();

    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (arr[i] + arr[j] == target) return {i, j};
        }
    }
    return {};
    }
};

// App 2 - Two Pointers

class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n = arr.size();
    vector<pair<int, int>> res;

    for (int i = 0; i < n; i++){
        res.push_back({arr[i], i});
    }
    sort(res.begin(), res.end());
    int start = 0;
    int end = n - 1;
    int id1 = 0;
    int id2 = 0;
    while (start < end){
        if (res[start].first + res[end].first == target) {
           id1 = res[start].second;
           id2 = res[end].second;
           break;
        }
        else if(res[start].first + res[end].first < target) start++;
       else end--;
    }
    return {id1, id2};
    }
};

 Ex: Find two cages with n monkeys
