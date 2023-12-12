// Naive
var maxProfit = function(arr) {
  let [maxProfitValue, minValue] = [0, arr[0]];

    for (let x of arr) {
        minValue = Math.min(minValue, x);
        maxProfitValue = Math.max(maxProfitValue, x - minValue);

    }

    return maxProfitValue;
};


// Two pointers - O(n) SLiding window
const maxProfit = (arr) => {
  let [maxProfit, left, right] = [0, 0, 1];

  while (right <= arr.length) {
    if (arr[left] < arr[right]) {
      maxProfit = Math.max(maxProfit, arr[right] - arr[left]);
    } else left = right;

    right += 1;
  }

  return maxProfit;
};

// using for loop
const maxProfit = (arr) => {
  let n = arr.length;

  let left = 0;
  let maxValue = 0;


  for (let right = 0; right < n; right++){
    const currentValue = arr[right] - arr[left];
    maxValue = Math.max(maxValue, currentValue );
    if (arr[left] >  arr[right]) {
        left = right;
     
    } 
  }

  return maxValue;
};


https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
