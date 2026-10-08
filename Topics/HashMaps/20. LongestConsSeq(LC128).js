// Put numbers in Set
// Find a number with no previous number → sequence start
// Move forward while next number exists
// Count the sequence
// Keep the largest count


const longestConsecutive = (arr) => {
  const mySet = new Set();

  for (let num of arr) {
    mySet.add(num);
  }

  let longest = 0;
  for (let num of mySet) {
    if (!mySet.has(num - 1)) {
      let currentNumber = num;
      let currentCount = 1;

      while (mySet.has(currentNumber + 1)) {
        currentNumber += 1;
        currentCount += 1;
      }

      longest = Math.max(longest, currentCount);
    }
  }

  return longest;
};
