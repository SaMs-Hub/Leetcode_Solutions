const arr = [1, 3, 5, 6];
const n = 6;

const getMissingNumber = (arr, n) => {
  let [firstNumber, secondNumber] = [0, 0];
  let expectedSum = (n * (n + 1)) / 2;
  let currentSum = arr.reduce((a, b) => a + b);

  let sum = expectedSum - currentSum;

  let avg = sum / 2;

  let [smallerHalf, greaterHalf] = [0, 0];

  for (let i = 0; i < n - 2; i++) {
    if (arr[i] <= avg) smallerHalf += arr[i];
    else greaterHalf += arr[i];
  }

  let totalSmallerHalf = (avg * (avg + 1)) / 2;
  firstNumber = totalSmallerHalf - smallerHalf;

  secondNumber = expectedSum - totalSmallerHalf - greaterHalf;

  return [firstNumber, secondNumber];
};

console.log(getMissingNumber(arr, n));
