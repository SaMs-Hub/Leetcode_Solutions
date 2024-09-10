// Greedy - O(n)
var maxSubArray = function(arr) {

   let n = arr.length;

    if (n == 1) return arr[0];

    let [currentSum, maxSum] = [arr[0], arr[0]];

    for (let i = 1; i < n; i++) {
        currentSum = Math.max(arr[i], arr[i] + currentSum);
        maxSum = Math.max(maxSum, currentSum);
    }



    return maxSum;
};
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
https://leetcode.com/problems/maximum-subarray/submissions/1385176932/

https://leetcode.com/problems/maximum-subarray/submissions/1117534362/
