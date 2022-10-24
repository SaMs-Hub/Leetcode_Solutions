// APp 1 Priority Queue O(nlogn + plogp)

  vector<int> minInterval(vector<vector<int>>& intervals, vector<int>& queries) {
    vector<int> result;
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

    vector<int> sortedQuery = queries;
    unordered_map<int, int> res;

    sort(intervals.begin(), intervals.end());
    sort(sortedQuery.begin(), sortedQuery.end());

    int currentCount = 0;
    for (int j = 0; j < sortedQuery.size(); j++){
        int query = sortedQuery[j];

        while (currentCount < intervals.size() && intervals[currentCount][0] <= query){
            int left = intervals[currentCount][0];
            int right = intervals[currentCount][1];

            pq.push({right - left + 1, right});
            currentCount++;

        }

        // Remove lesser elements
        while (!pq.empty() && pq.top().second < query) pq.pop();

        if (!pq.empty()) res[query] = pq.top().first;
        else res[query] = -1;

       


    }
     int m = 0;
        while (m < queries.size()){
            result.push_back(res[queries[m]]);
            m++;
        }
        return result;
        
}
