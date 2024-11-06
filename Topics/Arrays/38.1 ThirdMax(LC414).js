// Using sort method - O(n log n)
const thirdMax = (arr) => {
  let n = arr.length;
  arr.sort((a, b) => {
    return b - a;
  });

  const filteredArray = [];
  for (let i = 0; i < n; i++) {
    if (filteredArray.includes(arr[i]) === false) {
      filteredArray.push(arr[i]);
    }
  }

  const m = filteredArray.length;
  if (m < 3) {
    return filteredArray[0];
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
