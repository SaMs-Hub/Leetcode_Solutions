// BF O( n * k)

const arr = [1, 2, 3, 4, 5, 6, 7];

const rotateArray = (arr, k) => {
  for (let i = 0; i < k; i++) {
    arr.unshift(arr.pop());
  }

  return arr;
};

console.log(rotateArray(arr, 3));



// Optimised O(n)

const reverse = (arr, start, end) => {
  while (start < end) {
    [arr[start], arr[end]] = [arr[end], arr[start]];
    start += 1;
    end -= 1;
  }
};

const rotate = (arr, k) => {
  const n = arr.length;

  k = k % n;
  reverse(arr, 0, n - 1);
  reverse(arr, 0, k - 1);
  reverse(arr, k, n - 1);
  return arr;
};
