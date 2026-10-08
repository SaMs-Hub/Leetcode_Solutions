// Start with a candidate and zero votes.
// If the current number matches the candidate, increase its votes.
// If it is different, decrease its votes.
// Different numbers cancel the candidate's votes.
// When votes reach zero, choose the current number as the new candidate.
// The majority element survives all cancellations.
// Return the final candidate

const majorityElement = (arr) => {
  let majorElement = arr[0];
  let count = 0;

  arr.forEach((value) => {
    if (value === majorElement) {
      count += 1;
    } else {
      count -= 1;
    }

    if (count === 0) {
      majorElement = value;
      count = 1;
    }
  });

  return majorElement;
};


const majorityElement = (arr) => {
  const n = Math.ceil(arr.length / 2);

  const myMap = new Map();

  let result = arr[0];
  arr.forEach((x) => {
    if (myMap.has(x)) {
      myMap.set(x, myMap.get(x) + 1);

      if (myMap.get(x) >= n) {
        result = x;
      }
    } else {
      myMap.set(x, 1);
    }
  });

  return result;
};
