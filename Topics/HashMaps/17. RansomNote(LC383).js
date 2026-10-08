const canConstruct = (a, b) => {
  const myMap = new Map();

  b.split("").forEach((x) => {
    if (myMap.has(x)) {
      myMap.set(x, myMap.get(x) + 1);
    } else {
      myMap.set(x, 1);
    }
  });

  const arr = a.split("");

  let result = true;
  arr.forEach((x, index) => {
    if (!myMap.has(x)) {
      result = false;
    } else {
      myMap.set(x, myMap.get(x) - 1);
      if (myMap.get(x) === 0) {
        myMap.delete(x);
      }
    }
  });

  return result;
};
