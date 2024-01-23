// BF O(n3)
const maxProduct = (arr) => {
  let maxValue = Number.MIN_VALUE;
  let n = arr.length;
  for (let i = 0; i < n; i++) {
    for (let j = i + 1; j < n; j++) {
      for (let k = j + 1; k < n; k++) {
        const currentProduct = arr[i] * arr[j] * arr[k];
        if (currentProduct > maxValue) {
          maxValue = Math.max(maxValue, currentProduct);
        }
      }
    }
  }

  return maxValue;
};

const arr = [8, 2, 8, 1, -4];
console.log(maxProduct(arr));


// Using math
const maxProduct = (arr) => {
  let maxValue = Number.MIN_VALUE;
  let n = arr.length;

  arr.sort((a, b) => {
    return a - b;
  });

  const initialProduct = arr[0] * arr[1] * arr[n - 1];
  const finalProduct = arr[n - 1] * arr[n - 2] * arr[n - 3];

  maxValue = Math.max(initialProduct, finalProduct);

  return maxValue;
};





