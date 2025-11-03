// Using sort - O(n log n)
const arr = [1, 2, 4, 2, 3, 4];

const secondLargest = (arr) => {
  arr = arr.sort((a, b) => {
    return b - a;
  });

  const filteredArray = [...new Set(arr)];
  const n = filteredArray.length;

  if (n < 2) {
    return filteredArray[0];
  } else {
    return filteredArray[1];
  }
};

console.log(secondMax(arr));


// O(n)
const secondLargest = (arr) => {
  let [first, second] = Array(2).fill(-Infinity);

  const filteredArray = [...new Set(arr)];

  filteredArray.forEach((x) => {
    if (x > first) {
      [first, second] = [x, first];
    } else if (x > second) {
      [first, second] = [first, x];
    }
  });

  if (second === -Infinity) {
    return first;
  } else {
    return second;
  }
};


