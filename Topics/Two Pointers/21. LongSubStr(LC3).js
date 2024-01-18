// O(n)


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
