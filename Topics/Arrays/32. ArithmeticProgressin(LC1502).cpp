// App 1 - O(nlogn)

class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        int n = arr.size();

    if (n == 1) return true;

    sort(arr.begin(), arr.end());
    int commonDifference = arr[1] - arr[0];
    for (int i = 1; i < n; i++){
        if (arr[i] - arr[i - 1] != commonDifference) return false;
    }
    return true;
    }
};

// App 2 - Using sets O(n)

bool canMakeArithmeticProgression(vector<int>& arr) {
	set<int> iSet(arr.begin(), arr.end());
	int n = iSet.size();
	if ( n < 2) return true;

	auto it = iSet.begin();
	int commonDiff = *++it - *iSet.begin();
	for (; it !=  iSet.end();it++){
		if (*it - *prev(it) != commonDiff) return false;
	}
	return true;
        
        
    }

