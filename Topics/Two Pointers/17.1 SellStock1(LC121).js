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
  const n = arr.length;

  let maxProfit = 0;

  let left = 0;
  let right = 1;

  while (right < n) {
    if (arr[left] < arr[right]) {
      maxProfit = Math.max(maxProfit, arr[right] - arr[left]);
    } else {
      left = right;
    }

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

// BF

const maxProfit = (arr) => {
  const n = arr.length;

  let maxProfit = 0;

  for (let i = 0; i < n - 1; i++) {
    for (let j = i + 1; j < n; j++) {
      const current = arr[j] - arr[i];
      maxProfit = Math.max(maxProfit, current);
    }
  }

  return maxProfit;
};


https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
