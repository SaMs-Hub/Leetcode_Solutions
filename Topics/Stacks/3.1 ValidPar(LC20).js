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


// BF
/**
 * @param {string} s
 * @return {boolean}
 */
var isValid = function(str) {
 const n = str.length;
  const myStack = [];

  const obj = {
    "}": "{",
    "]": "[",
    ")": "(",
  };

  for (let i = 0; i < n; i += 1) {
    if (str[i] in obj) {
      console.log(obj[str[i]]);
      if (myStack[myStack.length - 1] === obj[str[i]]) {
        myStack.pop();
      } else {
        return false;
      }
    } else {
      myStack.push(str[i]);
    }
  }

  return myStack.length === 0;
    
};

https://leetcode.com/problems/valid-parentheses/description/
