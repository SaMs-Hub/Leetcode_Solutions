const strings = ["eat", "tea", "tan", "ate", "nat", "bat"];


const str = ["eat", "tea", "tan", "ate", "nat", "bat"];
const groupAnagrams = (str) => {
  const myMap = new Map();

  str.forEach((value) => {
    const key = value.split("").sort().join("");
    if (!myMap.has(key)) {
      myMap.set(key, []);
    }
    console.log(value);

    myMap.get(key).push(value);
  });

  return [...myMap.values()];
};

// https://leetcode.com/problems/group-anagrams/description/
