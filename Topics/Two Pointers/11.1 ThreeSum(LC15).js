// App1 - Naive( will throw double chars)
const arr = [-1, 0, 1, 2, -1, -4];

const threeSum = (arr) => {
  const result = [];
  const n = arr.length;

  for (let i = 0; i < n; i++) {
    for (let j = i + 1; j < n; j++) {
      for (let k = j + 1; k < n; k++) {
        const sum = arr[i] + arr[j] + arr[k];
        if (sum === 0) {
          result.push([arr[i], arr[j], arr[k]]);
        }
      }
    }
  }

  if (result.length > 1) {
    return result;
  } else {
    return -1;
  }
};

console.log(threeSum(arr));

// App2 - Using two pointers O(n 2)
const threeSum = (arr) => {
  const n = arr.length;

  const result = [];

  arr.sort((a, b) => {
    return a - b;
  });
  for (let i = 0; i < n; i++) {
    let current = arr[i];

    if (current > 0) {
      break;
    }

    // handle duplicates
    if (i > 0 && arr[i - 1] === current) {
      continue;
    }

    let j = i + 1;
    let k = n - 1;
    while (j < k) {
      let currentSum = current + arr[j] + arr[k];

      if (currentSum > 0) {
        k -= 1;
      } else if (currentSum < 0) {
        j += 1;
      } else {
        result.push([current, arr[j], arr[k]]);
        j += 1;
        k -= 1;

        while (j < k && arr[j] === arr[j - 1]) {
          j += 1;
        }
      }
    }
  }

  return result;
};
