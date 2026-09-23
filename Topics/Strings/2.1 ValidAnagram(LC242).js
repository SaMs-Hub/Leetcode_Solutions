// First, make sure both strings have the same length.
// Make a map to store the frequency of each character.
// Count every character in the first string.
// Go through the second string and reduce each character's count.
// If a character is missing, return false.
// Delete a character when its count reaches zero.
// If the map is empty at the end, both strings are anagrams.


const isAnagram = (str, t) => {
  if (str.length !== t.length) {
    return false;
  }

  const myMap = new Map();

  str.split("").forEach((x) => {
    if (myMap.has(x)) {
      myMap.set(x, myMap.get(x) + 1);
    } else {
      myMap.set(x, 1);
    }
  });

  t.split("").forEach((x) => {
    if (!myMap.has(x)) {
      return false;
    } else {
      myMap.set(x, myMap.get(x) - 1);

      if (myMap.get(x) === 0) {
        myMap.delete(x);
      }
    }
  });

  return myMap.size === 0;
};
