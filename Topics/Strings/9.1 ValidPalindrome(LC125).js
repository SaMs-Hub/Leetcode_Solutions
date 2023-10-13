// App 1 Naive

const isAlphaNumeric = (char) => {
  return char.match(/^[A-Za-z0-9]+$/) !== null;
};

const isPalindrome = (str) => {
  let string = "";

  for (let x of str) {
    if (isAlphaNumeric(x)) string += x;
  }

  // not checking with original since it got special characters
  const isValid =
    string.toLowerCase() == string.split("").reverse().join("").toLowerCase();
  return isValid;
};

// Two pointers - O(n)

const isAlphanumeric = (str) => {
  return str.match(/^[a-zA-Z0-9]+$/) !== null;
};

const isPalindrome = (str) => {
  let [left, right] = [0, str.length - 1];

  while (left < right) {
    while (!isAlphanumeric(str[left]) && left < right) left++;
    while (!isAlphanumeric(str[right]) && left < right) right--;

    if (str[left].toLowerCase() !== str[right].toLowerCase()) return false;

    left++;
    right--;
  }

  return true;
};
