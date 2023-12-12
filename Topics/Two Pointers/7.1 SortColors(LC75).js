// App1 - O(n)
// logic used: try put elements in [low, medium, high] format

const swapChar = (arr, a, b) => {
  [arr[a], arr[b]] = [arr[b], arr[a]];
};

const sortColors = (arr) => {
  let n = arr.length;

  let [low, medium, high] = [0, 0, n - 1];

  while (medium <= high) {
    if (arr[medium] === 0) {
      swapChar(arr, medium, low);
      low += 1;
      medium += 1;
    } else if (arr[medium] === 1) {
      medium += 1;
    } else {
      swapChar(arr, medium, high);
      high -= 1;
    }
  }

  return arr;
};

// https://leetcode.com/problems/sort-colors/
