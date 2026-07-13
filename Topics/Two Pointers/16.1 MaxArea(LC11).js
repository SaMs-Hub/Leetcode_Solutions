// App1 TLE
const arr = [1, 8, 6, 2, 5, 4, 8, 3, 7];

const maxArea = (arr) => {
  let max = -Infinity;
  const n = arr.length;
  let result = [];

  for (let i = 0; i < n; i++) {
    for (let j = i + 1; j < n; j++) {
      const length = Math.min(arr[i], arr[j]);
      const breadth = j - i;

      const area = length * breadth;
      let subArray = arr.slice(i, j + 1);

      if (area > max) {
        max = area;
        result = [...subArray];
      }
    }
  }
  return [max, result];
};

console.log(maxArea(arr));


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
