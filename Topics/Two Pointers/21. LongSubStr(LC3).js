// O(n)


const longestSubString = (str) => {
  let maxLength = -Infinity;
  let string = "";
  const n = str.length;

  for (let i = 0; i < n; i++) {
    for (let j = 0; j < n; j++) {
      const current = str.slice(i, j + 1);
      console.log(current);

      const mySet = new Set(current);

      if (current.length === mySet.size) {
        if (current.length > maxLength) {
          maxLength = current.length;
          string = current;
        }
      }
    }
  }

  return [maxLength, string];
};


var lengthOfLongestSubstring = function (str) {
  let maxLength = 0;
  const n = str.length;
  const result = [];
  for (let i = 0; i < n; i++) {
    const set = new Set();

    for (let j = i; j < n; j++) {
      if (set.has(str[j])) {
        result.push(set);
        break;
      }

      set.add(str[j]);

      maxLength = Math.max(maxLength, j - i + 1);
    }
  }

  console.log(result);
  return maxLength;
};


var lengthOfLongestSubstring = function (str) {
  let maxLength = 0;
  const set = new Set();

  let left = 0;

  for (let right = 0; right < str.length; right += 1) {
    while (set.has(str[right])) {
      set.delete(str[left]);
      left += 1;
      
    }
    set.add(str[right]);

    maxLength = Math.max(maxLength, right - left + 1);
  }

  return maxLength;
};
// https://leetcode.com/problems/longest-substring-without-repeating-characters/
