// App1 - Naive
vector<int> mergeSortedArrays(vector<int> &A, vector<int> B) {
    vector<int> res(A.size() + B.size());
	
	for (int i = 0; i < A.size(); i++){
		res[i] = A[i];
	}
	
	for (int i = 0; i < B.size(); i++){
		res[A.size() + i] = B[i];
	}
	
	sort(res.begin(), res.end());
	return res;
}
