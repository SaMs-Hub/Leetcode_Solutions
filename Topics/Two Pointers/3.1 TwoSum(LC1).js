// App 1 Brute force O(n**2)
const twoSum = (arr, target) => {
   
    const n = arr.length;
    for (let i = 0; i < n; i++){
        for (let j = i + 1; j < n; j++){
            if (arr[i] + arr[j] == target) return [i, j];
        }
    }
    return -1;
}




// Two pointers O(n)
// using hashmap - works with unsorted as well
var twoSum = function(arr, target) {
  
    let map = new Map();
    for (let i = 0; i < arr.length; i++){
        let currentNumber = arr[i];
        let targetNumber = target - currentNumber;
      
        if (map.has(targetNumber)) return [i, map.get(targetNumber)];
        map.set(currentNumber, i);
    }

};
