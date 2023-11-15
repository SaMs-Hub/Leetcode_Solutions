// App 1 Convert Into array and Srot TC - O(n * log n)
var isAnagram = function(s, t) {
    return s.split("").sort().join("") === t.split("").sort().join("");
};


// App 2 Using maps O(n)
const isAnagram = (s, t) => {
  // base case
  if (s.length !== t.length) return false;

  // creating a map to store values( can also use object);
  const myMap = new Map();

  // inserting everything of s into map;
  for (let x of s) {
    if (myMap.has(x)) myMap.set(x, myMap.get(x) + 1);
    else myMap.set(x, 1);
  }

  // using other word to deal with existing words
  for (let x of t) {
    if (!myMap.has(x)) return false;
    else myMap.set(x, myMap.get(x) - 1);
    if (myMap.get(x) === 0) myMap.delete(x);
  }

  return myMap.size === 0;
};


https://leetcode.com/problems/valid-anagram/description/
