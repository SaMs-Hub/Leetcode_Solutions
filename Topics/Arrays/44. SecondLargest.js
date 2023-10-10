// O (n) 
const secondMax = (arr) => {
    
    // assigning with lowest possible value    
   let [first, second] = Array(2).fill(-Infinity);
   
   for (let i = 0; i < arr.length; i++){
       
       const currentNumber = arr[i];
       
       // handling duplicates
       if ([first, second].includes(currentNumber)) continue;
       if (currentNumber > first){
           [first, second, third] = [currentNumber, first];
       }else if (currentNumber > second) second = currentNumber
     
   }
   
   return second === -Infinity ? first : second;
}
