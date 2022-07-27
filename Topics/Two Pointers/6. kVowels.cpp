// App 1 - Naive O(n3)
vector<int> getSubs(string s, int k){
    int n = s.length();
    int result = 0;

    vector<int> vowels;

    for (int i = 0; i < n; i++){
        for (int j = i; j < n; j++){
            if (j - i + 1 == k){
            int counter = 0;
            for (int l = i; l <= j; l++){
                
                if(s[l] == 'a' || s[l] == 'e' || s[l] == 'i' || s[l] == 'o' || s[l] == 'u') {
                    counter += 1;
                    vowels.push_back(counter);
                }}

            }
            
            
        }
    }

    return vowels;


}



// App 2 - Sliding Window O(n)
int isVowel(char c){
    if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u') return 1;
    return 0;
}

vector<int> kSubstringVowels(string s, int k) {
	  int n = s.length();
    int count = 0;
     

    vector<int> vowels;

    for (int i = 0; i < k; i ++){
        count += isVowel(s[i]);
    }

    vowels.push_back(count);

    for (int i = k; i < n; i++){
        count = count - isVowel(s[i - k]) + isVowel(s[i]);
        vowels.push_back(count);
    }

return vowels;

}
