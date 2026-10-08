// Put arr1 values in a Set
// Check each arr2 value
// If it exists in Set → common value
// Delete it so we don't add it twice

const intersection = (arr1, arr2) => {
  const result = [];
  const mySet = new Set();

  for (let value of arr1) {
    if (!mySet.has(value)) {
      mySet.add(value);
    }
  }

  for (let value of arr2) {
    if (mySet.has(value)) {
      result.push(value);
      mySet.delete(value);
    }
  }

  return result;
};
