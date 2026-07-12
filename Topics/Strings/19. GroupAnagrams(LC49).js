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


const groupAnagrams = (string) => {
  const map = new Map();

  for (let current of strings) {
    const key = current.split("").sort().join("");
    if (map.has(key) === false) {
      map.set(key, []);
    }
    map.get(key).push(current);
  }

  return Array.from(map.values());
};

console.log(groupAnagrams(strings));
