// App 1 - O(nlogn) Naive 

class Solution {
public:
    bool containsDuplicate(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        for (int i = 0; i < arr.size() - 1; i++){
            if(arr[i] == arr[i + 1]){
                return true;
            }
        } 
        
        return false;
    }
    
};



// App 2 - Using sets O(n)
bool containsDuplicates(vector<int> arr){
    set<int> res(arr.begin(), arr.end());
    return res.size() != arr.size();
}


// App 3 - Using hashmaps
bool containsDuplicates(vector<int> arr){
    map<int, int> res;
    for (auto x: arr){
        res[x]++;
    }

    for (auto y: res){
    
        // checking the frequency
        if (y.second >= 2) return true;
    }
    return false;
}

// App 4 - Using unorderedsets O(n)
 bool containsDuplicates(vector<int> &arr)
{
	unordered_set<int> res;
	for (auto c:arr){
		if (res.find(c) != res.end()) return true;
		res.insert(c);
	}
	return false;
}
    
    
