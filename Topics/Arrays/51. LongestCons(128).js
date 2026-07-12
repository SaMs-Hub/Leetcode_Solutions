const longestConsecutive = (arr) => {
  let longest = 0;

  for (let x of arr) {
    let current = x;
    let length = 1;

    while (arr.includes(current + 1)) {
      length += 1;
      current += 1;
    }

    longest = Math.max(longest, length);
  }

  return longest;
};


const arr = [100, 4, 200, 1, 3, 2];

const longestConsecutive = (arr) => {
  let longest = 0;
  const mySet = new Set(arr);

  for (let x of mySet) {
    if (!mySet.has(x - 1)) {
      let current = x;
      let length = 1;

      while (mySet.has(current + 1)) {
        current += 1;
        length += 1;
      }

      longest = Math.max(longest, length);
    }
  }

  return longest;
};

console.log(longestConsecutive(arr));
