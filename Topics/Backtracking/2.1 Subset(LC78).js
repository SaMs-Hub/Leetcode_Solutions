// App 1 DFS

const subsets = (arr) => {
    let result = [];
    let currentArray = [];
   
     const dfs = (start) => {
        result.push([...currentArray]);
        
        for (let i = start; i < arr.length; i++){
            currentArray.push(arr[i]);
            dfs( i + 1);
            currentArray.pop();
        }
        return;
      }
    dfs(0)
    return result;
}
