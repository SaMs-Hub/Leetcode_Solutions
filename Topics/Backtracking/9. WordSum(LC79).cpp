// APp 1 DFS (O * 3 **l)

bool dfs(vector<vector<char>>& board, string word, int start, int i , int j, int m, int n){
    if (i < 0 or i >= m or j < 0 or j >= n or board[i][j] != word[start]) return false;

    if (start == word.size() - 1) return true;

    // for not going back
    board[i][j] = '#';

    if (dfs(board, word, start + 1, i + 1, j,  m, n) or
    dfs(board, word, start + 1, i - 1, j,  m, n) or
    dfs(board, word, start + 1, i, j + 1,  m, n) or
    dfs(board, word, start + 1, i, j - 1,  m, n) 
    ) return true;

    board[i][j] = word[start];
    return false;

}

 bool exist(vector<vector<char>>& board, string word) {
    int m = board.size();
    int n = board[0].size();

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (board[i][j] == word[0]){
                if (dfs(board, word, 0, i, j, m, n)) return true;

            }
        }
    }
    return false;
        
}



int main(){
    
   vector<vector<char>> arr= {
    {'A','B','C','E'},
    {'S','F','C','S'},
    {'A','D','E','E'}
   };

   cout << exist(arr, "ABCCED");
    return 0;
}
