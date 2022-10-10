// App 1 Hashsets O(n)

  bool isValidSudoku(vector<vector<char>>& board) {
    vector<set<int>> row(9), col(9), box(9);

    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            if (board[i][j] != '.'){
                int num = board[i][j] - '0';

                if (row[i].count(num) or col[j].count(num) or box[(i/3)* 3 + (j/3)].count(num)) return false;
                row[i].insert(num);
                col[j].insert(num);
                box[(i/3)* 3 + (j/3)].insert(num);
            }
        }
    }
    return true;
        
    }
