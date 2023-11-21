// App 1
const merge = (intervals) => {
  const result = [];
  let currentCount = 0;
  let totalIntervals = intervals.length;
  // sorting based on 1st value
  intervals.sort((a, b) => a[0] - b[0]);

  while (currentCount < totalIntervals - 1) {
    if (intervals[currentCount][1] >= intervals[currentCount + 1][0]) {
      intervals[currentCount + 1][0] = intervals[currentCount][0];
      intervals[currentCount + 1][1] = Math.max(
        intervals[currentCount + 1][1],
        intervals[currentCount][1]
      );
    } else result.push(intervals[currentCount]);

    currentCount += 1;
  }
  result.push(intervals[currentCount]);

  return result;
};


https://leetcode.com/problems/merge-intervals/description/
