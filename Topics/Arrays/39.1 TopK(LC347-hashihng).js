const topKFrequent = (arr, k) => {
  const myMap = new Map();

  for (let x of arr) {
    if (myMap.has(x) === false) {
      myMap.set(x, 1);
    } else {
      myMap.set(x, myMap.get(x) + 1);
    }
  }

  const sorted = [...myMap.entries()];
  sorted.sort((a, b) => {
    return b[1] - a[1];
  });

  return sorted.slice(0, k).map((x) => {
    return x[0];
  });
};
