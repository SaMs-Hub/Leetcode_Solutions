/**
 * @param {string} s
 * @return {boolean}
 */
const isValid = (str) => {
     const stack = [];
  const myMap = {
    ")": "(",
    "}": "{",
    "]": "[",
  };

  for (let x of str) {
    const isPresent = x in myMap;

    if (!isPresent) {
      stack.push(x);
      continue;
    }

    const isEqual = stack[stack.length - 1] === myMap[x];

    if (isEqual) {
      stack.pop();
      continue;
    }

    return false;
  }

  return stack.length === 0;
}

https://leetcode.com/problems/valid-parentheses/description/
