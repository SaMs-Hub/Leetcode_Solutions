// Using unshift
const plusOne = (arr) => {
    let n = arr.length;
    for (let i = n - 1; i >= 0; i--){
        if (arr[i] === 9) arr[i] = 0;
        else{
            arr[i] += 1;
            return arr;
        }
    }
    
    arr.unshift(1);
    return arr;
}
