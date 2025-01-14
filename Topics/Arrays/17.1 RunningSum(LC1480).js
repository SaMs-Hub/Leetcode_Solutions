// App 1  O(n)
var runningSum = function(nums) {
    let result = [];
    result.push(nums[0]); 
    for (let i = 1; i < nums.length; i++){
        result[i] = result[i - 1] + nums[i];
    }

    return result;
    
};

// App 2 Using same array
var runningSum = function(arr) {
    for (let i = 1; i < arr.length; ++i) {
    arr[i] += arr[i - 1];
  }
  return arr;
};


https://leetcode.com/problems/running-sum-of-1d-array/description/
