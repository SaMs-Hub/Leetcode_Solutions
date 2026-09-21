var merge  = (arr) => {
  arr.sort((a, b) => {
    return a[0] - b[0];
  });

  const result = [];
  arr.forEach((x) => {
    const [start, end] = x;
    const last = result[result.length - 1];

    if (!last || start > last[1]) {
      result.push([start, end]);
    } else {
      last[1] = Math.max(last[1], end);
    }
  });

  return result;
};





https://leetcode.com/problems/merge-intervals/description/
