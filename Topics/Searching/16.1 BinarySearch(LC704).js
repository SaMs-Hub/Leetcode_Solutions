// Two pointers
const search = (arr, target) => {
    let [i, j] = [0, arr.length - 1];

    while (i <= j) {
        let mid = (i + j) >> 1;
        if (arr[mid] === target) return mid;
        else if (arr[mid] < target) i = mid + 1;
        else j = mid - 1;
    }

    return -1;

}
