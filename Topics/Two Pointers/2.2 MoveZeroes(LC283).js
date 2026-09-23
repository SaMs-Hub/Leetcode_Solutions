// Use current to scan every element.
// Use nonZero to track where the next non-zero belongs.
// When current finds a non-zero, copy it to nonZero.
// Move nonZero forward after placing the non-zero.
// After the scan, fill all remaining positions with 0.
// The non-zero elements keep their original order

const moveZeroes = (arr) => {
  let nonZero = 0;
  let current = 0;

  while (current < arr.length) {
    if (arr[current] !== 0) {
      arr[nonZero] = arr[current];
      nonZero += 1;
    }
    current += 1;
  }

  while (nonZero < arr.length) {
    arr[nonZero] = 0;

    nonZero += 1;
  }

  return arr;
};




// BF
const moveZeroes = (arr) => {
    const result = [];
    let count = 0;
    
    for (let x of arr){
        if (x === 0) count +=1;
        else result.push(x);
    }
    
    let i = 0;
    while (i < count){
        result.push(0);
        i += 1;
    }
    
    return result;
}

//BF for loopconst moveZeros = (arr) => {
  let zeroCount = 0;
  const n = arr.length;

  const result = [];
  for (let i = 0; i < n; i++) {
    if (arr[i] === 0) {
      zeroCount += 1;
    } else {
      result.push(arr[i]);
    }
  }

  for (let i = 0; i < zeroCount; i++) {
    result.push(0);
  }

  return result;
};

// https://leetcode.com/problems/move-zeroes/
