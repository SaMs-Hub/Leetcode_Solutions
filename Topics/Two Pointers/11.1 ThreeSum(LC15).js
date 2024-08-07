// App1 - Naive( will throw double chars)
const arr = [-1, 0, 1, 2, -1, -4];

const threeSum = (arr) => {
  const result = [];
  const n = arr.length;

  for (let i = 0; i < n; i++) {
    for (let j = i + 1; j < n; j++) {
      for (let k = j + 1; k < n; k++) {
        const sum = arr[i] + arr[j] + arr[k];
        if (sum === 0) {
          result.push([arr[i], arr[j], arr[k]]);
        }
      }
    }
  }

  if (result.length > 1) {
    return result;
  } else {
    return -1;
  }
};

console.log(threeSum(arr));

// App2 - Using two pointers
const threeSum = (arr) => {
  let result = [];
    arr.sort((a, b) => a - b);
    
    for (let i = 0; i < arr.length; i++){
        let current = arr[i];
        if (current > 0) break;
        if (i > 0 && current === arr[i - 1]) continue;
        
        let j = i + 1;
        let k = arr.length - 1;
        
        while (j < k){
            let currentSum = current + arr[j] + arr[k];
            
            if (currentSum > 0) k--;
            else if(currentSum < 0) j++;
            else{
                result.push([current, arr[j], arr[k]]);
                j++;
                k--;

              // to handle duplicate j values
                while (arr[j] === arr[j - 1] && j < k) j++;
            }
        }
    }
    
    return result;
};
