// App 1 - Sliding Window O(n)
class Solution {
public:
     int characterReplacement(string str, int k) {
    int totalSize = str.size();
    vector<int> count(26);

    int i = 0;
    int j = 0;

    int result = 0;
    int maxCount = 0;

    while (j < str.size()){
        count[str[j] - 'A']++;
        maxCount = max(count[str[j] - 'A'], maxCount);
        if(j - i + 1 - maxCount > k){
            count[str[i] - 'A']--;
            i++;
        }
        result = max(j - i + 1, result);
        j++;
    }
    return result;
     }
};
};

Ex: Animal replacement with n positions
