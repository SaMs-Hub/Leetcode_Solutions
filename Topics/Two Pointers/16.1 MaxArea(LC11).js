// App1 TLE
const getMaxArea = (arr) => {
    //let allAreas = [];
    let maxArea = [];
    let size = arr.length;

    for (let i = 0; i < size; i++) {
        for (let j = i + 1; j < size; j++) {
            let area = (j - i) * Math.min(arr[i], arr[j]);
            // allAreas.push(area);
            maxArea = Math.max(maxArea, area);
        }
    }

    //return [maxArea, allAreas];
    return maxArea;

}


// App2 Two 
var maxArea = function(arr) {
     let n = arr.length;

  let [left, right] = [0, n - 1];
  let [currentArea, maxArea] = [0, 0];

  while (left < right) {
    currentArea = (right - left) * Math.min(arr[right], arr[left]);
    maxArea = Math.max(maxArea, currentArea);

    if (arr[left] <= arr[right]) {
      left += 1;
    } else {
      right -= 1;
    }
  }

  return maxArea;
   
};

// https://leetcode.com/problems/container-with-most-water/
