// App 1 Brute force O(n**2)
const twoSum = (arr, target) => {
  const n = arr.length;

  for (let i = 0; i < n - 1; i++) {
    for (let j = i + 1; j < n; j++) {
      if (arr[i] + arr[j] === target) {
        return [i, j];
      }
    }
  }

  return -1;
};

const arr = [2, 5, 7, 9];

console.log(twoSum(arr, 9));



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

// TWo pointers using objects
const twoSum = (arr, target) => {
  const n = arr.length;
  const numsObject = {};

  for (let i = 0; i < n; i++) {
    const currentNumber = arr[i];
    const targetNumber = target - currentNumber;

    if (targetNumber in numsObject) {
      return [i, numsObject[targetNumber]];
    } else {
      numsObject[currentNumber] = i;
    }
  }

  return -1;
};

// https://leetcode.com/problems/two-sum/description/
