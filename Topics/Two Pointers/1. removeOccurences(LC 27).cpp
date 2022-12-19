// App 1 - Two Pointers O(1)

int removeElement(vector<int>& v, int k) {
	
	// take var i;
	int i = 0;
	
	// iterate over arr using j
	for (int j = 0; j < count; j++){
		
		// if digit k not at index j, push it into v[i]
		if (v[j] != k){
			v[i] = v[j];
			i++;
		}
	}
	
	// return i;
	return i;
}


// App 2 - STL
 int removeElement(vector<int>& arr, int k) {
        auto value = remove(arr.begin(), arr.end(), k);
    return distance(arr.begin(), value);
}
