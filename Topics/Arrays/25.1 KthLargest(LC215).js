// App 1 - Inbuilt Sort
const arr = [1, 2, 4, 2, 3, 4];

const kthMax = (arr, k) => {
  arr.sort((a, b) => {
    return b - a;
  });

  return arr[k - 1];
};

console.log(kthMax(arr, 1));


// Using O(n)
const arr = [3, 1, 15, 4, 2];

const kthMax = (arr, k) => {
  const n = arr.length;
  let max = -Infinity;

  // finding max
  for (let i = 0; i < n; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }

  // storing the differences
  const differencesObj = {};
  for (let i = 0; i < n; i++) {
    const diff = max - arr[i];
    if (differencesObj[diff]) {
      differencesObj[diff] = differencesObj[diff] + 1;
    } else {
      differencesObj[diff] = 1;
    }
  }

  // getting to the number
  let count = 0;
  let diff = 0;
  while (count < k) {
    if (differencesObj[diff]) {
      count += differencesObj[diff];
    } else {
      count += 0;
    }
    diff++;
  }

  return max - diff + 1;
};

console.log(kthMax(arr, 2));

