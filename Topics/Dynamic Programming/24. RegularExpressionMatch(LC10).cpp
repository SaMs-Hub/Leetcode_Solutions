// App 1 O(m + n)
map<pair<int, int>, int> dp;

bool dfs(string &s, string &p, int i, int j){

	if (dp.find({i, j}) != dp.end()) return dp[{i, j}];

	if (i >= s.size() && j >= p.size()) return true;

	if (j >= p.size()) return false;

int match = i < s.size() && (s[i] == p[j] or p[j] == '.');
	if (j + 1 < p.size() && p[j + 1] == '*'){
		dp[{i, j}] = dfs(s, p, i, j + 2) or (match && dfs(s, p, i + 1, j));
		return dp[{i, j}];
	}
	
	if (match){
		dp[{i, j}] = dfs(s, p, i + 1, j + 1);
		return dp[{i, j}];
	}

	dp[{i, j}] = false;
	return dp[{i, j}];
}

 bool isMatch(string s, string p) {
	return dfs(s, p, 0, 0);   
    }
