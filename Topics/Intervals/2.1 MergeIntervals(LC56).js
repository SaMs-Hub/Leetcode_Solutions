// App 1
const merge = (arr) => {
  let changed = true;

  while (changed) {
    changed = false;

    for (let i = 0; i < arr.length; i++) {
      for (let j = i + 1; j < arr.length; j++) {
        const first = arr[i];
        const second = arr[j];

        if (first[0] <= second[1] && second[0] <= first[1]) {
          first[0] = Math.min(first[0], second[0]);
          first[1] = Math.max(first[1], second[1]);

          arr.splice(j, 1);

          changed = true;
          break;
        }
      }
      if (changed) {
        break;
      }
    }
  }

  return arr;
};


const mergeIntervals = (arr) => {
  const n = arr.length;
  let currentCount = 0;
  const result = [];

  arr.sort((a, b) => {
    return a[0] - b[0];
  });

  while (currentCount < n - 1) {
    if (arr[currentCount][1] >= arr[currentCount + 1][0]) {
      arr[currentCount + 1][0] = arr[currentCount][0];
      arr[currentCount + 1][1] = Math.max(
        arr[currentCount][1],
        arr[currentCount + 1][1]
      );
    } else {
      result.push(arr[currentCount]);
    }

    currentCount += 1;
  }

  result.push(arr[currentCount]);

  return result;
};



https://leetcode.com/problems/merge-intervals/description/
