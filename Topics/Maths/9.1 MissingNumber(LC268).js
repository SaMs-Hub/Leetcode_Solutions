// Start with result = 0.
// XOR every number present in the array.
// Create indexes from 0 to n.
// XOR every expected number with result.
// Duplicate numbers cancel each other.
// The missing number is left in result.

const missingNumber = (arr) => {
  let result = 0;

  arr.forEach((value) => {
    result = result ^ value;
    console.log(result);
  });

  Array.from({ length: arr.length + 1 }).forEach((_, index) => {
    result = result ^ index;
  });

  return result;
};

console.log(missingNumber([3, 0, 1]));
