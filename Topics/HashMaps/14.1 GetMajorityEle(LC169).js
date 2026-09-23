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



const getMajorityElement = (arr) => {
    let n = arr.length;
    const occurences = new Map();

    let i = 0;
    while (i < n) {
        let currentNumber = arr[i];
        if (occurences.has(currentNumber)) {
            let occurence = occurences.get(currentNumber)
            occurences.set(currentNumber, occurence + 1);
        } else occurences.set(currentNumber, 1);

        i++;
    }


    for (let [key, value] of occurences) {
        if (value >= n / 2) return key;
    }

}
