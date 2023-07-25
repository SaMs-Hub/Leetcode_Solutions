// App  1 - O(n)

const longestPalindrome = (string) => {
    let result = 0;
    let mySet = new Set();
    
    for (let x of string){
        if (mySet.has(x)){
            result += 2;
            mySet.delete(x);
        }else mySet.add(x)
    }
    
    let mySetSize = mySet.size > 0 ? 1 : 0;
    return result + mySetSize
    
}
