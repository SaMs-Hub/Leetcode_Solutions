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
