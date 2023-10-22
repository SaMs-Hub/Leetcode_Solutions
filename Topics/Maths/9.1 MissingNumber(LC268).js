// Using math operations - O(n)
const missingNumber = (arr) => {
    let n = arr.length;
    const expectedSum = (n * (n + 1)) / 2;

    const currentSum = arr.reduce((a, b) => {
        return a + b;
    })

    let result = expectedSum - currentSum;
    return result;


}


// BF 
var missingNumber = function(arr) {
    let n = arr.length;
    arr.sort((a, b) => {
        return a - b;
    });
    let element = n;

    for (let i = 0; i < n; i++) {

        if (i !== arr[i]) {
            element = i;
            break;
        }
    }

    return element;
};
