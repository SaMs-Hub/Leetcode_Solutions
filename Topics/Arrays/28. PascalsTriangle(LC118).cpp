class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        // making a result arr
        vector<vector<int>> res;
        
        // traverse till numRows and keep creating arr and int with 1
        for (int i = 0;i < numRows; i++){
            vector<int> row(i + 1, 1);
            
            // travese j from 1 to i, and keep adding row[j] as res[prv][cur] + res[prev][prev]
            for (int j = 1;j < i;j ++){
                row[j] = res[i - 1][j] + res[i - 1][j - 1];
            }
            
            // push back curr
            res.push_back(row);
        }
        
        
        // return 
        return res;
        
        
    }
};
