var longestPalindrome = function(str) {
     let [start, maxLength] = [0, 0];
    if (str.length < 2) return str;
    
    let low, high;
    
    for (let i = 0; i < str.length; i += 0.5){
        low = Math.floor(i);
        high = Math.ceil(i);
        
        while (low >= 0 && high < str.length && str[low] === str[high]){

            low -= 1;
            high += 1;
        }
        
        let length = high - low - 1;
       
        if (length > maxLength){
            maxLength = length;
            start = low + 1;
        }

        
    }
            return str.substring(start, start + maxLength);
};
