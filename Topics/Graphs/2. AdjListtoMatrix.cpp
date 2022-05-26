vector<vector<int>> adjListToMatrix(int n, vector<vector<int>> &adjList) {
	vector<vector<int>> matrix(n, vector<int> (n, 0));
	
	for (int i = 0; i < n; i++){
		for (int j = 0; j < adjList[i].size(); j++){
			matrix[i][adjList[i][j]] = 1;
		}
	}
	
	return matrix;
}
