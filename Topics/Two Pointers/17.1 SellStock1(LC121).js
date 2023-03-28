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
