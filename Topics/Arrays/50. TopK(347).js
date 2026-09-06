// create a map
// loop through items and store their frequencies
// convert map entries into an array
// sort items by frequency
// take the first k items
// return them

const arr = [3, 3, 1, 2, 2, 3];
const k = 2;

const kFrequentElement = (arr, k) => {
  const myMap = new Map();

  for (let x of arr) {
    if (myMap.has(x)) {
      myMap.set(x, myMap.get(x) + 1);
    } else {
      myMap.set(x, 1);
    }
  }

  const newArr = [...myMap.entries()];
  newArr.sort((a, b) => {
    return b[1] - a[1];
  });

  return newArr.slice(0, k).map((x) => {
    return x[0];
  });
};

console.log(kFrequentElement(arr, k));



const topKFrequent = (arr, k) => {
  const result = [];
  const myMap = new Map();

  for (let x of arr) {
    if (!myMap.has(x)) {
      myMap.set(x, 1);
    } else {
      myMap.set(x, myMap.get(x) + 1);
    }
  }

  const bucket = Array.from({ length: arr.length + 1 }).map((x) => {
    return [];
  });

  for (const [num, frequency] of myMap) {
    bucket[frequency].push(num);
  }

  for (let i = bucket.length - 1; i > 0; i--) {
    for (let x of bucket[i]) {
      result.push(x);

      if (result.length === k) {
        return result;
      }
    }
  }
};
