// O(n)

const lengthOfLongestSubstring = (str) => {
  let n = str.length;

  const set = new Set();
  let [left, right, max] = [0, 0, 0];

  while (right < n) {
    while (set.has(str[right])) {
      set.delete(str[left]);
      left += 1;
    }
    set.add(str[right]);
    max = Math.max(max, set.size);
    right += 1;
  }

  return max;
};

// https://leetcode.com/problems/longest-substring-without-repeating-characters/
