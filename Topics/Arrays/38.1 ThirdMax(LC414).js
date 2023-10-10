// Using sort method - O(n log n)
var thirdMax = function(arr) {
     if (arr.length === 0) return arr;
    const newArr = [...new Set(arr)];
   newArr.sort((a, b) => (b - a));
   
   return newArr.length <=2 ? newArr[0] :  newArr[2]
    
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
