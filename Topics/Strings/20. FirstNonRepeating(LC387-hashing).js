// O (n2)


const firstUniqChar = (str) => {
  let value = -1;
  const n = str.length;

  for (let i = 0; i < n; i++) {
    let count = 0;

    for (let j = 0; j < n; j++) {
      if (str[i] === str[j]) {
        count += 1;
      }
    }

    if (count === 1) {
      value = i;
      break;
    }
  }

  return value;
};




const firstUniqChar = (str) => {
  const myMap = new Map();

  for (let x of str) {
    if (myMap.has(x)) {
      myMap.set(x, myMap.get(x) + 1);
    } else {
      myMap.set(x, 1);
    }
  }

  for (let x of str) {
    if (myMap.get(x) === 1) {
      return str.split("").indexOf(x);
    }
  }

  return -1;
};
