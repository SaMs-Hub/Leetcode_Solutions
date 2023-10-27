// App 1 - Inbuilt Sort
var findKthLargest = function(arr, k) {
    let fromEnd = arr.length - k;
    arr.sort((a, b) => {
        return a - b;
    });

    return arr[fromEnd];

}
