// count frequency of each number
// create buckets where index = frequency
// put each number into its frequency bucket
// start from highest frequency
// collect numbers until k
// return result

const topK = (arr, k) => {
  const result = [];
  const myMap = new Map();

  arr.forEach((x) => {
    if (myMap.has(x)) {
      myMap.set(x, myMap.get(x) + 1);
    } else {
      myMap.set(x, 1);
    }
  });

  const buckets = Array.from({ length: arr.length + 1 }).fill("");

  for (let [key, value] of myMap) {
    if (!buckets[value]) {
      buckets[value] = [];
    }
    buckets[value].push(key);
  }

  [...buckets].reverse().forEach((x) => {
    if (x) {
      x.forEach((value) => {
        if (result.length < k) {
          result.push(value);
        }
      });
    }
  });
  return result;
};

console.log(topK(arr, 2));

