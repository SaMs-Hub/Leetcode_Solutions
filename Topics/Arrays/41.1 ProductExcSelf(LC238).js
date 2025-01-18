/**
 * @param {number[]} nums
 * @return {number[]}
 */

// BF 

const getProduct = (arr, position) => {
  let current = 1;
  for (let i = 0; i < arr.length; i++) {
    if (position === i) {
      continue;
    } else {
      current *= arr[i];
    }
  }

  return parseInt(current);
};

const productExceptSelf = (arr) => {
  const result = [];
  const n = arr.length;

  for (let i = 0; i < n; i++) {
    result.push(getProduct(arr, i));
  }

  return result;
};


// O(n)

   const productExceptSelf = (arr) => {
    let result = [];
    let [prefix, postfix] = [1, 1];
    
    for (let i = 0; i < arr.length; i++){
        result[i] = prefix;
        prefix *= arr[i];
    }
    
    for (let i = arr.length - 2; i >= 0; i--){
        postfix *= arr[i + 1];
        result[i] *= postfix;
    }
    
   return result;
}
