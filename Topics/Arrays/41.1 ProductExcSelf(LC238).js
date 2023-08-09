/**
 * @param {number[]} nums
 * @return {number[]}
 */

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
