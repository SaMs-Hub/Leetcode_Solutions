// APp 1 
const binarySearch = (arr, target) => {
  let low = 0;
  let high = arr.length - 1;

  while (low <= high) {
    let mid = Math.floor((low + high) / 2);

    if (arr[mid] > target) {
      high = mid - 1;
    } else if (arr[mid] < target) {
      low = mid + 1;
    } else {
      return mid;
    }
  }

  return -1;
};

// App 2

const doSearch = (arr, target, low, high) => {
  const mid = Math.floor((low + high) / 2);

  if (low > high) {
    return -1;
  }

  if (arr[mid] === target) {
    return mid;
  } else if (arr[mid] < target) {
    return doSearch(arr, target, mid + 1, high);
  } else if (arr[mid] > target) {
    return doSearch(arr, target, low, mid - 1);
  }
};

const binarySearch = (arr, target) => {
  const n = arr.length;
  return doSearch(arr, target, 0, n - 1);
};
