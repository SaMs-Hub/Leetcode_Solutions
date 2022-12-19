// App 1 DP O(m * n)
 int longestCommonSubsequence(string text1, string text2) {
	int text1Length = text1.size();
	int text2Length = text2.size();

	vector<vector<int>> dp(text1Length + 1, vector<int>(text2Length + 1));
	
	for (int i = text1Length - 1; i >= 0; i--){
		for (int j = text2Length - 1; j >= 0; j--){
			if (text1[i] == text2[j]) dp[i][j] = 1 + dp[i + 1][j + 1];
			else dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
		}
	}

	return dp[0][0];
        
    }
