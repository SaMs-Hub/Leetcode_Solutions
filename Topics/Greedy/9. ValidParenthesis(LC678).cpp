// App 1 O(n)
class Solution {
public:
   
 bool checkValidString(string s) {
    int leftMin = 0;
    int leftMax = 0;

    for (int i = 0; i < s.size(); i++){
        if (s[i] == '('){
            leftMin++;
            leftMax++;
        }else if(s[i] == ')'){
            leftMin--;
            leftMax--;
        }else{
            leftMin--;
            leftMax++;
        }

        if (leftMax < 0) return false;

        if (leftMin < 0) leftMin = 0;
    }

    if (leftMin == 0) return true;
    return false;
        
    }
};
