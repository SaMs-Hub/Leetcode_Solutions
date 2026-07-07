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
