const isPalindrome = (str, low = 0, high = str.length -1 ) => {

  while (low < high){
    if (str.charAt(low) === str.charAt(high)){
      low += 1;
      high -= 1;
    }else{
      return false;
    }

    return true;
  }

}

const canBePalindrome = (str) => {
  let low = 0;
  let high = str.length - 1;

  while (low < high){
    if (str.charAt(low) === str.charAt(high)){
      low += 1;
      high -= 1;
    }else{
      if (isPalindrome(str, low + 1, high)){
        return low
      }

      if (isPalindrome(str, low, high - 1)){
        return high;
      }

      return -1;
    }
  }

  return -2;
}



console.log(canBePalindrome("aebcba"))
