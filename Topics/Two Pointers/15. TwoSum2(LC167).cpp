// App 1 - Two Pointers O(n)
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


// 1.1 Same TPs along with vector
vector<int> twoSum(vector<int>& arr, int target) {
    int j = arr.size() - 1;
    int i = 0;

    vector<int> res;
    while (i < j){
        int sum = arr[i] + arr[j];
        if (sum == target){
            res.push_back(i + 1);
            res.push_back(j + 1);
            break;
        }else if(sum > target) j--;
        else i++;
    }
    return res;
        
}
