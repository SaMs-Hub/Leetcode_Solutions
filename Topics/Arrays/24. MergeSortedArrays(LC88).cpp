// App1 - Naive O((m + n) * log (m + n))
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


// App2 - MergeSort O(m + n)
vector<int> mergeSort(vector<int> arr1, vector<int> arr2){
    int m = arr1.size(); int n = arr2.size();

    vector<int> res(m + n);
    int i = 0, j = 0, k = 0;

    while (i < m && j < n){
        if (arr1[i] < arr2[j]) res[k++] = arr1[i++];
        else res[k++] = arr2[j++];
    }

    while (i < m){
        res[k++] = arr1[i++];
    }

    while (j < n){
        res[k++] = arr2[j++];
    }

    return res;
}

// Approach 3
 void merge(vector<int>& arr1, int m, vector<int>& arr2, int n) {

    int i = m-1, j = n - 1, k = (m + n) - 1;

    while (i >= 0 && j  >= 0){
        if (arr1[i] > arr2[j]) arr1[k--] = arr1[i--];
        else arr1[k--] = arr2[j--];
    }


    while (j  >= 0){
        arr1[k--] = arr2[j--];
    }
    
        
    }

