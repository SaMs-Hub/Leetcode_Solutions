
const validParenthesis = (str) => {
  const stack = [];

  const helperObj = {
    "}": "{",
    "]": "[",
    ")": "(",
  };

  for (let x of str) {
    const isPresent = x in helperObj;

    if (isPresent === false) {
      stack.push(x);
      continue;
    }

    const isEqual = stack[stack.length - 1] === helperObj[x];

    if (isEqual) {
      stack.pop();
      continue;
    }

    return false;
  }

  return stack.length === 0;
};


// BF
/**
 * @param {string} s
 * @return {boolean}
 */const validParenthesis = (str) => {
  const n = str.length;
  const myStack = [];

  const obj = {
    "}": "{",
    "]": "[",
    ")": "(",
  };
  for (let i = 0; i < n; i++) {
    if (str[i] in obj) {
      if (obj[str[i]] === myStack[myStack.length - 1]) {
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
