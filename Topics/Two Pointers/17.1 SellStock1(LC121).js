// Naive
var maxProfit = function(arr) {
  let [maxProfitValue, minValue] = [0, arr[0]];

    for (let x of arr) {
        minValue = Math.min(minValue, x);
        maxProfitValue = Math.max(maxProfitValue, x - minValue);

    }

    return maxProfitValue;
};


// Two pointers
var maxProfit = function(arr) {
   let [i, j, maxProfit] = [0, 1, 0];

   while (j <= arr.length){
       if (arr[i] < arr[j]){
           maxProfit = Math.max(maxProfit, arr[j] - arr[i]);
       }else i = j;

       j++;
   }

   return maxProfit;
};
