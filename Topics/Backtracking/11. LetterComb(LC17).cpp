// App DFS O(n * 4**n)
class Solution {
public:
   void dfs(string digits, int index, unordered_map<char, string>& res,  string &current, vector<string> &result){
    if(index == digits.size()){
        result.push_back(current);
        return;
    }

    string str = res[digits[index]];
    for (int i = 0; i < str.size(); i++){
        current.push_back(str[i]);
        dfs(digits, index + 1, res, current,result);
        current.pop_back();

    }
}


 vector<string> letterCombinations(string digits) {
    if (digits.size() == 0) return {};
      unordered_map<char, string> res = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };

        vector<string> result;
        string current="";
        dfs(digits, 0, res, current, result);
        return result;

    }
};
