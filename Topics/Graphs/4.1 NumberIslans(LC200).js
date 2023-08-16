// DFS 
const dfs = (grid, i, j, m, n) => {
    if (i < 0 || j < 0 || i >= m || j >= n || grid[i][j] === "0") return;
    
    grid[i][j] = "0";
    
    dfs(grid, i - 1, j, m, n);
    dfs(grid, i + 1, j, m, n);
    dfs(grid, i, j - 1, m, n);
    dfs(grid, i, j + 1, m, n);
}

const numIslands = (grid) => {
    let [m, n] = [grid.length, grid[0].length];
    let result = 0;
    
    for (let i = 0; i < m; i++){
        for (let j = 0; j < n; j++){
            if (grid[i][j] === "1"){
                dfs(grid, i, j, m, n);
                result++;
            }
        }
    }
    
    return result;
     
}
