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
const arr = [1, 8, 6, 2, 5, 4, 8, 3, 7];

const maxArea = (arr) => {
  let max = -Infinity;
  let result = [];
  const n = arr.length;

  let left = 0;
  let right = n - 1;

  while (left < right) {
    const width = right - left;
    const height = Math.min(arr[left], arr[right]);

    const area = width * height;

    if (area > max) {
      max = area;
      result = arr.slice(left, right + 1);
    }

    if (arr[left] < arr[right]) {
      left += 1;
    } else {
      right -= 1;
    }
  }

  return [max, result];
};

console.log(maxArea(arr));

// https://leetcode.com/problems/container-with-most-water/
