// App1 - O(n)
// logic used: try put elements in [low, medium, high] format

const sortColors = (arr) => {
  let left = 0;
  let current = 0;
  let right = arr.length - 1;

  while (current <= right) {
    if (arr[current] === 0) {
      [arr[current], arr[left]] = [arr[left], arr[current]];

      current += 1;
      left += 1;
    } else if (arr[current] === 1) {
      current += 1;
    } else if (arr[current] === 2) {
      [arr[current], arr[right]] = [arr[right], arr[current]];
      right -= 1;
    }
  }

  return arr;
};
// https://leetcode.com/problems/sort-colors/
