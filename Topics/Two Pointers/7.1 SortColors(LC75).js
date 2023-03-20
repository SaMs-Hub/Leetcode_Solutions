var sortColors = function(arr) {
    let low = 0;
    let mid = 0;
    let high = arr.length - 1;

    while (mid <= high){
        if (arr[mid] == 0){
            [arr[mid], arr[low]] = [arr[low], arr[mid]];
            low += 1;
            mid += 1;
        }else if(arr[mid] == 1){
            mid += 1;
        }else{
            [arr[mid], arr[high]] = [arr[high], arr[mid]]
            high -= 1;
        }
    }

    return arr;
    
};
