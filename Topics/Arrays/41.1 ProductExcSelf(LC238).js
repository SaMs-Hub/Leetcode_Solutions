// For every number, we need everything EXCEPT itself.
// Split the answer into two sides: LEFT × RIGHT.
// First go LEFT → RIGHT and store the LEFT product.
// Then go RIGHT → LEFT and multiply the RIGHT product.
// prefix = product of everything before the current index.
// suffix = product of everything after the current index.
// result[i] = prefix × suffix.

const productExceptSelf = (arr) => {
  const result = Array.from({ length: arr.length });

  let prefix = 1;
  arr.forEach((x, index) => {
    result[index] = prefix;
    prefix *= x;
  });

  let suffix = 1;
  for (let i = arr.length - 1; i >= 0; i--) {
    result[i] *= suffix;
    suffix *= arr[i];
  }

  return result;
};
