// Two pointers
const search = (arr, target) => {
    let [start, end] = [0, arr.length - 1];
    
    while (start <= end){
        let mid = (start + end) >> 1;
        if (arr[mid] == target) return mid;
        else if(arr[mid] < target) start = mid + 1;
        else end = mid - 1;
    }
    
    return -1;
}
