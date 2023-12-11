// App 1 - Two pointers
var findMaxConsecutiveOnes = function(arr) {
      let [currentCount, maxCount] = [0, 0];
    
    for (let i = 0; i < arr.length; i++){
        if (arr[i] === 1) currentCount += 1;
        else {
            currentCount = 0;
        }
           maxCount = Math.max(currentCount, maxCount);
    }
    
    
     return maxCount;
};

https://leetcode.com/problems/max-consecutive-ones/
