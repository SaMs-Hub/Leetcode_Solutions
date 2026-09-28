// Create a map to store each number and its index.
// Go through the array one element at a time.
// Calculate the number needed to reach the target.
// Check if the needed number already exists in the map.
// If it exists, return the current index and the stored index.
// Otherwise, store the current number with its index.
// If no pair is found, return -1.

const arr = [2, 7, 11, 15];
const target = 9;

const twoSum = (arr, target) => {
  const myMap = new Map();
  const n = arr.length;

  for (let i = 0; i < n; i++) {
    const targetNumber = target - arr[i];
    if (myMap.has(targetNumber)) {
      return [i, myMap.get(targetNumber)];
    }

    myMap.set(arr[i], i);
  }

  return -1;
};

console.log(twoSum(arr, 9));


// App 1 Brute force O(n**2)

const arr = [2, 7, 11, 15];
const target = 9;

const twoSum = (arr, target) => {
  const n = arr.length;
  for (let i = 0; i < n; i++) {
    for (let j = i + 1; j < n; j++) {
      const sum = arr[i] + arr[j];
      if (sum === target) {
        return [i, j];
      }
    }
  }

  return -1;
};

console.log(twoSum(arr, target));




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
