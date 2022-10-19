// App 1 PQ O(nlogn)
class Solution {
public:
    int lastStoneWeight(vector<int>& arr) {
        int n = arr.size();

        priority_queue<int> pq;

        for (auto x: arr) pq.push(x);

        while (pq.size() > 1){
        int y = pq.top();
        pq.pop();
        int x = pq.top();
        pq.pop();

        if (y > x) pq.push(y -x);
        }

        if (pq.empty()) return 0;
        return pq.top();


          }
};
