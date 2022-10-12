// O(n)
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
    stack<pair<int,int>> myStack;

    int result = 0;
    int n = heights.size();

    for (int i = 0; i < n; i++){
        int start = i;
        int currentValue = heights[i];

        while (!myStack.empty() && myStack.top().second > currentValue){
            int index = myStack.top().first;
            int width = i - index;
            int height = myStack.top().second;
            myStack.pop();

            int area = height * width;
            result = max(area, result);

            start = index;
        }
        myStack.push({start, currentValue});
    }

    while(!myStack.empty()){
        int height = myStack.top().second;
        int width = n - myStack.top().first;
        int area = height * width;

        myStack.pop();

        result = max(area, result);
    }
    return result;

        
}
};
