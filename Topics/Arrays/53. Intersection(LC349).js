// create map
// create result
// add items of first to map
// checking for items in next
// if present add to result

const nums1 = [4, 9, 5];
const nums2 = [9, 4, 9, 8, 4];

var intersection = function (nums1, nums2) {
  const myMap = new Map();
  const result = [];

  for (let x of nums1) {
    if (myMap.has(x)) {
      myMap.set(x, myMap.get(x) + 1);
    } else {
      myMap.set(x, 1);
    }
  }

  for (let x of nums2) {
    if (myMap.has(x)) {
      result.push(x);
      myMap.delete(x);
    }
  }

  return result;
};

console.log(intersection(nums1, nums2));
