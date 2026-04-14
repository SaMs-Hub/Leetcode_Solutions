// App 1 Convert Into array and Srot TC - O(n * log n)
const isAnagram = (a, b) => {
  if (a.length !== b.length) {
    return false;
  }

  const sortedA = a.split("").sort().join("");
  const sortedB = b.split("").sort().join("");

  return sortedA === sortedB;
};

// App 2 Using maps O(n)const isAnagram = (a, b) => {
  if (a.length !== b.length) {
    return false;
  }

  const myMap = new Map();

  for (let x of a) {
    if (myMap.has(x)) {
      myMap.set(x, myMap.get(x) + 1);
    } else {
      myMap.set(x, 1);
    }
  }

  for (let x of b) {
    if (myMap.has(x) === false) {
      return false;
    } else {
      myMap.set(x, myMap.get(x) - 1);
    }

    if (myMap.get(x) === 0) {
      myMap.delete(x);
    }
  }
  return myMap.size === 0;
};
https://leetcode.com/problems/valid-anagram/description/
