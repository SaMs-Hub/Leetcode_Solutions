// App 1 - Two pointers
/**
 * @param {number[][]} matrix
 * @return {number[]}
 */
var spiralOrder = function(arr) {
    
    let result = [];
    
    let [left, right, top, bottom] = [0, arr[0].length - 1, 0, arr.length - 1];
    
    while (left <= right && top <= bottom){
        for (let i = left; i <= right; i++){
            result.push(arr[top][i]);
           
            
        }
          top++;
        
        for (let i = top; i <= bottom; i++){
            result.push(arr[i][right]);
           
        }

          right--;
        
        if (top <= bottom){
            for (let i = right; i >= left; i--){
                result.push(arr[bottom][i]);
            }
        }
           bottom--;
        
        if (left <= right){
            for (let i = bottom; i >= top; i--){
                result.push(arr[i][left]);
            }
        }
        left++;
        
      
      
     
        
    }
    return result;
};
