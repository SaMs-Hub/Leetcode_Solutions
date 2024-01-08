// APp 1 - Hashmap O(n)

const getOccurences = (arr, num) => {
    const myMap = new Map();

    for (let x of arr){
        if (myMap.has(x)){
            myMap.set(x, myMap.get(x) + 1)
        }else{
            myMap.set(x, 1);
        }
    }

    return myMap.get(num)
}


// App 2 O(logn)
const getOccurences = (arr, num) => {
   let firstOcc = search(arr, num, true);
   let lastOcc = search(arr, num, false);

   if (firstOcc !== -1 && lastOcc !== -1){
    return lastOcc -  firstOcc + 1;
   }else{
    return 0;
   }
}

const search = (arr, num, findFirst) => {
    let n = arr.length;
    let i = 0;
    let j = n - 1;
    let ans;

    while (i <= j){
        let mid = i + Math.floor((j - i)/2);

        if (num < arr[mid]){
            j = mid - 1;
        }else if (num > arr[mid]){
            i = mid + 1;
        }else{
            ans = mid;
            if (findFirst){
                j = mid - 1;
            }else{
                i = mid + 1;
            }
        }
    }

    return ans;
}
