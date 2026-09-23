// Start two pointers at the beginning and end of the string.
// Make a helper function to check if a character is alphanumeric.
// Skip non-alphanumeric characters from the left.
// Skip non-alphanumeric characters from the right.
// Compare both characters after converting them to lowercase.
// If they don't match, return false.
// If they match, move both pointers inward.
// If all characters match, return true.

const isPalindrome = (str) => {
  let left = 0;
  let right = str.length - 1;

  while (left < right) {
    if (!isLetter(str[left])) {
      left += 1;
      continue;
    }

    if (!isLetter(str[right])) {
      right -= 1;
      continue;
    }

    if (str[left].toLowerCase() !== str[right].toLowerCase()) {
      return false;
    }

    left += 1;
    right -= 1;
  }

  return true;
};
