// DFS O(n * m)

const dfs = (arr, i, j, m, n) => {
    if (i < 0 || i >= m || j < 0 || j >= n || arr[i][j] === 0) return 0;
    
    arr[i][j] = 0;
    
    return 1 + dfs(arr, i - 1, j, m, n) + dfs(arr, i + 1, j, m, n) + dfs(arr, i, j - 1, m, n) + dfs(arr, i, j + 1, m, n)
}

const maxAreaOfIsland = (arr) => {
    let [m, n] = [arr.length, arr[0].length];
    
    let result = 0;
    
    for (let i = 0; i < m; i++){
        for (j =0; j < n; j++){
            if (arr[i][j] === 1){
                result = Math.max(result, dfs(arr, i, j, m, n));
            }
        }
    }
    
    return result;
}
