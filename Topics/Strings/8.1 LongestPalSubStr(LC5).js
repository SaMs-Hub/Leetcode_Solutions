
const longestPalindrome = (str) => {
  let start = 0;
  let maxLength = 0;

  let n = str.length;

  if (n < 2){
      return str;
  }

  let low;
  let high;

  for (let i = 0; i < n; i += 0.5){
      low = Math.floor(i);
      high = Math.ceil(i);

      while (low >= 0 && high < n && str[low] === str[high]){
          low -= 1;
          high += 1;
      }

      let length = high - low - 1;

      if (length > maxLength){
          maxLength = length;
          start = low + 1;
      }
  }

  return str.substring(start, start + maxLength);

}

// https://leetcode.com/problems/longest-palindromic-substring/
