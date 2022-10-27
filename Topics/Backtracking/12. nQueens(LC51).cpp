// App 1 DFS O(n!)
class Solution {
public:
    
unordered_set<int> cols;
unordered_set<int> positiveDiagonal;
unordered_set<int> negativeDiagonal;

void dfs(int n, int row, vector<string> &board,  vector<vector<string>> &result){
    if (row == n){
        result.push_back(board);
        return;
    }

    for (int col = 0; col < n; col++){

        // base case for handling adjacent + diagonals
        if( 
            cols.find(col) != cols.end() or
            positiveDiagonal.find(row + col) != positiveDiagonal.end() or
            negativeDiagonal.find(row - col) != negativeDiagonal.end()
        ){
            continue;
        }
        
        cols.insert(col);
        negativeDiagonal.insert(row - col);
        positiveDiagonal.insert(row + col);
        board[row][col] = 'Q';


        dfs(n, row + 1, board, result);

        cols.erase(col);
        negativeDiagonal.erase(row - col);
        positiveDiagonal.erase(row + col);
        board[row][col] = '.';


    }
}
     vector<vector<string>> solveNQueens(int n) {
     vector<vector<string>> result;
     vector<string> board(n, string(n, '.'));
     dfs(n, 0, board, result);
     return result;
        
    }
};
