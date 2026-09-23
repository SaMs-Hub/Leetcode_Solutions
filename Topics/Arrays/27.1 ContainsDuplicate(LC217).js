// sort items
// if current is equal to next after looping, return true
// return false;


const arr = [1, 2, 3, 11];

const containsDuplicate = (arr) => {
  let result = false;

  arr.sort((a, b) => {
    return a - b;
  });

  const n = arr.length;
  for (let i = 0; i < n; i++) {
    if (arr[i] === arr[i + 1]) {
      result = true;
      break;
    }
  }

  return result;
};

console.log(containsDuplicate(arr));

// Make a map to store numbers we have already seen.
// Go through every number in the array.
// If the number already exists in the map, return true.
// Otherwise, add the number to the map.
// If we finish the loop without finding a duplicate, return false.

const containsDuplicate = (arr) => {
  const myMap = new Map();
  for (let value of arr) {
    if (myMap.has(value)) {
      return true;
    }
    myMap.set(value, 1);
  }

  return false;
};



// App 1 Using sets - O(n)
var containsDuplicate = function(nums) {
    let numSet = new Set(nums);
    return numSet.size != nums.length;
    
};

// App2 Using sets with break  O(n)
var containsDuplicate = function(nums) {
    let numSet = new Set();

    for (let x of nums){
        if (numSet.has(x)) return true;
        numSet.add(x);
    }

    return false;
   

    
};


// App 3  Using two pointers  O(n)
const containsDuplicate = (arr) => {
  let n = arr.length;

  arr.sort((a, b) => a - b);

  let i = 0;
  let j = i + 1;

  while (j < n) {
    if (arr[i] === arr[j]) {
      return true;
    } else {
      i += 1;
      j += 1;
    }
  }

  return false;
};

// App 4 Using Map
var containsDuplicate = function(nums) {
   const map = new Map();

   for (let x of nums){
       if (map.has(x)) return true;
       map.set(x, true);
   }

   return false;
    
};

// App 5 Naive O(n^2)

var containsDuplicate = function(arr) {
     let n = arr.length;

    for (let i = 0; i < n; i++) {
        for (let j = i + 1; j < n; j++) {
            if (arr[i] === arr[j]) return true;
        }
    }
    return false;
};

// App 6 Naive with sort O(n * long)

const containsDuplicate = (arr) => {
  let result = false;
  const n = arr.length;

  arr.sort((a, b) => {
    return a - b;
  });

  for (let i = 0; i < n - 1; i++) {
    if (arr[i] === arr[i + 1]) {
      result = true;
      break;
    }
  }

  return result;
};

const containsDuplicate = (arr) => {
  let result = false;

  const myMap = new Map();

  for (let x of arr) {
    if (myMap.has(x)) {
      result = true;
      break;
    }

    myMap.set(x, 1);
  }

  return result;
};

https://leetcode.com/problems/contains-duplicate/description/
