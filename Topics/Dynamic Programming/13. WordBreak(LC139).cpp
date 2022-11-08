/// App 1 O(n3)

    bool wordBreak(string str, vector<string>& wordDict) {
        int  n = str.size();

        unordered_set<string> words;
        for (int i = 0; i < wordDict.size(); i++) words.insert(wordDict[i]);

        vector<int> dp(n + 1);
        dp[0] = true;

        for (int i = 1; i <= n; i++){
            for (int j = i - 1; j >= 0; j--){
                if (dp[j]){
                    string word = str.substr(j, i - j);
                    if (words.find(word) != words.end()){
                        dp[i] = true;
                        break;
                    }
                }
            }
        }
        return dp[n];
        
    }
