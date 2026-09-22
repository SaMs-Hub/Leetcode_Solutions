// stack contains indexes of days waiting for a warmer temperature.
// Look at the last index in the stack.
// If today's temperature is warmer, that waiting day is solved.
// Pop it and calculate how many days it waited.
// Keep doing this because today can solve multiple days.
// Push today's index because today may also need a warmer day.


const dailyTemperatures = (arr) => {
  const result = Array.from({ length: arr.length }).fill(0);
  const stack = [];

  arr.forEach((currentTemperature, index) => {
    while (
      stack.length > 0 &&
      currentTemperature > arr[stack[stack.length - 1]]
    ) {
      const previousIndex = stack.pop();
      result[previousIndex] = index - previousIndex;
    }
    stack.push(index);
  });

  return result;
};
