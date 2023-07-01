// Naive
var maxProfit = function(arr) {
  let [maxProfitValue, minValue] = [0, arr[0]];

    for (let x of arr) {
        minValue = Math.min(minValue, x);
        maxProfitValue = Math.max(maxProfitValue, x - minValue);

    }

    return maxProfitValue;
};


// Two pointers - O(n)
var maxProfit = function(arr) {
   let [left, right, maxProfitValue] = [0, 1, 0];

    while (right <= arr.length) {
        if (arr[left] < arr[right]) {
            maxProfitValue = Math.max(maxProfitValue, arr[right] - arr[left]);
        } else left = right;

        right++;
    }

    return maxProfitValue;
};

