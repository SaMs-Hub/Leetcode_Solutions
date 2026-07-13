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



const subarraySum = (arr, target) => {
  let sum = 0;
  let count = 0;

  const myMap = new Map();

  myMap.set(0, 1);

  for (let x of arr) {
    sum += x;

    if (myMap.has(sum - target)) {
      count += myMap.get(sum - target);
    }

    if (myMap.has(sum)) {
      myMap.set(sum, myMap.get(sum) + 1);
    } else {
      myMap.set(sum, 1);
    }
  }

  return count;
};
