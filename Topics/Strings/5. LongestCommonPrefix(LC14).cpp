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


// Approach 2 - Using Sort
string lcp(vector<string> str){
    sort(str.begin(), str.end());
    int n = str.size() - 1;

    string lcp;
    for (int i = 0; i < min(str[0].size(), str[n].size()); i++){
        if (str[0][i] == str[n][i]){
            lcp += str[0][i];
        }else{
            break;
        }
    }

    return lcp;
}
