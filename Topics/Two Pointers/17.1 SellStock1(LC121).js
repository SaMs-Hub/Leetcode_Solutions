// Naive
var maxProfit = function(arr) {
    let [maxDiff, minValue] = [0, arr[0]];
    for (let i = 0; i < arr.length; i++){
        minValue = Math.min(arr[i], minValue);
        maxDiff = Math.max(arr[i] - minValue, maxDiff);

    }

    return maxDiff;
};


// Two pointers
