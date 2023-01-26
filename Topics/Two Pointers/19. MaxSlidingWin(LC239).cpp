// App 1 Deque O(n)

 vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    int n = nums.size();
    vector<int> result;
    deque<int> deck;

    int i = 0;
    int j = 0;

    while (j < n){
        while (!deck.empty() && nums[deck.back()] < nums[j] ) deck.pop_back();
        deck.push_back(j);

        if (i > deck.front()) deck.pop_front();

        if (j + 1 >= k){
            result.push_back(nums[deck.front()]);
            i++;
        }

        j++;
    }

    return result;
        
    }
    
    
   Ex: Eldest monkey in every k monkeys
