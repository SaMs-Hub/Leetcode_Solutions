// App 1 
var insert = function(intervals, newInterval) {
    let result = [];
    
    let [currentInterval, n] = [0, intervals.length];
    

    while (currentInterval < n && intervals[currentInterval][1] < newInterval[0]){
        result.push(intervals[currentInterval]);
        currentInterval++;
    }
    
    while (currentInterval < n && intervals[currentInterval][0] <= newInterval[1]){
        newInterval[0] = Math.min(intervals[currentInterval][0], newInterval[0]);
         newInterval[1] = Math.max(intervals[currentInterval][1], newInterval[1]);
         currentInterval++;
        
    }
    result.push(newInterval);
    
    while (currentInterval < n){
        result.push(intervals[currentInterval]);
        currentInterval++;
    }
    
    return result;
    
    
};
