// Using sort method
var thirdMax = function(arr) {
     if (arr.length === 0) return arr;
    const newArr = [...new Set(arr)];
   newArr.sort((a, b) => (b - a));
   
   return newArr.length <=2 ? newArr[0] :  newArr[2]
    
};



// 
