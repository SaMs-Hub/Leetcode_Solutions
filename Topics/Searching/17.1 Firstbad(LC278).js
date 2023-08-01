// App 1
var solution = function(isBadVersion) {
  
    return function(n) {
        let [start, end] = [1, n];
        
        while (start <= end){
            let mid = Math.floor((start + end)/2);
            
            if (!isBadVersion(mid)) start = mid + 1;
            else end = mid - 1;
        }
        
         return start;
    };
   
};
