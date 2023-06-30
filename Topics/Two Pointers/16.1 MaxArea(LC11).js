// App1 TLE
const getMaxArea = (arr) => {
    //let allAreas = [];
    let maxArea = [];
    let size = arr.length;

    for (let i = 0; i < size; i++) {
        for (let j = i + 1; j < size; j++) {
            let area = (j - i) * Math.min(arr[i], arr[j]);
            // allAreas.push(area);
            maxArea = Math.max(maxArea, area);
        }
    }

    //return [maxArea, allAreas];
    return maxArea;

}


// App2 Two pointers
