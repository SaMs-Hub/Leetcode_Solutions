const topKFrequent = (arr, k) => {
  const myMap = new Map();

  for (let x of arr) {
    if (!myMap.has(x)) {
      myMap.set(x, 1);
    } else {
      myMap.set(x, myMap.get(x) + 1);
    }
  }

  const newArray = [...myMap.entries()];
  const sorted = newArray.sort((a, b) => {
    return b[1] - a[1];
  });

  return sorted.slice(0, k).map((x) => {
    return x[0];
  });
};



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
