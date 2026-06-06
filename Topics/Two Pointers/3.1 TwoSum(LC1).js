// App 1 Brute force O(n**2)

const twoSum = (arr, target) => {
  let result = -1;
  const n = arr.length;

  for (let i = 0; i < n; i++) {
    for (let j = i + 1; j < n; j++) {
      if (arr[i] + arr[j] === target) {
        return [i, j];
      }
    }
  }

  return result;
};

const arr = [2, 5, 7, 9];

console.log(twoSum(arr, 9));



// Two pointers O(n)
// sorted 
const twoSum = (arr, target) => {
  let result = [];
  const n = arr.length;
  let left = 0;
  let right = n - 1;



  while (left < right) {
    const sum = arr[left] + arr[right];
    if (sum === target) {
      return [left, right];
    }

    if (sum < target) {
      left += 1;
    } else {
      right -= 1;
    }
  }
  return result;
};


// using hashmap - works with unsorted as well
const twoSum = (arr, target) => {
  let result = -1;
  const n = arr.length;
  const myMap = new Map();

  for (let i = 0; i < n; i++) {
    const targetNumber = target - arr[i];
    if (myMap.has(targetNumber)) {
      return [i, myMap.get(targetNumber)];
    }

    myMap.set(arr[i], i);
  }
  return result;
};

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
