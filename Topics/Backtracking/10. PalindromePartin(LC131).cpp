// App 1 DFS O(n * 2**n)
class Solution {
public:
    bool isPalindrome(string s, int left, int right){
    while (left < right){
    if (s[left] != s[right]){
        return false;
    }
    left++;
    right--;
    }
    return true;
}

void dfs(string s, int start, vector<string> &current, vector<vector<string>> &result){
    if (start == s.size()){
        result.push_back(current);
        return;
    }
    for (int i = start; i < s.size(); i++){
        if (isPalindrome(s, start, i)){
            string str = s.substr(start, i - start + 1);
            current.push_back(str);
            dfs(s, i + 1, current, result);
            current.pop_back();
        }
    }
}

  vector<vector<string>> partition(string s) {
    vector<string> current;
    vector<vector<string>> result;

    dfs(s, 0, current, result);
    return result;

        
}
};
