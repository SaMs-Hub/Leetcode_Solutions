// Appraoch 1 - Using Sorting

#include <bits/stdc++.h>
using namespace std;

bool isAnagram(string A, string B){
    // check the size, if not equal return false
    if (A.size() != B.size()){
        return false;
    }
    // sort them and return
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    return A == B;
}


int main()
{
    string A = "hello";
    string B = "elhol";

    cout << isAnagram(A, B);
    return 0;
}



// Approach 2 - Using Maps
class Solution {
public:
    bool isAnagram(string A, string B) {
    if (A.size() != B.size()){
        return false;
    }

    unordered_map<char, int> value;
    for (auto c: A){
        value[c]++;
    }

    for (auto c: B){
        value[c]--;
        if (value[c] < 0) return false;
    }

    return true;
}
};


// App 3 - Using arrays O(n)
class Solution {
public:
bool isAnagram(string A, string B){
	int l1 = A.size();
	int l2 = B.size();
    
    if (l1 != l2) return false;

	vector<int> res(26);

	for (auto c: A) res[c - 'a'] ++;
	for (auto c: B){
		res[c - 'a']--;
		if (res[c - 'a'] < 0) return false;
	}
	return true;


}
};
