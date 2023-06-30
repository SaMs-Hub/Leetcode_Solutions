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
const getMaxArea = (arr) => {
    let maxArea = 0;
    // let allAreas = [];
    let currentArea = 0;

    let [left, right] = [0, arr.length - 1];

    while (left < right) {
        currentArea = (right - left) * Math.min(arr[left], arr[right]);
        //allAreas.push(currentArea);
        maxArea = Math.max(maxArea, currentArea);

        if (arr[left] <= arr[right]) left++;
        else right--;
    }

    //return [maxArea, allAreas];
    return maxArea;

}


