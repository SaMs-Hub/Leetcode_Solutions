// App 1 Brute force O(n**2)

 const twoSum = (arr, target) => {
  const n = arr.length;

  for (let i = 0; i < n; i++) {
    for (let j = i + 1; j < n; j++) {
      let currentSum = arr[i] + arr[j];

      if (currentSum === target) {
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
 const twoSum = (arr, target) => { const n = arr.length;

  const mySet = {};

  for (let i = 0; i < n; i++) {
    let targetNumber = target - arr[i];

    if (targetNumber in mySet) {
      return [i, mySet[targetNumber]];
    } else {
      mySet[arr[i]] = i;
    }
  }

  return -1;
};

// https://leetcode.com/problems/two-sum/description/
