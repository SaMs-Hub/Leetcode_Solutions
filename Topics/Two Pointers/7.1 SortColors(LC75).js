// App1 - O(n)
// logic used: try put elements in [low, medium, high] format
const sortColors = (arr) => {
    let [low, medium, high] = [0, 0, arr.length - 1];
    
    while (medium <= high){
        if (arr[medium] === 0){
            [arr[medium], arr[low]] = [arr[low], arr[medium]];
            medium += 1;
            low += 1;
        }else if(arr[medium] === 1) medium += 1;
        else{
            [arr[medium], arr[high]] = [arr[high], arr[medium]];
            high -=1 ;
        }
    }
    
    
    return arr;
}
