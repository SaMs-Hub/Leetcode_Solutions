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

// BF 

var maxSubArray = function(arr) {
    let n = arr.length;

    let maxSum = -Infinity;

    for (let i = 0; i < n; i++) {
        for (let j = 0; j < n; j++) {
            let currentSum = 0;
            for (let k = i; k <= j; k++) {
                currentSum += arr[k];


            }

            maxSum = Math.max(currentSum, maxSum);
        }
    }
    return maxSum;
};


// Kadanes Algo
var maxSubArray = function(arr) {
    let n = arr.length;
    let [currentSum, maxSum] = [0, -Infinity];

    for (let i = 0; i < n; i++) {
        if (arr[i] <= currentSum + arr[i]) currentSum += arr[i];
        else currentSum = arr[i];

        if (maxSum < currentSum) maxSum = currentSum;
    }

    return maxSum;
};
