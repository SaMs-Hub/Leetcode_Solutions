// App 1 O(n2)

class Solution {
public:

void middleOut(string s, int i, int j, int &result){
    while (i >= 0 and j < s.size() and s[i] == s[j]){
        result += 1;
        i--;
        j++;
    }
}

 int countSubstrings(string s) {
    int result = 0;

    for (int i = 0; i < s.size(); i++){
        middleOut(s, i, i, result);
        middleOut(s, i, i + 1, result);
    }

    return result;
    }
};
