// App 1 - Two Pointers O(1)

int removeElement(vector<int>& v, int k) {
	
	int size = nums.size();

	int i = 0;
	int j = 0;
	while (j < size){
		if (nums[j] != val){
			nums[i] = nums[j];
			i++;
		}
		j++;
	}

	return i;
}


// App 2 - STL
 int removeElement(vector<int>& arr, int k) {
        auto value = remove(arr.begin(), arr.end(), k);
    return distance(arr.begin(), value);
}

Ex: Remove tiger from monkey cages
