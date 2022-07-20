class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
         if (arr.size() == 0) return;

    // traverse over original matrix, and store j,i in i,jth elements
    // reverse it

    
    int n = arr.size();

    
        for (int i = 0; i < n; i++){
            for (int j = 0; j < i; j++){
                swap(arr[i][j], arr[j][i]);
            }
        }
        
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <n/2; j++) {
            swap(arr[i][j], arr[i][n - j - 1]);
        }
    }
    }
};
