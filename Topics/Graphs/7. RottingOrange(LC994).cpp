// App 1 BFS O(m*n)

vector<vector<int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
 int orangesRotting(vector<vector<int>>& grid) {
    int m = grid.size();
    int n = grid[0].size();

    queue<pair<int, int>> q;
    int result = -1;
    int fresh = 0;

   
    for (int i = 0; i < m; i++){
        for(int j = 0; j < n;j++){
            if(grid[i][j] == 2) q.push({i, j});
            else if(grid[i][j] == 1) fresh++;
        }
    }
     
      q.push({-1, -1});

    while (!q.empty()){
        int row = q.front().first;
        int column = q.front().second;

        q.pop();

        if (row == -1){
            result++;
            if (!q.empty()) q.push({-1, -1});
        }else{
            for (int i = 0; i < dirs.size(); i++){
                int x = row + dirs[i][0];
                int y = column + dirs[i][1];

                if (x < 0 or y < 0 or x >= m or y >= n) continue;

                if (grid[x][y] == 1){
                    grid[x][y] = 2;
                      fresh--;
                    q.push({x, y});
                  
                }
            }
        }

    }

    if (fresh == 0) return result;
    return -1;

        
    }
