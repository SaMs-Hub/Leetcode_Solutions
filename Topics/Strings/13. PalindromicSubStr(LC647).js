
const getCount = (str, left, right) => {
    let count = 0;
    while (left > 0 && right <= str.length && str[left] == str[right]){
        count++;
        left--;
        right++;
    }
    
    return count;
}

const getPalindromes = (str) => {
    let evenCount = 0;
    let oddCount = 0;
    
    for (let i = 0; i < str.length; i++){
        evenCount += getCount(str, i, i);
        oddCount += getCount(str, i, i + 1);
    }
    
    return evenCount + oddCount;
}


console.log(getPalindromes("aaa"));
