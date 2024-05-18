// App 1  Two P
var moveZeroes = function(nums) {
    let i = 0;
    let j = 1;

    while (j < nums.length){
        if (nums[i] == 0 && nums[j] != 0){
            [nums[i], nums[j]] = [nums[j], nums[i]];
            i++;
            j++;
        }else if(nums[i] == 0 && nums[j] == 0){
            j++;
        }else{
            i++;
            j++;
        }
    }

    return nums;
    
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

//BF for loop
const arr = [0,1,0,3,12];

const moveZeroes = (arr) => {
  const temp = [];
  let zeroCount = 0;
  
  arr.forEach((x) => {
    if (x === 0){
      zeroCount += 1;
    }else{
      temp.push(x);
    }
  })
  
  for (let i = 0; i < zeroCount; i++){
    temp.push(0);
  }
  
  return temp;
}

// https://leetcode.com/problems/move-zeroes/
