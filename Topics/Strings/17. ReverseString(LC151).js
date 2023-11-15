// App 1 - Trim
const reverseWords = (str) => {
  let n = str.length;
  let i = 0;
  let j = n - 1;

  while (i <= j && str[i] === " ") i += 1;
  while (j >= i && str[j] === " ") j -= 1;

  str = str.substring(i, j + 1);
  const words = str.split(/\s+/);
  let result = "";

  for (let k = words.length - 1; k > 0; k--) {
    result += words[k] + " ";
  }

  result += words[0];
  return result;
};


https://leetcode.com/problems/reverse-words-in-a-string/description/
