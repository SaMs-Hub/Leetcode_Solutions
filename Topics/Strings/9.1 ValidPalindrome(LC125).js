// App 1 Naive

const isAlphanumeric = (str) =>  {
  return str.match(/^[a-zA-Z0-9]+$/) !== null;
}

const isPalindrome = (str) => {
  let string = "";

  for (let i = 0; i < str.length; i++) {
    if (isAlphanumeric(str[i])) string += str[i];
  }

  return (
    string.toLowerCase() === string.split("").reverse().join("").toLowerCase()
  );
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
