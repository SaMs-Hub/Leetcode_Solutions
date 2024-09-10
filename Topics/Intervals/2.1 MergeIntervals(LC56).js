// App 1
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
