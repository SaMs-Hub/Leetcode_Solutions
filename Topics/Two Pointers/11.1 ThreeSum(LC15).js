// App1 - Naive( will throw double chars)
const arr = [-1, 0, 1, 2, -1, -4];

const threeSum = (arr) => {
  const result = [];
  const n = arr.length;
  const mySet = new Set();

  for (let i = 0; i < n - 2; i++) {
    for (let j = i + 1; j < n - 1; j++) {
      for (let k = j + 1; k < n; k++) {
        const sum = arr[i] + arr[j] + arr[k];
        if (sum === 0) {
          const triplet = [arr[i], arr[j], arr[k]].sort((a, b) => {
            return a - b;
          });

          const key = triplet.join("");

          if (!mySet.has(key)) {
            mySet.add(key);
            result.push(triplet);
          }
        }
      }
    }
  }

  return result;
};

// App2 - Using two pointers O(n 2)

const threeSum = (arr) => {
  arr.sort((a, b) => {
    return a - b;
  });
  const n = arr.length;
  const result = [];

  for (let i = 0; i < n - 2; i++) {
    if (i > 0 && arr[i] === arr[i - 1]) {
      continue;
    }
    const first = arr[i];

    let left = i + 1;
    let right = n - 1;

    while (left < right) {
      const sum = first + arr[left] + arr[right];

      if (sum === 0) {
        result.push([first, arr[left], arr[right]]);
        left += 1;
        right -= 1;

        while (left < right && arr[left] === arr[left - 1]) {
          left++;
        }

        while (left < right && arr[right] === arr[right + 1]) {
          right--;
        }
      } else if (sum < 0) {
        left += 1;
      } else {
        right -= 1;
      }
    }
  }

  return result;
};
