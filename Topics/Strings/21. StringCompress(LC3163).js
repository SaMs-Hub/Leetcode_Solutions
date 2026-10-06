var compressedString = (str) => {
  let result = "";
  let count = 1;

  for (let i = 0; i < str.length; i++) {
    if (str[i] === str[i + 1] && count < 9) {
      count += 1;
    } else {
      result += count + str[i];
      count = 1;
    }
  }

  return result;
};
