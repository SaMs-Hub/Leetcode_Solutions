// App 1 - O(n)

int majorityElement(vector<int>& arr) {
       unordered_map<int, int> occurences;

      int i = 0, n = arr.size();
  
      for (auto x : arr)
      {
          occurences[x] += 1;
          if (occurences[x] > n / 2)
              return x;
      }
      return -1;  
}
