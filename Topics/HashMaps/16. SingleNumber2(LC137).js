// Using O(n)
const singleNumber = function(arr) {
      const occurences = {};

  for (let currentNum of arr) {
    if (occurences[currentNum]) {
      occurences[currentNum] = occurences[currentNum] + 1;
    } else {
      occurences[currentNum] = 1;
    }
  }


  let result;

  for (let key in occurences) {

    if (occurences[key] === 1) {
      result = key;
      break;
    }
  }

  return result;
};
