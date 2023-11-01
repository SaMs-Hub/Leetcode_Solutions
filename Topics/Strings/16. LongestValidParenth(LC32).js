// Using Stack
var longestValidParentheses = function(str) {
  const stack = [-1];
  let ans = 0;

  for (let i = 0; i < str.length; i++) {
    if (str[i] === "(") stack.push(i);
    else if (stack.length === 1) stack[0] = i;
    else {
      stack.pop();
      ans = Math.max(ans, i - stack[stack.length - 1]);
    }
  }

  return ans;
};


https://leetcode.com/problems/longest-valid-parentheses/description/
