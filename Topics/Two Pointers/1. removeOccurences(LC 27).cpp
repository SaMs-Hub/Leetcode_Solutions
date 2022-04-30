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
