// Two pointers O(n)
// using hashmap
var twoSum = function(arr, target) {
  
    let map = new Map();
    for (let i = 0; i < arr.length; i++){
        let currentNumber = arr[i];
        let targetNumber = target - currentNumber;
        
        if (map.has(targetNumber)) return [i, map.get(targetNumber)];
        map.set(currentNumber, i);
    }

};
