// Using sort method - O(n log n)
const thirdMax = (arr) => {
  let n = arr.length;
  arr.sort((a, b) => {
    return b - a;
  });

  const filteredArray = [];
  for (let i = 0; i < n; i++) {
    if (filteredArray.includes(arr[i]) === false) {
      filteredArray.push(arr[i]);
    }
  }

  const m = filteredArray.length;
  if (m < 3) {
    return filteredArray[0];
  } else {
    return filteredArray[2];
  }
};

// O(n)
var thirdMax = function(arr) {
     // assigning with lowest possible value    
   let [first, second, third] = Array(3).fill(-Infinity);
   
   for (let i = 0; i < arr.length; i++){
       
       const currentNumber = arr[i];
       
       // handling duplicates
       if ([first, second, third].includes(currentNumber)) continue;
       if (currentNumber > first){
           [first, second, third] = [currentNumber, first, second];
       }else if (currentNumber > second) [second, third] = [currentNumber, second];
       else if (currentNumber > third) third = currentNumber;
   }
   
   return third === -Infinity ? first : third;
    
};
