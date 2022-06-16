// Approach 1 - Brute Force

class Solution {
public:
    string longestCommonPrefix(vector<string>& arr) {
        string lcp = arr[0];
   

    for (int i = 1; i < arr.size(); i++){
        string cp;
        for (int j = 0; j < min(lcp.size(), arr[i].size()); j++){
           

            if (lcp[j] == arr[i][j]){
                cp += lcp[j];
            }else{
                break;
            }
        }
        lcp = cp;
        
    }

    return lcp;
        
    }
};
