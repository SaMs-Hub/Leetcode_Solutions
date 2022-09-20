class Solution {
public:
    vector<int> getRow(int n) {
        vector<int> currRow, prevRow;
        currRow.push_back(1);
        if (n == 0) return currRow;
        
        prevRow = getRow(n - 1);
        for (int i = 1;i < n;i++){
            currRow.push_back(prevRow[i - 1] + prevRow[i]);
            
        }
        currRow.push_back(1);
        return currRow;
        
    }
};
