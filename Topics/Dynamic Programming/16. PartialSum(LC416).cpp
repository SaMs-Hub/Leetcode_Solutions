// App 1 O(n * sums(n))

     bool canPartition(vector<int>& nums) {
    int n = nums.size();
    int target = 0;

    for (int i= 0; i < n; i++) target += nums[i];

    if (target % 2 != 0) return false;

    target /= 2;

    unordered_set<int> dp;
    dp.insert(0);
    for (int i= 0; i < n; i++){
        unordered_set<int> dpNext;
        for (auto it = dp.begin(); it != dp.end(); it++){
            if (*it + nums[i] == target) return true;
            dpNext.insert(*it + nums[i]);
            dpNext.insert(*it);
        }
        dp = dpNext;

    }
    return false;  
    }
