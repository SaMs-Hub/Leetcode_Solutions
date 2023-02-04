// Naive - O(n3)
class Solution {
public:
    string longestPalindrome(string str) {
         int n = str.length();
    int index = 0;
    int palindromeLength = 0;

    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            bool isPalindrome = true;
            for (int k = i; k <= j; k++){
                if (str[k] != str[j - k + i]) isPalindrome = false;
            }

            if (isPalindrome == true && j - i + 1 > palindromeLength){
                index = i;
                palindromeLength = j - i + 1;
            }

        }
    }

    string ans = "";
    for (int i = index; i < index + palindromeLength; i++){
        ans += str[i];
    }
    return ans;

        
    }
};


// Refer this for beter - https://github.com/SaMs-Hub/Problem_Solving/blob/main/Topics/Dynamic%20Programming/7.%20LongestPalSubStr(LC5).cpp
