// Using sort - O(n log n)
const arr = [1, 2, 4, 2, 3, 4];

const secondMax = (arr) => {
  arr.sort((a, b) => {
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

const secondMax = (arr) => {
  let [first, second] = Array(2).fill(-Infinity);

  const filteredArray = [...new Set(arr)];

  for (let currentNum of filteredArray) {
    if (currentNum > first) {
      [first, second] = [currentNum, first];
    } else if (currentNum > second) {
      second = currentNum;
    }
  }

  if (second === -Infinity) {
    return first;
  } else {
    return second;
  }
};

