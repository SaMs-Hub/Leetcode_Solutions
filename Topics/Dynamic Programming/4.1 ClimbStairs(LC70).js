// App 1  - DP(bottom up)

const climbStairs = (n) => {
    let [first, second] = [1, 1];
    
    for (let i = 0; i < n - 1; i++){
        let temp = first;
        first = first + second;
        second = temp;
    }
    
    return first;
    
}
