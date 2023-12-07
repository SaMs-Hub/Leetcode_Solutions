// Selection Sort - O(n2)
var sortArray = function(arr) {
   
  let minIndex;
  for (let i = 0; i < arr.length; i++) {
    minIndex = i;

    for (let j = i + 1; j < arr.length; j++) {
      if (arr[j] <  arr[minIndex]) {
        minIndex = j;
      }
    }
    [arr[i], arr[minIndex]] = [arr[minIndex], arr[i]];
  }

  return arr;

    
};

// Bubble Sort - O(n2)
var sortArray = function(arr) {
   
   let n = arr.length;

  for (let i = 1; i <= n; i++) {
    for (let j = 0; j <= n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        [arr[j], arr[j + 1]] = [arr[j + 1], arr[j]];
      }
    }
  }
  return arr;

    
};

// Insertion sort
var sortArray = function(arr) {
  let n = arr.length;

  for (let i = 1; i < n; i++) {
    let currentElement = arr[i];
    let j = i - 1;

    while (j >= 0 && arr[j] > currentElement) {
      arr[j + 1] = arr[j];
      j -= 1;
    }
    arr[j + 1] = currentElement;
  }

  return arr;
};


// 

