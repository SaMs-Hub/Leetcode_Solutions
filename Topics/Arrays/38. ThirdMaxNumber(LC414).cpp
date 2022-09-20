// App 1 Sets
class Solution {
public:
    int thirdMax(vector<int>& nums) {
               int size=nums.size();
        set<int> s1;
        sort(nums.begin(),nums.end());
        for(int i=size-1;i>=0;i--)
        {
            s1.insert(nums[i]);
            if(s1.size()==3)
                break;
        }
        if(s1.size()<3)
            return *max_element (nums.begin(),nums.end());
        else 
            return (*(s1.begin()));

    }
};
