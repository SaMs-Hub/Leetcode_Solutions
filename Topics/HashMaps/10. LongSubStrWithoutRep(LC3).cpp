// App 1 - Naive O(n)
int lengthOfLongestSubstring(string str){
    int n = str.size();
    int ans = 0;

    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            int flag = 1;
            map<int,int> res;
            for (int k = i; k <= j; k++){
                if (res[str[k] - 'a'] == 1){
                    flag = 0;
                    break;
                }
                res[str[k] - 'a'] = 1;
            }

            if (flag == 1) ans = max(ans, j - i + 1);
        }
    }
    return ans;
}

// App 2 - Hashing O(n)
class Solution {
public:
    int lengthOfLongestSubstring(string str) {
      int n = str.size();
      int maxSub = 0;
      vector<int> res(26, -1);

      int start = 0;
      for (int i = 0; i < n; i++){
          if (res[str[i] - 'a'] >= start) start = res[str[i] - 'a'] + 1;
          res[str[i] - 'a'] = i;
          maxSub = max(maxSub, i - start + 1);
      }
      return maxSub;
      }
};


// App 3 - Sliding Window O(n)
class Solution {
public:
    int lengthOfLongestSubstring(string str) {
    int n = str.size();
    int i = 0, j= 0;
    
    int result = 0;
    unordered_set<char> res;

    while (j < n){
        if (res.find(str[j]) == res.end()){
            res.insert(str[j]);
            result = max(result, j - i + 1);
            j++;
        }else{
            res.erase(str[i]);
            i++;
        }

    }
    return result;
    }
};
