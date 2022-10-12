// App 1 O(n)
class Solution {
public:
   void generate(int n, int open, int close, string str, vector<string> &result){
    if (open == n && close == n){
        result.push_back(str);
        return;
    }

    if (open < n) generate(n, open + 1, close, str + '(', result);
    if (open > close) generate(n, open, close + 1, str + ')', result);

}

vector<string> generateParenthesis(int n){
    vector<string> result;
    generate(n, 0, 0, "", result);
    return result;

}
};
