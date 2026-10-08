// Remember every number I visit
// If I reach 1 → happy
// If I see a number again → cycle → not happy


const getNext = (num) => {
  const values = String(num).split("");
  let sum = 0;

  for (let value of values) {
    sum += Number(value) ** 2;
  }

  return sum;
};

const isHappy = (num) => {
  const mySet = new Set();

  let current = num;

  while (current !== 1 && !mySet.has(current)) {
        mySet.add(current);
    current = getNext(current);


  
  }

  return current === 1;
};
