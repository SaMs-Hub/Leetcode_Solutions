// App 1 
const reverse = (number) => {
  let result = 0;
  let min = -1 * Math.pow(2, 31);
  let max = Math.pow(2, 31) - 1;

  while (number != 0) {
    let remainder = number % 10;


    number = parseInt(number / 10);
    result = result * 10 + remainder;


  }

  if (result < max && result > min) return result;
  return 0;
};

https://leetcode.com/problems/reverse-integer/description/
