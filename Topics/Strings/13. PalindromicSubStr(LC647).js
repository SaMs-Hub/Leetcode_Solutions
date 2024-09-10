// BF 
const isPalindrome = (str, left, right) => {
  while (left < right) {
    if (str[left] !== str[right]) {
      return false;
    }
    right -= 1;
    left += 1;
  }

  return true;
};

const countSubstrings = (str) => {
  const n = str.length;

  let currentCount = 0;x
  for (let i = 0; i < n; i++) {
    for (let j = i; j < n; j++) {
      if (isPalindrome(str, i, j)) {
        currentCount += 1;
      }
    }
  }

  return currentCount;
};



 */const isPalindrome = (str, left, right = str.length, result) => {
  while (left >= 0 && right <= str.length - 1 && str[left] === str[right]) {
    result.push(str.slice(left, right + 1));
    right += 1;
    left -= 1;
  }
};

const countSubstrings = (str) => {
  const n = str.length;

  let result = [];

  for (let i = 0; i < n; i++) {
    isPalindrome(str, i, i, result);
    isPalindrome(str, i, i + 1, result);
  }
;
  return result.length;
};
console.log(getPalindromes("aaa"));
