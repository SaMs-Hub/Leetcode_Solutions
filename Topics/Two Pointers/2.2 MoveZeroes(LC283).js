// App 1  Two P
const moveZeroes = (arr) => {
   const n = arr.length;

  let i = 0;
  let j = i + 1;

  while (j < n) {
    if (arr[i] === 0 && arr[j] !== 0) {
      [arr[i], arr[j]] = [arr[j], arr[i]];
      i++;
      j++;
    } else if (arr[i] === 0 && arr[j] === 0) {
      j++;
    } else {
      i++;
      j++;
    }
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
