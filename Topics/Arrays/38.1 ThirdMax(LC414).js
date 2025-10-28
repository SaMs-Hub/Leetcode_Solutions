// Using sort method - O(n log n)
const thirdLargest = (arr) => {
  arr = arr.sort((a, b) => {
    return a - b;
  });

  const filteredArray = [];
  arr.forEach((x) => {
    if (filteredArray.includes(x) === false) {
      filteredArray.push(x);
    }
  });

  if (filteredArray.length < 3) {
    return filteredArray[arr.length - 1];
  } else {
    return filteredArray[2];
  }
};

// O(n)
const thirdMax = (arr) => {
  let [first, second, third] = Array(3).fill(-Infinity);

  const filteredSet = new Set(arr);

  for (let currentNum of filteredSet) {
    if (currentNum > first) {
      [first, second, third] = [currentNum, first, second];
    } else if (currentNum > second) {
      [second, third] = [currentNum, second];
    } else if (currentNum > third) {
      third = currentNum;
    }
  }

  if (third === -Infinity) {
    return first;
  } else {
    return third;
  }
};
