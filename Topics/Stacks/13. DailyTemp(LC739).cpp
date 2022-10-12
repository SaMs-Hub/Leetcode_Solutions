// App 1 O(n)
class Solution {
public:
vector<int> dailyTemperatures(vector<int> &arr)
{
    int n = arr.size();
    vector<int> result(n);
    stack<pair<int, int>> myStack;


    for (int i = 0; i < n; i++){
        int currentDay = i;
        int currentTemperature = arr[i];

        while (!myStack.empty() && myStack.top().second < currentTemperature){
            int prevDay = myStack.top().first;
            int prevTemperature = myStack.top().second;
            myStack.pop();

            result[prevDay] = currentDay - prevDay;
        }



        myStack.push({currentDay, currentTemperature});
    }

    return result;
}

};
