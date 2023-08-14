// Greedy - O(n)
const maxSubArray = (arr) => {
    let n = arr.length;
    
    if (n == 1) return arr[0];
    
    let [currentSum, maxSum] = [arr[0], arr[0]];
    
    for (let i = 1; i < n; i++){
        currentSum = Math.max(currentSum, arr[i] + currentSum);
        maxSum = Math.max(maxSum, currentSum);
    }
    
    return maxSum;
    
}
