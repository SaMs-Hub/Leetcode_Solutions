class Solution {
public:
    int maxVowels(string str, int k) {
         int len = str.length();
    int result = 0;
    for (int i = 0; i < len; i++){
        for (int j = i; j < len; j++){
            if (j - i + 1 == k){
                int counter = 0;
                for (int l = i; l <= j; l++){
                    if (str[l] == 'a' || str[l] == 'e' || str[l] == 'i' || str[l] == 'o' || str[l] == 'u') {
                    counter += 1;    
                    }
                }

                result = max(counter, result);
            }
        }
    }
    return result;
    }
};
