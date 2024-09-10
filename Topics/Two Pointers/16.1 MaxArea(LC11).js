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


// App2 Two Pointers O(n ** 2)
const maxArea = (arr) => {
  const n = arr.length;
  let maxArea = -Infinity;
  let currentArea = -Infinity;

  let i = 0;
  let j = n - 1;

  while (i < j) {
    currentArea = (j - i) * Math.min(arr[i], arr[j]);
    maxArea = Math.max(maxArea, currentArea);

    if (arr[i] <= arr[j]) {
      i += 1;
    } else {
      j -= 1;
    }
  }

  return maxArea;
};

// https://leetcode.com/problems/container-with-most-water/
