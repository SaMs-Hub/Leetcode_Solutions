// App 1 Brute force O(n**2)
const twoSum = (arr, target) => {
  let n = arr.length;

  for (let i = 0; i < n - 1; i++) {
    for (let j = 1; j < n; j++) {
      const currentSum = arr[i] + arr[j];
      if (currentSum === target && i !== j) {
        return [i, j];
      }
    }
  }

  return -1;
};


// Two pointers O(n)
// using hashmap - works with unsorted as well
const twoSum = (arr, target) => {
   const n = arr.length;
   const myMap = new Map();

  for (let i = 0; i < n; i++) {
    const currentNumber = arr[i];
    const targetNumber = target - currentNumber;

    if (myMap.has(targetNumber)) {
      return [i, myMap.get(targetNumber)];
    } else {
      myMap.set(arr[i], i);
    }
  }

  return -1;
}

// TWo p using objects
const twoSum = (arr, target) => {
  let n = arr.length;
  const resultObj = {};

  for (let i = 0; i < n; i++) {
    const targetNumber = target - arr[i];
    if (targetNumber in resultObj) {
      return [i, resultObj[targetNumber]];
    } else {
      resultObj[arr[i]] = i;
    }
  }

  return -1;
};


// https://leetcode.com/problems/two-sum/description/
