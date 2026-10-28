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
  const mySet = new Set();

  for (let i = 0; i < arr.length; i++) {
    if (mySet.has(arr[i])) {
      return true;
    }
    mySet.add(arr[i]);
  }

  return false;
};



https://leetcode.com/problems/contains-duplicate/description/
