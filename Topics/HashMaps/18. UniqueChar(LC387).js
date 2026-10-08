const str = "leetcode";

const firstUniqChar = (str) => {
  const myMap = new Map();

  for (let x of str) {
    if (myMap.has(x)) {
      myMap.set(x, myMap.get(x) + 1);
    } else {
      myMap.set(x, 1);
    }
  }

  for (let [key, value] of myMap) {
    if (value === 1) {
      return str.split("").indexOf(key);
    }
  }

  return -1;
};

console.log(firstUniqChar(str));
