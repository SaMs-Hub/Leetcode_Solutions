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


// Two pointers
