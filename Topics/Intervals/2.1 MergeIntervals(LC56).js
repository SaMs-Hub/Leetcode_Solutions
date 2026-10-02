const merge = (arr) => {
  const result = [];

  arr.sort((a, b) => {
    return a[0] - b[0];
  });

  arr.forEach((value) => {
    const [start, end] = value;
    const last = result[result.length - 1];

    console.log(result, "res", value);
    if (!last || start > last[1]) {
      result.push(value);
    } else {
      last[1] = Math.max(last[1], end);
    }
  });

  return result;
};




https://leetcode.com/problems/merge-intervals/description/
