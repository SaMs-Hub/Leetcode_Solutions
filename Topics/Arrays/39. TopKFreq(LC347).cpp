// App 1 - O(n)

class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
	int n = arr.size();
	unordered_map<int, int> mes;

	for (int i = 0; i < n; i++) mes[arr[i]] += 1;

	vector<vector<int>> buckets(n + 1);
        for (auto x = mes.begin(); x != mes.end(); x++) {
            buckets[x->second].push_back(x->first);
        }
	vector<int> result;
	for (int i = n; i >= 0; i--){
		if (result.size() >= k) break;
		if (!buckets[i].empty()) result.insert(result.end(), buckets[i].begin(), buckets[i].end());
	}
	return result;
	

        
}
};
