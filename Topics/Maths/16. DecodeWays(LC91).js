// App 1 - Recursive 
const getCount = (digits, n) => {
  let count = 0;
  if (n === 0 || n === 1) return 1;

  if (digits[n] === "0") return 0;

  if (digits[n - 1] > "0") {
    count = getCount(digits, n - 1);
  }

  if (digits[n - 2] === "1" || (digits[n - 2] === "2" && digits[n - 1] < "7")) {
    count += getCount(digits, n - 2);
  }

  return count;
};

const numDecodings = (s) => {
  let digits = s.split("");
  if (digits[0] === "0") return 0;
  let n = digits.length;
  return getCount(digits, n);
};
