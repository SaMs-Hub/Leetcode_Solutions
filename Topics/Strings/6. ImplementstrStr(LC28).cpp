// App 1 - 

class Solution {
public:
    int strStr(string s1, string s2) {
        if (s1.size() < s2.size()){
        return -1;
    }

    for (int i = 0; i <= s1.size() - s2.size(); i++){
        int subs = 1;
        for (int j = 0; j < s2.size(); j++){
            cout << "values" << s1[i + j]  << ' ' << s2[j]  << endl;
            if (s1[i + j] != s2[j]){

            
            subs = 0;
            break;
            }
        }

        if (subs == 1){
            return i;
        }
    }

    return -1;
        
    }
};


Ex: Find first pair of monkeys in bigger pair
