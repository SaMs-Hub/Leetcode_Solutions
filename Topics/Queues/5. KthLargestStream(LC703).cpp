// App 1 Priority Queue O(nlogn)
class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int>> pq;
    int y;
    KthLargest(int k, vector<int>& nums) {
        y = k;
        for (auto x: nums) pq.push(x);
        
        while (pq.size() > y) pq.pop();
       
        
    }
    
    int add(int val) {
        pq.push(val);
        if (pq.size() > y)  pq.pop();
        return pq.top();
        
    }
};

