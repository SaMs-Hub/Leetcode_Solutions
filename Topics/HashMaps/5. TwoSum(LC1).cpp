// App 1 - Naive
#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &A, int target)
{
for (int i = 0; i < A.size(); i++) {
       for (int j = i + 1; j < A.size(); j++) {
           if(A[i] + A[j] == target) {
               return {i, j};
           }
       }
   }
}
int main()
{
    vector<int> arr{4, 1, 2, 3, 4, 1, 3};
    vector<int> ans = twoSum(arr, 4);
    for (auto x : ans)
    {
        cout << x << ',';
    }
    return 0;
}

// App 2 - Two pointers
vector<int> twoSum(vector<int> &arr, int target)
{

   // make a vector of pair n store arr[i], i
   vector<pair<int, int>> temp;
   // sort the vector, and make two pointers, left and rigt
   for (int i = 0; i < arr.size(); i++){
       temp.push_back({arr[i], i});
   }

   sort(temp.begin(), temp.end());
   int left = 0, right = arr.size() -1;
   // while left, right not equal, check if arr[left].first + arr[rig] = target, 
    while (left < right){
         // if yes return arr[left].second, 
        if (temp[left].first + temp[right].first == target){
            return {temp[left].second, temp[right].second};

             // else if < target - left++
        }else if(temp[left].first + temp[right].first < target){
            left++;
        }else{
             // else right ++
            right--;
        }
    }
  
  
  

}


// App 3 - Hashing
pair<int,int> twoSum(vector<int> &arr, int target) {
	unordered_map<int, int> temp;
   for (int i = arr.size() - 1; i >= 0; i--){
       auto it = temp.find(target - arr[i]);
       if (it != temp.end()){
           return make_pair(it->second, i);
       }

       temp[arr[i]] = i;
   }
    
}


// Hashing with Array
vector<int> twoSum(vector<int> &arr, int target){
    unordered_map<int, int> res;
    int n = arr.size();
    for (int i = 0; i < n; i++){
        auto value = res.find(target - arr[i]);
        if (value != res.end()) return {res[target - arr[i]], i};


        res[arr[i]] = i;
    }
    return {};
   }
