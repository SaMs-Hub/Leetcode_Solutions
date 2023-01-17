// App 1 - BruteForce (not unique)
int KDiffPair(vector<int> arr, int k){
  int n = arr.size();
  int count = 0;
  for (int i= 0;i < n; i++){
    for (int j = i + 1;j < n; j++){
      if (abs(arr[i] - arr[j]) == k){
        count += 1;
      }
    }
  }
  return count;

}

// App 2 - Maps O(n)
class Solution {
public:

int findPairs(vector<int> arr, int k){
  int n = arr.size();
  int count = 0;

  unordered_map<int, int> res;
  for (auto x: arr) res[x]++;

  for (auto x: res){
    if (k == 0){
      if (x.second > 1) count += 1;
    }else if(res.find(x.first+k)!=res.end()) count += 1;
  }
  return count;


}
};


// App 3 - Two Pointers
int findPairs(vector<int> arr, int k){
  int n = arr.size();
  sort(arr);
  int count = 0;

  int i = 0, j = 1;
  while (j < n){
    // for unique
    while (j < (n - 1) && arr[j] == arr[j + 1]) j += 1;

    int diff = arr[j] - arr[i];

    if (diff == k){
      count += 1;
      i += 1;
      j += 1;
    }else if (diff < k) j += 1;
    else i += 1;

    if (i == j) j += 1;
  }
  return count;

}


Ex: Get monkey ages with given difference

