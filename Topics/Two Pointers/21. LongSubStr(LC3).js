// O(n)


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


var lengthOfLongestSubstring = function(str) {
     const length = str.length;
        const set = new Set();

        let left = 0;
        let right = 0;
        let max = 0;

        while (right < length){
            // delete all instances if presetn
            while (set.has(str[right])){
                set.delete(str[left]);
                left += 1;
            }

            // Adding char to set & check max size
            set.add(str[right]);
            max = Math.max(max, set.size);
            right += 1;

        }

        return max;
    
};
// https://leetcode.com/problems/longest-substring-without-repeating-characters/
