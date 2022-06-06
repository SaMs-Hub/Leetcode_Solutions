// App 1 - Naive

class Solution {
public:
    int numIdenticalPairs(vector<int>& arr) {
        int count = 0;
	for (int i = 0; i < arr.size(); i++){
		for (int j = i + 1; j < arr.size(); j++){
			if (arr[i] == arr[j]){
				count += 1;
			}
		}
	}
	return count;
    }
};


// App2 - using nc2 formula
 int numIdenticalPairs(vector<int>& arr) {
       int n = arr.size();

    unordered_map<int, int> res;
    for (auto x: arr){
        res[x] = res[x] + 1;
    }

    int total = 0;
    for (auto y: res){
        total += (y.second * (y.second - 1)/ 2);
    }

    return total;
    }
