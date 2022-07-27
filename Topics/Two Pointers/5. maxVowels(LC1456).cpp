// App 1 - Naive O(n3)
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

// App 2 Two Pointers O(n)
class Solution {
public:
        
int isVowel(char c){
    if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') return 1;
    return 0;
}
    int maxVowels(string str, int k) {
         int n = str.length();
    int count = 0;

    for (int i = 0; i < k; i++){
        count += isVowel(str[i]);
    }

    int maxCount = count;
    for (int i = k; i < n; i++){
        count = count - isVowel(str[i - k]) + isVowel(str[i]);
        maxCount = max(count, maxCount);
    }
    return maxCount;
    }
    


};
