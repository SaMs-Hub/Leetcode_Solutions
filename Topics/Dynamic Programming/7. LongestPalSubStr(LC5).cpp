// App 1 O(n2)

void helper(string str, int i, int j, int &maxStart, int &maxLength){

    while (i >= 0 && j <= str.size() - 1 && str[i] == str[j]){
        i--;
        j++;
    }

    if (j - i - 1 > maxLength){
        maxLength = j - i - 1;
        maxStart = i + 1;
    }
}

 string longestPalindrome(string s) {

    int maxStart = 0;
    int maxLength = 1;

    for (int i = 0;i < s.size(); i++){
        helper(s, i, i, maxStart, maxLength);
        helper(s, i, i + 1, maxStart, maxLength);
    }

    return s.substr(maxStart, maxLength);
        
    }
