// O(n)
var twoSum = function(arr, target) {
    const map = new Map();
    
    let i = 0;
    while (i < arr.length){
        let currentNumber = arr[i];
        
        let targetNumber = target - currentNumber;
        
        if (map.has(targetNumber)) return [map.get(targetNumber) + 1, i + 1 ];
        map.set(currentNumber,i);
        
        
        i++;
    }
    
};
