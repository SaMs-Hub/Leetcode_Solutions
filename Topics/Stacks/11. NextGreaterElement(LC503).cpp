// App 1- Naive
vector<int> getNextGreaterElement(vector<int> &arr){
    vector<int> res;
    int n = arr.size();

    for (int i = 0; i < n; i++){
        bool possible = false;
        for (int j = i + 1; j < n; j++){
            if (arr[j] > arr[i]){
                res.push_back(arr[j]);
                possible = true;
                break;

            }
        }
        if (!possible) res.push_back(-1);
    }
    return res;
}


// App 2 - Stack
vector<int> getNextGreaterElement (vector<int> &A) {
	int n = A.size();
	stack<int> s; 
	vector<int> nextGreater(n);
    for (int i = n - 1; i >= 0; i--){
        while(!s.empty() && A[s.top()] <= A[i]) {
			s.pop();
		}
        if(s.empty()) {
			nextGreater[i] = -1;
		}
        else {
			nextGreater[i] = A[s.top()];
		}
        s.push(i);
    }
    return nextGreater;
}



