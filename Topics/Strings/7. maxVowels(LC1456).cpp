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


// Refer this for better approaches https://github.com/SaMs-Hub/Problem_Solving/blob/main/Topics/Two%20Pointers/5.%20maxVowels(LC1456).cpp
