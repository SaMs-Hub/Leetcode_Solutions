const strings = ["eat", "tea", "tan", "ate", "nat", "bat"];


const str = ["eat", "tea", "tan", "ate", "nat", "bat"];

const groupAnagrams = (strings) => {
  const result = [];

  while (strings.length) {
    const first = strings.shift();
    const subResult = [first];
    const sortedWord = first.split("").sort().join("");

    for (let i = 0; i < strings.length; i++) {
      const newStr = strings[i].split("").sort().join("");

      if (newStr === sortedWord) {
        subResult.push(strings[i]);
        strings.splice(i, 1);
        i--;
      }
    }
    result.push(subResult);
  }

  return result;
};

console.log(groupAnagrams(str));


const str = ["eat", "tea", "tan", "ate", "nat", "bat"];

const groupAnagrams = (strings) => {
  const myMap = new Map();

  for (let str of strings) {
    const newStr = str.split("").sort().join("");

    if (!myMap.has(newStr)) {
      myMap.set(newStr, []);
    }

    myMap.get(newStr).push(str);
  }

  return [...myMap.values()];
};

console.log(groupAnagrams(str));

console.log(groupAnagrams(strings));
