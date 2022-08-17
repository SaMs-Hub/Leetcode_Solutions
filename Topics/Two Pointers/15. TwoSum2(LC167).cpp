// App 1 - Two Pointers
class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
         int n = arr.size();
          int start = 0, end = n - 1;

          while (start < end){
              if (arr[start] + arr[end] == target) return {start + 1, end + 1};
              else if(arr[start] + arr[end] < target){
                  start += 1; 
              }else{
                  end -= 1;
              }
          }

        return {};
        
    }
};

