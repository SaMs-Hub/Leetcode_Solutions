// App 1 - Using STL
class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(), nums.end());
    }
};

// App 2 - Two Pointers O(n)
class Solution {
public:
    void sortColors(vector<int>& arr) {
        int low = 0, mid = 0, high = arr.size() - 1;

    while (mid <= high ){
        if (arr[mid] == 0){
            swap(arr[mid], arr[low]);
            low += 1;
            mid += 1;
        }else if (arr[mid] == 1) mid += 1;
        else{
            swap(arr[mid], arr[high]);
            high -= 1;
        }
    }
    }
};
