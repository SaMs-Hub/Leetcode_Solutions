
var isValid = function(str) {
      let stack = [];
    let map = {
        '}': '{',
        ']': '[',
        ')': '(',
    }

    for (let x of str) {

     
        let isPresent = x in map;
        if (!isPresent) {
            stack.push(x);
            continue;
        }

        let isEqual = stack[stack.length - 1] === map[x];
        if (isEqual) {
            stack.pop();
            continue;
        }

        return false;
    }

    return stack.length === 0;
};
