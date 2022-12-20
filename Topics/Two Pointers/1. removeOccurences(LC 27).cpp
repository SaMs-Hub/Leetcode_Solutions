// App 1 - Two Pointers O(1)

int removeElement(vector<int>& v, int k) {
	
	int count = nums.size();
    int i = 0;

    for (int j = 0; j < count; j++){
        if (nums[j] != val){
            nums[i] = nums[j];
            i++;
        }

    }   

    return i;
    }
}


// App 2 - STL
 int removeElement(vector<int>& arr, int k) {
        auto value = remove(arr.begin(), arr.end(), k);
    return distance(arr.begin(), value);
}
