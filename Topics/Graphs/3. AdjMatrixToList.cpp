vector<vector<int>> matrixToAdjList(int n, vector<vector<int>> &matrix) {
	// make a res arr of sizeN
    vector<vector<int>> res(n);
	
	// traverse over matrix, and get 1
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (matrix[i][j] == 1){
				res[i].push_back(j);
			}
		}
	}
	
	return res;
}
