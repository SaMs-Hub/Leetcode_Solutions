// BF O(n * m)
var intersection = function(arr1, arr2) {
     const result = [];
  arr1.forEach((x) => {
    if (arr2.includes(x) && result.includes(x) === false) {
      result.push(x);
    }
  });

  return result;
};



//  O( n + m)
const findIntersection = (arr1, arr2) => {
  const set1 = new Set(arr1);
  const set2 = new Set(arr2);

  const result = [...set1].filter((x) => {
    return set2.has(x);
  });

  return result;
};
