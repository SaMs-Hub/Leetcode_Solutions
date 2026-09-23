// Start two pointers at the beginning and end of the array.
// Calculate the water using width × smaller height.
// Store the maximum water found so far.
// Move the pointer with the smaller height inward.
// If both heights are equal, move either pointer.
// Keep doing this until the pointers meet.
// Return the maximum water.



const maxArea = (arr) => {
  let left = 0;
  let right = arr.length - 1;
  let maxWater = 0;

  while (left < right) {
    const width = right - left;
    const height = Math.min(arr[left], arr[right]);

    const currentWater = width * height;
    maxWater = Math.max(currentWater, maxWater);

    if (arr[left] < arr[right]) {
      left += 1;
    } else {
      right -= 1;
    }
  }

  return maxWater;
};
