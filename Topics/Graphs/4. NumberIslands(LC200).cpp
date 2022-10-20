// APp 1 - DFS O(m * n)

void dfs(vector<vector<string>> &grid, int i, int j, int m, int n){
    if (i < 0 or j < 0 or i >= m or j >= n or grid[i][j] == "0") return;
    grid[i][j] = "0";

    dfs(grid, i - 1, j, m, n);
    dfs(grid, i + 1, j, m, n);
    dfs(grid, i, j - 1, m, n);
    dfs(grid, i, j + 1, m, n);
}

int numIslands(vector<vector<string>> &grid)
{
    int result = 0;
    int m = grid.size();
    int n = grid[0].size();

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if (grid[i][j] == "1"){
                dfs(grid, i, j, m, n);
                result++;
            }
        }
    }
    return result;
}

int main()
{

    vector<vector<string>> arr = {
        {"1", "1", "1", "1", "0"},
        {"1", "1", "0", "1", "0"},
        {"1", "1", "0", "0", "0"},
        {"0", "0", "1", "0", "1"}
    };

    cout << numIslands(arr);


    return 0;
}
