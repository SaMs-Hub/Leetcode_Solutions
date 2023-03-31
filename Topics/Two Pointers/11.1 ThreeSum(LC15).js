var threeSum = function(arr) {
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
                while (arr[j] === arr[j - 1] && j < k) j++;
            }
        }
    }
    
    return result;
    
};
