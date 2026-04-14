const strings = ["eat", "tea", "tan", "ate", "nat", "bat"];

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
