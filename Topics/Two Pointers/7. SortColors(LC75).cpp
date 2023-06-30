// App 1 - Using STL
class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(), nums.end());
    }
};

// App 2 - Two Pointers O(n)
// Logic: Try to put elements in [low, medium, high] format
void sortColors(vector<int> &arr)
{
    int low = 0, medium = 0, high = arr.size() - 1;

    while (medium <= high)
    {
        if (arr[medium] == 0)
        {
            swap(arr[medium], arr[low]);
            low += 1;
            medium += 1;
        }
        else if (arr[medium] == 1)
            medium += 1;
        else
        {
            swap(arr[medium], arr[high]);
            high -= 1;
        }
    }
}


Ex: Sort 3 monkeys based on age
