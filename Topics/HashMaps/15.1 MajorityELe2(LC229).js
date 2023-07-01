// App 1 - O(N)
var majorityElement = function(arr) {
     let n = arr.length;
    const occurences = new Map();

    let result = [];

    let i = 0;
    while (i < n) {
        let currentNumber = arr[i];
        if (occurences.has(currentNumber)) {
            let occurence = occurences.get(currentNumber)
            occurences.set(currentNumber, occurence + 1);
        } else occurences.set(currentNumber, 1);

        i++;
    }


    for (let [key, value] of occurences) {
        if (value > n / 3) result.push(key);
    }

    return result;
};
