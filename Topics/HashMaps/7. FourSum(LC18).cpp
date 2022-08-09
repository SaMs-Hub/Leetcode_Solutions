// App 1 - Naive O(n4 * logN)
vector<vector<int>> fourSum(vector<int> &arr, int target){
    vector<vector<int>> res;
    set<vector<int>> removeDuplicates;

    int n = arr.size();
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            for (int k = j + 1; k < n; k++){
                for (int l = k + 1; l < n; l++){
                    int sum = arr[i] + arr[j] + arr[k] + arr[l];
                    if (sum == target){
                        vector<int> list = {arr[i], arr[j], arr[k], arr[l]};
                        sort(list.begin(), list.end());
                        removeDuplicates.insert(list);
                    }
                }
            }
        }
    }

    for (auto x: removeDuplicates) res.push_back(x);
    return res;

    
}



// App 2 - Hashing - O(n3)
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> res;
        int n = arr.size();
    
    for (int i = 0; i < n; i++){
        if (i != 0 && arr[i] == arr[i - 1]) continue;

        for (int j = i + 1; j < n; j++){
              if (j != i + 1 && arr[j] == arr[j - 1]) continue;

                int start = j + 1, end = n - 1;
                while (start < end){
                    long long sum = (long long int)arr[i] + (long long int)arr[j] + (long long int)arr[start] + (long long int)arr[end];
                    if (sum == target){
                        vector<int> list =  {arr[i], arr[j], arr[start], arr[end]};
                        res.push_back(list);

                        while (start < end && arr[start] == arr[start + 1]) start += 1;
                        while (start< end && arr[end] == arr[end - 1]) end -= 1;

                          start += 1;
                    end -= 1;
                    }else if(sum < target) start += 1;
                    else end -= 1;
                }

        }
    }
    return res;
    }
};
