// App 1 - Two Pointers - Duplicates
vector<int> intersection(vector<int> &arr1, vector<int> &arr2) {
	  int n1 = arr1.size();
    int n2 = arr2.size();

    vector<int> res;
    int i = 0;
    int j = 0;

    while (i < n1 && j < n2){
        if (arr1[i] < arr2[j]) i++;
        else if (arr1[i] > arr2[j]) j++;
        else{
            res.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    
    return res;
}


// App 2 - Unique Two pointers
class Solution {
public:
    vector<int> intersection(vector<int>& arr1, vector<int>& arr2) {
        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
         int n1 = arr1.size();
    int n2 = arr2.size();

    vector<int> result;
    unordered_set<int> res;
    int i = 0;
    int j = 0;

    while (i < n1 && j < n2){
        if (arr1[i] < arr2[j]) i++;
        else if (arr1[i] > arr2[j]) j++;
        else{
            res.insert(arr1[i]);
            i++;
            j++;
        }
    
    }
        for (auto x: res) result.push_back(x);
        return result;
    }
};


