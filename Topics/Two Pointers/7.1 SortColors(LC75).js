// Keep 0s on the left, 1s in the middle, and 2s on the right.
// current points to the number we haven't processed yet.
// If current is 0, swap it left and move current.
// If current is 1, leave it and move current.
// If current is 2, swap it right and move right.
// After moving a 2, keep current because the new value is unprocessed.
// Stop when current passes right.

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
