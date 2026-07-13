const subarraySum = (arr, target) => {
  const result = [];
  let longest = 0;
  const n = arr.length;
  for (let i = 0; i < n; i++) {
    let sum = 0;
    for (let j = i; j < n; j++) {
      const subArray = arr.slice(i, j + 1);
      sum += arr[j];

      if (sum === target) {
        result.push(subArray);
        if (subArray.length > longest) {
          longest = subArray.length;
        }
      }
    }
  }

  return [result, longest];
};
