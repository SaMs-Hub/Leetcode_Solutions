// O(n)


const lengthOfLongestSubstring = (str) => {
  let longest = 0;
  let longestString = "";
  const n = str.length;

  for (let i = 0; i < n; i++) {
    const mySet = new Set();

    for (let j = i; j < n; j++) {
      if (mySet.has(str[j])) {
        break;
      }

      mySet.add(str[j]);
      if (mySet.size > longest) {
        longest = mySet.size;
        longestString = [...mySet].join("");
      }
    }
  }

  return [longestString, longest];
};

const longestSubString = (str) => {
  const n = str.length;
  const mySet = new Set();
  let maxLength = -Infinity;
  let string = "";

  let left = 0;
  for (let right = 0; right < n; right++) {
    while (mySet.has(str[right])) {
      mySet.delete(str[left]);
      left += 1;
    }

    mySet.add(str[right]);

    if (right - left + 1 > maxLength) {
      maxLength = right - left + 1;
      string = str.slice(left, right + 1);
    }
  }

  return [maxLength, string];
};

const lengthOfLongestSubstring = (str) => {
  let longest = 0;
  let longestString = "";
  let left = 0;
  const mySet = new Set();
  const n = str.length;

  for (let right = 0; right < n; right++) {
    while (mySet.has(str[right])) {
      mySet.delete(str[left]);
      left += 1;
    }

    mySet.add(str[right]);

    if (right - left + 1 > longest) {
      longest = right - left + 1;
      longestString = str.slice(left, right + 1);
    }
  }

  return [longest, longestString];
};
// https://leetcode.com/problems/longest-substring-without-repeating-characters/
