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
const twoSum = (arr, target) => {
    const myCustomMap = new Map();
    const n = arr.length;
    
    for (let i = 0; i < n; i++){
        const currentNumber = arr[i];
        const targetNumber = target - arr[i];
        if (myCustomMap.has(targetNumber)) return [i, myCustomMap.get(targetNumber)];
        myCustomMap.set(arr[i], i);
    }
    
    return -1;
}
